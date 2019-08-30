/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 18:33:32 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/06 18:41:42 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		counter_i;
	int		diff;

	counter_i = 0;
	diff = 0;
	while (s1[counter_i] == s2[counter_i] && s1[counter_i] != '\0'
	&& s2[counter_i] != '\0')
		counter_i++;
	diff = s1[counter_i] - s2[counter_i];
	return (diff);
}
