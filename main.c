#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	main()
{
	char	c = 'A';
	
	printf("org%c\n", c);
	ft_printf("mia%c\n", c);
	return (0);
}


