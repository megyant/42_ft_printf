#include "ft_printf.h"

int ft_putnbr_base_upper(long n, int base)
{
	int count;
	char *hexa;

	hexa = "0123456789ABCDEF";
	if (n < 0)
	{
		ft_putchar('-');
		return (ft_putnbr_base_upper(-n, base) + 1);
	}
	else if (n < base)
		return (ft_putchar(hexa[n]));
	else 
	{
		count = ft_putnbr_base_upper(n / base, base);
		return (count + ft_putnbr_base_upper(n % base, base));
	}
}