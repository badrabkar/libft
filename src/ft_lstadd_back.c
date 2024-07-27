/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 08:36:45 by babkar            #+#    #+#             */
/*   Updated: 2021/11/19 10:04:58 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*p;

	if (!*alst)
		*alst = new;
	else
	{
		p = *alst;
		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}
}
