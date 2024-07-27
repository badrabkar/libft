/*
	Author : badr abkar <doublequintal@gmail.com
	Description : ft_isalnum checks if the character is alphanumeric
*/

#include "../includes/libft.h"

int	ft_isalnum(int a)
{
	return (!(!ft_isdigit(a) && !ft_isalpha(a)));
}
