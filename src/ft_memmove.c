/*
	Author		: badr abkar - nebilx - doublequintal@gmail.com
	Description : ft_memmove copies len bytes from memory area src to memory area dst 
*/

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char			*uc_dest;
	const unsigned char		*uc_src;

	uc_dest = dest;
	uc_src = src;
	
	if (uc_dest == uc_src || !len)
		return (dest);
	if (uc_dest < uc_src)
		ft_memcpy(uc_dest, uc_src, len);
	else
		while (len-- > 0)
			uc_dest[len] = uc_src[len];
	return (dest);
}
