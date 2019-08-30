/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 22:54:33 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/07 02:17:05 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i_elements;
	int i_syminel;

	i_elements = 1;
	while (argc > i_elements)
	{
		i_syminel = 0;
		while (argv[i_elements][i_syminel] != '\0')
		{
			ft_putchar(argv[i_elements][i_syminel]);
			i_syminel++;
		}
		ft_putchar('\n');
		i_elements++;
	}
}
