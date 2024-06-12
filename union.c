#include <unistd.h>

int check_dup(char *s, char c, int pos){
    int i = 0;

    while (i < pos){
        if (s[i] == c)
            return (1);
        ++i;
    }
    return (0);
}

void    ft_union(char *s1, char *s2){
    int i = 0;
    int len;

    while (s1[i]){
        if ((!check_dup(s1, s1[i], i)))
            write(1, &s1[i], 1);
        ++i;
    }
    len = i;
    i = 0;
    while (s2[i]){
        if (!check_dup(s2, s2[i], i)){
            if (!check_dup(s1, s2[i], len))
                write(1, &s2[i], 1);
        }
        ++i;
    }
}

int main(int ac, char **av){
    if (ac == 3)
        ft_union(av[1], av[2]);
    write(1, "\n", 1);
    return(0);
}
