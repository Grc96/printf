#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	main()
{
	char	*s = "Gracia";
	char	c = 'A';
	
	ft_printf("Hola %c\n", c);
	return (0);
}


