/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 17:27:26 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/07 18:40:25 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_takes_place(int hour)
{
	char AM;
	char PM;

	AM = "A";
	PM = "P";

	if (hour >= 0 && hour < 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M AND %d.00 %c.M.", hour, AM ,(hour + 1), AM);
	else if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M AND %d.00 %c.M.", hour, AM ,(hour + 1), PM);
	if (hour >= 12 && hour < 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M AND %d.00 %c.M.", hour % 12, PM ,(hour + 1) % 12, PM);
	else if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M AND %d.00 %c.M.", hour % 12, PM ,(hour + 1) % 12, AM);
	if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M AND %d.00 %c.M.", hour + 12, AM ,(hour + 1), AM);
	else 
		return ;
}

