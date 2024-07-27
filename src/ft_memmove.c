/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:02:30 by babkar            #+#    #+#             */
/*   Updated: 2021/11/18 17:43:23 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (char const *)src;
	if (d == s)
		return (d);
	if (d < s)
		ft_memcpy(d, s, len);
	else
		while (len-- > 0)
			d[len] = s[len];
	return (dest);
}
