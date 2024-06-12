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

void    inter(char *s1, char *s2){
    int i = 0;
    int j;
    
    while (s1[i]){
        j = 0;
        while (s2[j]){
            if (s1[i] == s2[j]){
                if (!check_dup(s1, s1[i], i)){
                    write(1, &s1[i], 1);
                    break;
                }
            }
            ++j;
        }
        ++i;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        inter(av[1], av[2]);
    write(1, "\n", 1);
    return(0);
}
