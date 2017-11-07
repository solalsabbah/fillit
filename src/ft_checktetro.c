/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktetro.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 16:16:37 by ssabbah           #+#    #+#             */
/*   Updated: 2017/11/07 10:38:46 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_checkcount(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < 20)
	{
		if (str[i] == '#')
			count++;
		i++;
	}
	if (count != 4)
		return (0);
	return (1);
}

int		ft_checkexception(char *str)
{
	if (str[3] == '#' && str[4] == '#' && str[5] == '#')
		return (1);
	if (str[5] == '#' && str[9] == '#' && str[10] == '#')
		return (1);
	if (str[4] == '#' && str[5] == '#' && str[10] == '#')
		return (1);
	if (str[4] == '#' && str[5] == '#' && str[6] == '#')
		return (1);
	if (str[1] == '#' && str[4] == '#' && str[5] == '#')
		return (1);
	if (str[4] == '#' && str[5] == '#' && str[9] == '#')
		return (1);
	return (0);
}

int		ft_checktetro(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ft_checkcount(str) == 0)
		return (0);
	while (str[j] != '#' && j < 20)
		j++;
	i = j + 1;
	while (i < 20)
	{
		if (str[i] == '#')
			if (str[i - 1] != '#' && str[i - 5] != '#')
				return (ft_checkexception(&str[j]));
		i++;
	}
	return (1);
}
