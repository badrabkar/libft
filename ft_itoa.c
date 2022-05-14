/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:07:29 by babkar            #+#    #+#             */
/*   Updated: 2021/11/17 10:47:55 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_integer_len(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n >= 1)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_int_to_char(char *str, long int_len, long mod, int i)
{
	long	div;

	div = mod;
	while (int_len > i)
	{
		mod = div % 10;
		div = div / 10;
		str[int_len - 1] = mod + 48;
		int_len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	int_len;
	long	mod;
	int		i;

	mod = n;
	i = 0;
	int_len = ft_integer_len(n);
	str = (char *)ft_calloc(int_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (mod < 0)
	{
		mod *= -1;
		str[0] = 45;
		i = 1;
	}
	ft_int_to_char(str, int_len, mod, i);
	return (str);
}
