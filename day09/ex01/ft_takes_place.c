/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 17:27:26 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/07 19:00:27 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char	am;
	char	pm;

	am = 'A';
	pm = 'P';
	if (hour >= 0 && hour < 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M AND %d.00 %c.M."
		, hour, am, (hour + 1), am);
	else if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M AND %d.00 %c.M."
		, hour, am, (hour + 1), pm);
	if (hour >= 12 && hour < 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M AND %d.00 %c.M."
		, hour - 12, pm, (hour + 1) - 12, pm);
	else if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M AND %d.00 %c.M."
		, hour - 12, pm, (hour + 1) - 12, am);
	if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M AND %d.00 %c.M."
		, hour + 12, am, (hour + 1), am);
	else
		return ;
}
