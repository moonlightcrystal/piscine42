/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 22:59:11 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/05 23:32:57 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned n)
{
	int counter;

	counter = 0;
	while (src != '\0' && (counter < n))
	{
		dest[counter] = src[counter];
		counter++;
		dest[counter] = '\0';
	}
	return (dest);
}
