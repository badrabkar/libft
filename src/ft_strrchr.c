/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:06:11 by babkar            #+#    #+#             */
/*   Updated: 2021/11/18 18:06:10 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	char_to_find;
	size_t	i;
	int		index;
	char	*string;

	char_to_find = (char)c;
	string = (char *)s;
	index = -1;
	i = 0;
	while (i <= ft_strlen(string))
	{
		if (string[i] == char_to_find)
			index = i;
		i++;
	}
	if (index == -1)
		return (NULL);
	return (&string[index]);
}
