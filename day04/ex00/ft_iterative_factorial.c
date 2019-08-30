/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 16:57:39 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/03 00:24:33 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
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
	while (nb >= 1)
	{
		factorial = nb * factorial ;
		nb = nb -1;
	}
return(factorial);
Int 
}



/*  1) factorial = 5 * 1 = 5
	2) nb = 5 -1 = 4

	factorial = 4 * 5 = 20
nb = 4 - 1 = 3

factorial = 3 * 20 = 60
nb = 3 -1 = 2

factorial = 2 * 60 = 120
nb = 2 -1 = 1

factorial = 1 * 120
	nb = 1 -1 = 0   */

	return (factorial);
}
