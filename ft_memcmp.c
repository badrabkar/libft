/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 07:15:00 by babkar            #+#    #+#             */
/*   Updated: 2021/11/15 15:18:55 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*r;
	unsigned char	*v;

	i = 0;
	r = (unsigned char *)s1;
	v = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > 1 && r[i] == v[i])
	{
		n--;
		i++;
	}
	return (r[i] - v[i]);
}
