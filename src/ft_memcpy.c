/*
	Author 		: badr abkar - nebilx - <doublequintal@gmail.com>
	Description : copies n bytes form src to dst, if dst and src overlap the behavior is undefined
*/

#include "../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)dst;
	while(n-- > 0)
		*ptr++ = *(unsigned char*)src++;
	return dst;
}


