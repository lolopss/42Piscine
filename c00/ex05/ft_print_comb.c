/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:17:17 by ldaniel           #+#    #+#             */
/*   Updated: 2023/03/06 12:15:30 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_show_numbers(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a;
		while (b <= '8')
		{
			c = b;
			while (c <= '9')
			{
				if (a != b && b != c && c != a)
				{
					ft_show_numbers(a, b, c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int   main(void)
{
      ft_print_comb();
}*/
