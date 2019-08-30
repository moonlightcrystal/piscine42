/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 21:11:51 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/05 22:50:59 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		counter_i;

	counter_i = 0;
	while (src[counter_i] != '\0')
	{
		dest[counter_i] = src[counter_i];
		counter_i++;
	}
	dest[counter_i] = '\0';
	return (dest);
}
