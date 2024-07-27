/*
	Author : badr abkar - nebilx - <doublequintal@gmail.com>
	Description : ft_isprint checks if the character is printable
*/

#include "../includes/libft.h"

int	ft_isprint(int a)
{
	return (a >= 32 && a <= 126);
}