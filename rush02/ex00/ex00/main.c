/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:05:22 by ldaniel           #+#    #+#             */
/*   Updated: 2023/03/19 17:25:17 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_zero_to_nine(char *str)
{
	if (str[0] == '0')
		write(1, "zero", 4);
	if (str[0] == '1')
		write(1, "one", 3);
	if (str[0] == '2')
		write(1, "two", 3);
	if (str[0] == '3')
		write(1, "three", 5);
	if (str[0] == '4')
		write(1, "four", 4);
	if (str[0] == '5')
		write(1, "five", 4);
	if (str[0] == '6')
		write(1, "six", 3);
	if (str[0] == '7')
		write(1, "seven", 5);
	if (str[0] == '8')
		write(1, "eight", 5);
	if (str[0] == '9')
		write(1, "nine", 4);
}

void	ft_ten_to_nineteen(char *str)
{
	if (str[0] == '1' && str[1] == '0')
		write(1, "ten", 3);
	if (str[0] == '1' && str[1] == '1')
		write(1, "eleven", 6);
	if (str[0] == '1' && str[1] == '2')
		write(1, "twelve", 6);
	if (str[0] == '1' && str[1] == '3')
		write(1, "thirteen", 8);
	if (str[0] == '1' && str[1] == '4')
		write(1, "fourteen", 8);
	if (str[0] == '1' && str[1] == '5')
		write(1, "fifteen", 7);
	if (str[0] == '1' && str[1] == '6')
		write(1, "sixteen", 7);
	if (str[0] == '1' && str[1] == '7')
		write(1, "seventeen", 9);
	if (str[0] == '1' && str[1] == '8')
		write(1, "eighteen", 8);
	if (str[0] == '1' && str[1] == '9')
		write(1, "nineteen", 8);
}

void	ft_twenty_to_ninety_with_fourtytwo(char *str)
{
	if (str[0] == '2' && str[1] == '0')
		write(1, "twenty", 6);
	if (str[0] == '3' && str[1] == '0')
		write(1, "thirty", 6);
	if (str[0] == '4' && str[1] == '0')
		write(1, "forty", 6);
	if (str[0] == '4' && str[1] == '2')
		write(1, "forty two", 10);
	if (str[0] == '5' && str[1] == '0')
		write(1, "fifty", 5);
	if (str[0] == '6' && str[1] == '0')
		write(1, "sixty", 5);
	if (str[0] == '7' && str[1] == '0')
		write(1, "seventy", 7);
	if (str[0] == '8' && str[1] == '0')
		write(1, "eighty", 6);
	if (str[0] == '9' && str[1] == '0')
		write(1, "ninety", 6);
}

void	ft_check_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	if (i == 1)
		ft_zero_to_nine(str);
	else if (i == 2 && (ft_twenty_to_ninety_with_fourtytwo(str) || ft_ten_to_nineteen(str)))
		ft_twenty_to_ninety_with_fourtytwo(str);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_check_length(argv[1]);
		return (0);
	}
	else
		return (0);
}
