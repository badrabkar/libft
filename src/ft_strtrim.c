/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:00:39 by babkar            #+#    #+#             */
/*   Updated: 2021/11/18 18:08:06 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	len;

	ptr = NULL;
	if (s1 && set)
	{
		i = 0;
		len = ft_strlen(s1);
		while (ft_strchr(set, s1[i]) && s1[i])
			i++;
		while (len > i && ft_strchr(set, s1[len - 1]))
			len--;
		ptr = (char *)ft_calloc((len - i + 1), sizeof(char));
		if (ptr)
			ft_strlcpy(ptr, s1 + i, len - i + 1);
	}
	return (ptr);
}
