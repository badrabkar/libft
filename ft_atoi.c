/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:08:03 by babkar            #+#    #+#             */
/*   Updated: 2021/11/18 18:15:44 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == 45)
		sign *= (-1);
	if (*str == 45 || *str == 43)
		str++;
	if (!ft_isdigit(*str))
		return (0);
	while (ft_isdigit(*str))
		num = num * 10 + (*str++ - 48);
	return (num * sign);
}
