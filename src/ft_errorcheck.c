/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errorcheck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 12:58:22 by ssabbah           #+#    #+#             */
/*   Updated: 2017/11/07 10:39:58 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include "../libft/libft.h"
#include <stdio.h>

int	ft_errorcheck(int argc, char *argv)
{
	char	*str;

	if (argc != 2)
	{
		ft_errormsg(1);
		return (0);
	}
	str = ft_filetostr(argv);
	if (ft_checkfile(str) == 0)
	{
		ft_putstr("error\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	*str;
	int		nb_tetros;
	int		i;
	int		**tetro;
	int		sq;

	if (!ft_errorcheck(argc, argv[1]))
		return (0);
	i = -1;
	str = ft_filetostr(argv[1]);
	nb_tetros = ((int)ft_strlen(str) + 1) / 21;
	sq = ft_minsquare(nb_tetros);
	tetro = ft_array(str);
	if (nb_tetros == 1 && (tetro[0][0] != 0 || tetro[0][1] != 1
				|| tetro[0][2] != 5 || tetro[0][3] != 6))
		sq++;
	while (++i < nb_tetros)
		if ((tetro[i][3] == 3 || tetro[i][3] == 15) && sq == 3)
		{
			sq++;
			break ;
		}
	ft_algotetro(ft_tetroinit(tetro, nb_tetros, sq),
			0, ft_makegrid(sq), nb_tetros);
	return (0);
}
