#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	main()
{
 	int x;	
	
	printf("org:%p\n", "");
	x = ft_printf("mia:%p\n", "");
	printf ("%d", x);
	return (0);
}


