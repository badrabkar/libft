/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:31:49 by babkar            #+#    #+#             */
/*   Updated: 2021/11/15 20:39:29 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	i = 0;
	d = dst;
	s = src;
	if (d == s)
		return (d);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
