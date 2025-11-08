#include "ft_printf.h"

int ft_putnbr_unsigned(unsigned int n)
{
	int count;

	count = 0;
	if (n < 10)
		count += ft_putchar(n + '0');
	else if (n > 9)
	{
		count += ft_putnbr_unsigned(n / 10);
		count += ft_putnbr_unsigned(n % 10);
	}
	return (count);
}