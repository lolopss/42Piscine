/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:44:12 by ldaniel           #+#    #+#             */
/*   Updated: 2023/03/17 17:44:14 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	count;
	int	i;

	count = argc - 1;
	i = 0;
	while (count > 0)
	{
		write(1, argv[count], ft_strlen(argv[count]));
		write(1, "\n", 1);
		count--;
	}
	return (0);
}
