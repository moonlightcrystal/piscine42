/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 17:59:23 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/04 18:59:32 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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
