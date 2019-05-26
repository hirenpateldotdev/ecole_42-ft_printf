#include "../ft_printf/inc/ft_printf.h"
#include <stdio.h>

void		test_c(void)
{
	char	*format;
	char	arg;
	printf("C\n_____________________________________________\n");
	format	= "%c";
	arg		= 'c';
	printf(format, arg);printf("\n");ft_printf(format, arg);printf("\n");
	printf("_____________________________________________\n");
}

void		test_s(void)
{
	char	*format;
	char	*arg;
	printf("C\n_____________________________________________\n");
	format	= "|%.7s|";
	arg		= "hello";
	printf(format, arg);printf("\n");ft_printf(format, arg);printf("\n");
	printf("_____________________________________________\n");
}

int			main(void)
{
	test_s();
	return (0);
}
