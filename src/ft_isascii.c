/*
	Author : badr abkar - nebilx - <doublequintal@gmail.com>
	Description : ft_isascii checks if the character is ASCII character
*/

#include "../includes/libft.h"

int	ft_isascii(int a)
{
	return (a >= 0 && a <= 127);
}
