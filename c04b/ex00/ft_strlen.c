/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:09:11 by ldaniel           #+#    #+#             */
/*   Updated: 2023/03/14 14:09:13 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0 ;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	str[] = "coucou";
	printf("%d \n", ft_strlen(str));
	return (0);
}*/
