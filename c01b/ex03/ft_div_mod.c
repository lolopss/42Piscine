/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:29:53 by ldaniel           #+#    #+#             */
/*   Updated: 2023/03/07 14:25:34 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = -14;
	b = 0;

	ft_div_mod(a, b, &div, &mod);
	printf("le resultat de la division est egal a %d \n", div);
	printf("le reste est egal a %d", mod);

}*/
