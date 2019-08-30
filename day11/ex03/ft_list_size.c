/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 22:58:21 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/14 14:46:06 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*sun;

	i = 1;
	sun = begin_list;
	if (sun)
	{
		i = 0;	
	while (sun->next != NULL)
		{
			sun = sun->next;
			i++;
		}
	}
	return (i);
}
