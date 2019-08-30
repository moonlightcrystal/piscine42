/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 20:26:06 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/02 22:18:33 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	factorial = nb * ft_recursive_factorial(nb - 1);
	return (factorial);
}

int		main(void)
{
	printf("%i\n", ft_recursive_factorial(7));
	return (0);
}
