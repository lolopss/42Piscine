/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 11:26:29 by ldaniel           #+#    #+#             */
/*   Updated: 2023/03/05 12:00:03 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	top(int x)
{
	ft_putchar('/');
	while (x > 2)
	{
		ft_putchar('*');
		x--;
	}
	if (x >= 2)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	cote(int x, int y)
{
	int	tps;

	tps = x;
	while (y > 2)
	{
		ft_putchar('*');
		if (x >= 2)
		{
			while (x > 2)
			{
				ft_putchar(' ');
				x--;
			}
			ft_putchar('*');
		}
		x = tps;
		ft_putchar('\n');
		y --;
	}
}

void	bottom(int x)
{
	ft_putchar('\\');
	while (x > 2)
	{
		ft_putchar('*');
		x --;
	}
	if (x >= 2)
	{
		ft_putchar('/');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		top(x);
		if (y > 1)
		{
			cote(x, y);
			bottom(x);
		}
	}
}
