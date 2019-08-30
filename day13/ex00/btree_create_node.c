/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 20:43:49 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/15 21:19:49 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *elmo;

	elmo = (t_btree*)malloc(sizeof(t_btree));
	if (elmo == NULL)
		return (NULL);
	elmo->item = item;
	elmo->left = NULL;
	elmo->right = NULL;
	return (elmo);
}
