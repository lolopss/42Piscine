/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:11:24 by ldaniel           #+#    #+#             */
/*   Updated: 2023/03/07 10:15:20 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
/*
int	main(void)
{
	int a;
	int b;
	
	a = -5;
	b = 10;
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d", b);
}*/
