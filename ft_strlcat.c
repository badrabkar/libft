/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:33:23 by babkar            #+#    #+#             */
/*   Updated: 2021/11/18 18:13:07 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	char	*sr;
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	sr = (char *)src;
	len = 0;
	i = 0;
	if (dstsize == 0)
		return (len_src);
	if (len_dst > dstsize)
		len = dstsize + len_src;
	if (len_dst <= dstsize)
	{
		len = len_src + len_dst;
		while (len_dst < dstsize - 1 && sr[i])
			dst[len_dst++] = sr[i++];
		dst[len_dst] = '\0';
	}
	return (len);
}
