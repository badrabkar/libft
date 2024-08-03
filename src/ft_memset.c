/*
	Author : badr abkar - nebilx - <doublequintal@gmail.com>
	Description : ft_memset writes len bytes of c to string b
*/

#include "../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
    unsigned char   *ptr;

    ptr = (unsigned char*)b;
    while (len-- > 0)
        *ptr++ = (unsigned char)c;
    return b;
}