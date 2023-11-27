#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	main()
{
	char	*c = "123455hola";
	
	printf("org: %p\n", c);
	ft_printf("mia: %p\n", c);
	return (0);
}


