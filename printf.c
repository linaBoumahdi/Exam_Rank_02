#include <unistd.h>
#include <stdarg.h>

int ft_strlen(char *base)
{
	int i;

	i = 0;
	while(base[i])
		i++;
	return(i);
}
int put_str(char *str)
{
	int count;
	if(!str)
		return(write(1, "(null)", 6));
	return(write(1, str, ft_strlen(str)));
}

int put_nbr(long long int nbr, char *base)
{
	int count;
	count = 0;
	if(nbr < 0)
	{
		nbr = -nbr;
		count += write(1, "-", 1);
	}
	if (nbr >= ft_strlen(base))
		count += put_nbr((nbr / ft_strlen(base)), base);
	count += write(1, &base[nbr % ft_strlen(base)], 1);
return (count);
}

int ft_printf(const char *format, ...)
{
	int count = 0;
	va_list ptr;
	va_start(ptr, format);

	while(*format)
	{
		if(*format == '%' && (*(format + 1) == 's')|| (*(format + 1) == 'x') || (*(format + 1) == 'd')))
		{
			format ++;
			if (*format == 's')
				count += put_str(va_arg(ptr, char*));
			if (*format == 'd')
				count += put_nbr(va_arg(ptr, int), "0123456789");
			if (*format == 'x')
				count += put_nbr(va_arg(ptr, unsigned int), "0123456789abcdef");
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ptr);
	return(count);
}
#include <stdio.h>
#include <limits.h>

int main (void)
{
	int a = printf("%s\n", NULL);
	printf("%d\n", a);
	return 0;
} 
