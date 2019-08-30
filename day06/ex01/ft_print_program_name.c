/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 21:53:05 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/07 02:14:56 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int i, char **argv)
{
	i = 0;
	while (*argv[i] != '\0')
		ft_putchar(*argv[i]++);
	ft_putchar('\n');
	return (0);
}
