/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:34:44 by ldaniel           #+#    #+#             */
/*   Updated: 2023/03/10 11:17:01 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	n;

	n = 1;
	if (argc > 0)
	{
		while (n < argc)
		{
			write(1, argv[n], ft_length(argv[n]));
			write(1, "\n", 1);
			n++;
		}
	}
	return (0);
}
