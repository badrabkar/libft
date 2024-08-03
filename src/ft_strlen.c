/*
	Author : badr abkar - nebilx - <doublequintal@gmail.com>
	Description : ft_strlen return the length of a string
*/

#include "../includes/libft.h"

size_t	ft_strlen(const char *s)
{
	const char *str;

	str = s;
	while (*str)
		str++;
	return (str - s);
}
