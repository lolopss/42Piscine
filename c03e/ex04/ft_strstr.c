/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:22:35 by ldaniel           #+#    #+#             */
/*   Updated: 2023/03/23 18:23:20 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	o;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			o = 0;
			while (to_find[o] && (str[i + o] == to_find[o]))
				o++;
			if (to_find[o] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
    char	tf[] = "jh";
    char	st[] = "";
    char	*result;

	result = ft_strstr(st, tf);
	printf("test : %s", result);
	printf("\ntest : %s\n", strstr(st, tf));
	return (0);
}*/
