/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:41:26 by babkar            #+#    #+#             */
/*   Updated: 2021/11/16 20:45:55 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*prefix;
	char	*suffix;
	char	*string;

	string = NULL;
	if (s1 && s2)
	{
		prefix = (char *)s1;
		suffix = (char *)s2;
		string = (char *)ft_calloc(ft_strlen(prefix)
				+ ft_strlen(suffix) + 1, sizeof(char));
		if (string == NULL)
			return (0);
		ft_strlcpy(string, prefix, ft_strlen(prefix) + 1);
		ft_strlcat(string, suffix, ft_strlen(prefix) + ft_strlen(suffix) + 2);
	}
	return (string);
}
