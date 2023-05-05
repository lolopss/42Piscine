/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:31:03 by ldaniel           #+#    #+#             */
/*   Updated: 2023/03/23 18:31:28 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	sd;
	unsigned int	ss;

	sd = 0;
	ss = 0;
	while (dest[sd] && sd < size)
		sd++;
	while (src[ss] && size && sd + ss < size - 1)
	{
		dest[sd + ss] = src[ss];
		ss++;
	}
	if (sd < size)
		dest[sd + ss] = '\0';
	ss = 0;
	while (src[ss])
		ss++;
	return (sd + ss);
}
/*
int	main(void)
{
	char	dest[] = "qwerty";
	char	src[] = "azertry";

	printf("%s\n%s\n", dest, src);
	printf("%u\n", ft_strlcat(dest, src, 20));
	printf("%s\n", dest);
	return (0);
}*/
