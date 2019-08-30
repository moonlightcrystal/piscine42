/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 15:38:22 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/12 18:00:42 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f) (int))
{
	int		i;
	int		*massive;

	i = 0;
	massive = (int*)malloc(sizeof(int) * length);
	if (&malloc == 0)
		return (NULL);
	while (i != length)
	{
		massive[i] = f(tab[i]);
		i++;
	}
	return (massive);
}
