#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	main()
{
	char	*s = "Gracia";

	printf("Hola %s\n", s);
	ft_printf("Hola %s\n", s);
	return (0);
}


