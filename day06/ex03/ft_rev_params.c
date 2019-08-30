/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 23:21:12 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/07 02:18:37 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int	i_elements;
	int	i_syminel;

	i_elements = (argc - 1);
	while (i_elements > 0)
	{
		i_syminel = 0;
		while (argv[i_elements][i_syminel] != '\0')
		{
			ft_putchar(argv[i_elements][i_syminel]);
			i_syminel++;
		}
		ft_putchar('\n');
		i_elements--;
	}
}
