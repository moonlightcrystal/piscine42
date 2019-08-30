/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 21:11:22 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/07 22:55:16 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*z;
	int		i;
	int		ii;

	i = 0;
	ii = 0;
	while (src[i] != '\0')
		i++;
	z = (char*)malloc(sizeof(char) * (i + 1));
	while (src[ii] != '\0')
	{
		z[ii] = src[ii];
		ii++;
	}
	z[ii] = '\0';
	if (z == NULL)
		return (NULL);
	return (z);
}
