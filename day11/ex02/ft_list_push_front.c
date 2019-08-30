/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 21:14:58 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/13 22:56:21 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elmo;

	if (begin_list)
	{
		if (*begin_list == NULL)
			*begin_list = ft_create_elem(data);
		else
		{
			elmo = ft_create_elem(data);
			elmo->next = *begin_list;
			*begin_list = elmo;
		}
	}
}
