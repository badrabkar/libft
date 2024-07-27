/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:43:09 by babkar            #+#    #+#             */
/*   Updated: 2021/11/16 21:02:34 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*string;

	string = NULL;
	if (s && f)
	{
		i = 0;
		string = (char *)ft_calloc((ft_strlen(s) + 1), sizeof(char));
		if (!string)
			return (0);
		while (i < ft_strlen(s))
		{
			string[i] = f(i, s[i]);
			i++;
		}
	}
	return (string);
}
