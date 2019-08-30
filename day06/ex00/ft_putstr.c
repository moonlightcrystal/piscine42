/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 18:23:14 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/06 21:19:50 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int counter_index;

	counter_index = 0;
	while (str[counter_index] != '\0')
	{
		ft_putchar(str[counter_index]);
		counter_index++;
	}
}
