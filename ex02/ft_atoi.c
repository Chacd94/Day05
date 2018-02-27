/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 15:00:56 by cdupuis           #+#    #+#             */
/*   Updated: 2018/02/11 19:19:21 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		put_int(char *str, int i);

int		ft_atoi(char *str)
{
	int i;

	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '+')
		{
			return (put_int(str, i + 1));
		}
		else
		{
			return (-1 * put_int(str, i + 1));
		}
	}
	else
	{
		return (put_int(str, i));
	}
}

int		put_int(char *str, int i)
{
	int nb;

	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb);
}
