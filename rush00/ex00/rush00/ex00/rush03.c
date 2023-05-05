/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmazari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:15:15 by cmazari           #+#    #+#             */
/*   Updated: 2023/03/05 10:15:50 by cmazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	up(int x)
{
	ft_putchar('A');
	while (x > 2)
	{
		ft_putchar('B');
		x--;
	}
	if (x == 2)
	{
		ft_putchar('C');
	}
}

void	down(int x)
{
	ft_putchar('A');
	while (x > 2)
	{
		ft_putchar('B');
		x--;
	}
	if (x == 2)
	{
		ft_putchar('C');
	}
}

void	cote(int y, int x)
{
	int	tps;

	tps = x;
	while (y > 2)
	{
		ft_putchar('B');
		if (x >= 2)
		{
			while (x > 2)
			{
				ft_putchar(' ');
				x--;
			}
			ft_putchar('B');
		}
		x = tps;
		ft_putchar('\n');
		y --;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		up(x);
		ft_putchar('\n');
		if (y > 1)
		{
			cote(y, x);
			down(x);
		}
	}
}
