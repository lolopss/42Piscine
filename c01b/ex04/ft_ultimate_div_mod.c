/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:27:30 by ldaniel           #+#    #+#             */
/*   Updated: 2023/03/07 14:27:32 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}
/*
int	main(void)
{
	int	a;
	int	b;
	
	a = 14;
	b = 5;
	
	ft_ultimate_div_mod(&a, &b);
	printf("le resultat de la division est de %d \n", a);
	printf("le reste est de %d ", b);
	return(0);
}*/
