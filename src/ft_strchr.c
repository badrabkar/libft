/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:18:19 by babkar            #+#    #+#             */
/*   Updated: 2021/11/15 19:05:54 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	x;
	int		i;
	int		n;
	char	*s1;

	i = 0;
	x = c;
	n = ft_strlen(s);
	s1 = (char *)s;
	while (i < n + 1)
	{
		if (s1[i] == x)
			return (&s1[i]);
		i++;
	}
	return (NULL);
}
