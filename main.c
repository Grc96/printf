#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	main()
{
	char	c[] = "hola cafracola" ;
	
	printf("org: %s%s\n", c);
	ft_printf("mia: %s%\sn", c);
	return (0);
}


