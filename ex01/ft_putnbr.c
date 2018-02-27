/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 09:55:50 by cdupuis           #+#    #+#             */
/*   Updated: 2018/02/20 11:08:26 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		puiss(int n)
{
	int p;

	p = 1;
	while (n >= 10)
	{
		p = 10 * p;
		n = n / 10;
	}
	return (p);
}

void	ft_putnbr2(int n)
{
	int i;
	int p;

	i = 0;
	p = puiss(n);
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr2(-1 * n);
	}
	else
	{
		while (p >= 1)
		{
			ft_putchar((n / p) % 10 + '0');
			p = p / 10;
		}
	}
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putnbr2(-214748364);
		ft_putchar('8');
	}
	else
	{
		ft_putnbr2(n);
	}
}
