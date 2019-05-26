#include "../ft_printf/inc/ft_printf.h"
#include <stdio.h>

void		test_mod(void)
{
	char				*format;
	printf("\n_____________________________________________\n");
	format	= "|%-0 5%|";
	printf("|%-05%|");printf("\n");ft_printf("|%-05%|");printf("\n");
	printf("_____________________________________________\n");
}

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
	printf("S\n_____________________________________________\n");
	format	= "|%.7s|";
	arg		= "hello";
	printf(format, arg);printf("\n");ft_printf(format, arg);printf("\n");
	printf("_____________________________________________\n");
}

void		test_d(void)
{
	char	*format;
	int		arg;
	printf("D\n_____________________________________________\n");
	format	= "|%08.3d|";
	arg		= 8375;
	printf(format, arg);printf("\n");ft_printf(format, arg);printf("\n");
	printf("_____________________________________________\n");
}

void		test_o(void)
{
	char				*format;
	unsigned int		arg;
	printf("O\n_____________________________________________\n");
	format	= "|%08.3u|";
	arg		= 8375;
	printf(format, arg);printf("\n");ft_printf(format, arg);printf("\n");
	printf("_____________________________________________\n");
}

int			main(void)
{
	test_mod();
	return (0);
}
