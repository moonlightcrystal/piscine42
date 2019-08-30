/ = (int*)malloc(sizeof(int) * (max - min));i* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 21:49:14 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/07 23:45:19 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*i;
	int		x;

	x = 0;
	if (min >= max)
		return (NULL);
	i = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		i[x] = min;
		x++;
		min++;
	}
	i[x] = '\0';
	return (i);
}
