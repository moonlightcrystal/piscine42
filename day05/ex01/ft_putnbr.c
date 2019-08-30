/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcorie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 19:46:13 by kcorie            #+#    #+#             */
/*   Updated: 2019/03/05 16:43:17 by kcorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	char	a[12];
	int		i;
	int		ostatok;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb == -2147483648)
	{
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	while (nb >= 1)
	{
		ostatok = nb % 10;
		a[i] = ostatok + '0';
		nb = nb / 10;
		i++;
	}
	while (i >= 0)
		ft_putchar(a[i--]);
}
