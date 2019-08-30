/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 18:19:11 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/13 20:24:14 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *air;

	if (begin_list)
	{
		if (*begin_list == NULL)
			*begin_list = ft_create_elem(data);
		else
		{
			air = *begin_list;
			while (air->next != NULL)
				air = air->next;
			air->next = ft_create_elem(data);
		}
	}
}
