/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 16:59:26 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/14 19:04:34 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/good_lib.h"

void	ft_putstr(char *str)
{
	int	counter_index;

	counter_index = 0;
	while (str[counter_index] != '\0')
	{
		ft_putchar(str[counter_index]);
		counter_index++;
	}
}

