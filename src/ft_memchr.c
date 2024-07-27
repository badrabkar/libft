/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:40:01 by babkar            #+#    #+#             */
/*   Updated: 2021/11/15 15:15:29 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*r;
	size_t			i;
	unsigned char	f;

	f = (unsigned char)c;
	r = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (r[i] == f)
			return (&r[i]);
		i++;
	}
	return (NULL);
}
