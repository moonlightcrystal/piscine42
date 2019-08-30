/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 23:17:13 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/07 23:21:14 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int     ft_ultimate_range(int **range, int min, int max)
{
    int     x;

    x = 0;
    if (min <= 0)
        return (NULL);
    *range = (int*)malloc(sizeof(int) * (max - min));
    while (min < max)
    {
        *range[x] = min;
        x++;
        min++;
    }
	*range[x] = '\0';
    return (max - min);
}
