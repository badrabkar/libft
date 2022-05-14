/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 08:08:11 by babkar            #+#    #+#             */
/*   Updated: 2021/11/15 19:48:22 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	i = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (n[0] == '\0')
		return (h);
	while (h[i] && i < len)
	{
		j = 0;
		while (h[i + j] == n[j])
		{
			if (i + j == len)
				return (NULL);
			if (n[j + 1] == '\0')
				return (&h[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
