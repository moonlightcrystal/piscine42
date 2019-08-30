/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 16:53:43 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/05 20:45:00 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		index;
	int		number;
	int		minus;

	index = 0;
	number = 0;
	minus = 0;
	while (str[index] == '\t' || str[index] == '\n' || str[index] == ' '
	|| str[index] == '\r' || str[index] == '\f')
		index++;
	if (str[index] == '-')
		minus = 1;
	if (str[index] == '-' || str[index] == '+')
		index++;
	while (str[index] >= '0' && str[index] <= '9')
	{
		number = 10 * number + (int)str[index] - '0';
		index++;
	}
	if (minus == 1)
		number = -number;
	return (number);
}
