/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkfile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 13:47:44 by ssabbah           #+#    #+#             */
/*   Updated: 2017/11/07 10:56:27 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include "../libft/libft.h"

int		ft_checkfile(char *str)
{
	int i;

	if (((int)ft_strlen(str) + 1) % 21 != 0)
	{
		return (0);
	}
	if ((int)ft_strlen(str) > 550)
	{
		return (0);
	}
	i = 0;
	while (ft_checkline(&str[i]) && ft_checktetro(&str[i]))
	{
		if (i + 20 == (int)ft_strlen(str))
			return (1);
		i = i + 20;
		if (str[i] != '\n')
			return (0);
		i++;
	}
	if (i == (int)ft_strlen(str))
		return (1);
	return (0);
}
