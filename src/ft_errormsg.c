/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errormsg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 13:01:00 by ssabbah           #+#    #+#             */
/*   Updated: 2017/11/07 10:40:31 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int		ft_errormsg(int msg)
{
	if (msg == 1)
		ft_putstr("Error : the program requires one and only one argument");
	if (msg == 2)
		ft_putstr("Error opening the file");
	if (msg == 3)
		ft_putstr("The file is too large");
	if (msg == 4)
		ft_putstr("Usage : Must have only one file allowed");
	return (0);
}
