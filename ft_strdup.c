/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:40:08 by babkar            #+#    #+#             */
/*   Updated: 2021/11/16 20:31:52 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (ptr == NULL)
		return (0);
	ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
	return (ptr);
}
