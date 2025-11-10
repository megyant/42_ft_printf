#include "ft_printf_git/ft_printf.h"
#include <limits.h>
#include <stdio.h>

void simple(void)
{
	int count1 = 0;
	int count2 = 0;
	ft_printf("======Testing simple======\n\n");
	count1 = ft_printf("Hello, world!\n");
	count2 = printf("Hello, world!\n");
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);
}

void chars(void)
{
	int	count1 = 0;
	int	count2 = 0;

	ft_printf("\n======Testing chars======\n\n");
	ft_printf("---Printing a char:---\n");
	count1 = ft_printf("%c\n", 'A');
	count2 = printf("%c\n", 'A');
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing a char in a sentence:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("This is char %c\n", 'x');
	count2 = printf("This is char %c\n", 'x');
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);
}

void strings(void)
{
	int	count1 = 0;
	int	count2 = 0;

	ft_printf("\n======Testing strings======\n\n");
	ft_printf("---Printing a string:---\n");
	count1 = ft_printf("%s\n", "Hello!");
	count2 = printf("%s\n", "Hello!");
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing a string in a sentence:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("Today is %s\n", "Monday");
	count2 = printf("Today is %s\n", "Monday");
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing a NULL string:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("A Null string is: %s\n", NULL);
	count2 = printf("A Null string is: %s\n", NULL);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);
}

void numbers_d(void)
{
	int	count1 = 0;
	int	count2 = 0;

	ft_printf("\n======Testing decimals======\n\n");
	ft_printf("---Printing a decimal:---\n");
	count1 = ft_printf("%d\n", 42);
	count2 = printf("%d\n", 42);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing a hexa in decimal:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%d\n", 0x2a);
	count2 = printf("%d\n", 0x2a);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing INT_MIN---:\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%d\n", INT_MIN);
	count2 = printf("%d\n", INT_MIN);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing INT_MAX:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%d\n", INT_MAX);
	count2 = printf("%d\n", INT_MAX);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing INT_MIN - INT_MIN:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%d\n", INT_MIN - INT_MIN);
	count2 = printf("%d\n", INT_MIN - INT_MIN);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);
}

void numbers_i(void)
{
	int	count1 = 0;
	int	count2 = 0;

	ft_printf("\n======Testing integers======\n\n");
	ft_printf("---Printing an integer:---\n");
	count1 = ft_printf("%i\n", 42);
	count2 = printf("%i\n", 42);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing a hexa in integer (decimal):---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%i\n", 0x2a);
	count2 = printf("%i\n", 0x2a);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing INT_MIN:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%i\n", INT_MIN);
	count2 = printf("%i\n", INT_MIN);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing INT_MAX:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%i\n", INT_MAX);
	count2 = printf("%i\n", INT_MAX);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing INT_MIN - INT_MIN:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%i\n", INT_MIN - INT_MIN);
	count2 = printf("%i\n", INT_MIN - INT_MIN);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);
}

void low_hexa(void)
{
	int	count1 = 0;
	int	count2 = 0;

	ft_printf("\n======Testing lowercase hexas======\n\n");
	ft_printf("---Printing an hexa:---\n");
	count1 = ft_printf("%x\n", 42);
	count2 = printf("%x\n", 42);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing INT_MIN:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%x\n", INT_MIN);
	count2 = printf("%x\n", INT_MIN);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing INT_MAX:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%x\n", INT_MAX);
	count2 = printf("%x\n", INT_MAX);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing Negative:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%x\n", -42);
	count2 = printf("%x\n", -42);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);
}

void upper_hexa(void)
{
	int	count1 = 0;
	int	count2 = 0;

	ft_printf("\n======Testing uppercase hexas======\n\n");
	ft_printf("---Printing an hexa:---\n");
	count1 = ft_printf("%X\n", 42);
	count2 = printf("%X\n", 42);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing INT_MIN:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%X\n", INT_MIN);
	count2 = printf("%X\n", INT_MIN);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing INT_MAX:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%X\n", INT_MAX);
	count2 = printf("%X\n", INT_MAX);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing Negative:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%X\n", -42);
	count2 = printf("%X\n", -42);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);
}

void numbers_u(void)
{
	int	count1 = 0;
	int	count2 = 0;

	ft_printf("\n======Testing unsigned======\n\n");
	ft_printf("---Printing an unsigned:---\n");
	count1 = ft_printf("%u\n", 42);
	count2 = printf("%u\n", 42);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing INT_MAX:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%u\n", INT_MAX);
	count2 = printf("%u\n", INT_MAX);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing INT_MIN:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%u\n", INT_MIN);
	count2 = printf("%u\n", INT_MIN);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing UINT_MAX:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%u\n", UINT_MAX);
	count2 = printf("%u\n", UINT_MAX);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

}

void pointer(void)
{
	int	count1 = 0;
	int	count2 = 0;
	int n = 50;
	char c = 'a';
	void *p = NULL;

	ft_printf("\n======Testing adresses======\n\n");
	ft_printf("---Printing the adress of an int n:---\n");
	count1 = ft_printf("%p\n", (void *)&n);
	count2 = printf("%p\n", (void *)&n);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("---Printing the adress of a char c:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%p\n", (void *)&c);
	count2 = printf("%p\n", (void *)&c);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");
	
	ft_printf("---Printing the adress of a void * NULL:---\n");
	count1 = 0;
	count2 = 0;

	count1 = ft_printf("%p\n", p);
	count2 = printf("%p\n", p);
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

}

void others(void)
{
	int	count1 = 0;
	int	count2 = 0;

	ft_printf("\n======Testing percentage======\n\n");
	count1 = ft_printf("%%\n");
	count2 = printf("%%\n");
	ft_printf("\n_Number of bytes printed_\noriginal: %d mine: %d\n",
	count2, count1);

	ft_printf("\n");

	ft_printf("\n======Testing NULL (no format)======\n");
	count1 = ft_printf(NULL);
	count2 = printf(NULL);
	ft_printf("_Returned_\noriginal: %d mine: %d\n",
	count2, count1);


	ft_printf("\n======Testing no specifier======\n");
	count1 = ft_printf("%");
	count2 = printf("%");
	ft_printf("_Returned_\noriginal: % mine: %\n",
	count2, count1);
}

int main(void)
{
	simple();
	ft_printf("\n");
	chars();
	ft_printf("\n");
	strings();
	ft_printf("\n");
	numbers_d();
	ft_printf("\n");
	numbers_i();
	ft_printf("\n");
	low_hexa();
	ft_printf("\n");
	upper_hexa();
	ft_printf("\n");
	numbers_u();
	ft_printf("\n");
	pointer();
	ft_printf("\n");
	others();
	ft_printf("\n");
}