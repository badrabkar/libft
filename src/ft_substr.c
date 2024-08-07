/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:30:41 by babkar            #+#    #+#             */
/*   Updated: 2021/11/17 10:18:05 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	char	*substring;
	size_t	j;
	size_t	finish;

	if (s)
	{
		string = (char *)s;
		substring = (char *)ft_calloc((len + 1), sizeof(char));
		if (substring == NULL)
			return (0);
		j = 0;
		finish = len + start;
		if (start <= ft_strlen(string))
		{
			while (start < finish && string[start])
				substring[j++] = string[start++];
		}
		return (substring);
	}
	else
		return (NULL);
}
