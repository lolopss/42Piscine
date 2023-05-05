/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:55:09 by ldaniel           #+#    #+#             */
/*   Updated: 2023/03/23 14:55:24 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(*str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	char	*dup;
	int	i;
	int size
	
	size = strlen(src)
	
	while (dup[i])
	{
		dup[i] = src[i]
	}
	return (*dup[i])
}
