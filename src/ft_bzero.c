/*
	Author 		: badr abkar - nebilx - <doublequintal@gmail.com>
	Description : ft_bzero writes n zeroed bytes to string b
*/

#include "../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	s = ft_memset(s, 0, n);
}
