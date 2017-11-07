/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algotetro.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 13:16:48 by ssabbah           #+#    #+#             */
/*   Updated: 2017/11/07 10:34:26 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include "../includes/header.h"
#include "../libft/libft.h"

int		ft_tetrofits(int **tetro, char *grid, int pos, int i)
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (grid[tetro[i][k] + pos] != '.' || tetro[i][k] +
				pos > (int)ft_strlen(grid))
			return (0);
		k++;
	}
	return (1);
}

char	*ft_printtetro(int **tetro, char *grid, int pos, int i)
{
	int	k;

	k = 0;
	while (k < 4)
	{
		grid[tetro[i][k] + pos] = 'A' + i;
		k++;
	}
	return (grid);
}

char	*ft_erasetetro(int **tetro, char *grid, int pos, int i)
{
	int k;

	k = 0;
	while (k < 4)
	{
		grid[tetro[i][k] + pos] = '.';
		k++;
	}
	return (grid);
}

int		ft_gridsize(char *grid)
{
	int i;

	i = 0;
	while (grid[i] == '.')
		i++;
	return (i);
}

int		ft_algotetro(int **tetro, int i, char *grid, int nb)
{
	unsigned long	pos;
	int				print;

	if (i >= nb)
	{
		ft_putstr(grid);
		return (1);
	}
	pos = -1;
	while (++pos < (unsigned long)ft_strlen(grid))
	{
		print = 0;
		if (ft_tetrofits(tetro, grid, pos, i))
		{
			print = 1;
			grid = ft_printtetro(tetro, grid, pos, i);
			if (ft_algotetro(tetro, i + 1, grid, nb))
				return (1);
		}
		grid = (print) ? ft_erasetetro(tetro, grid, pos, i) : grid;
	}
	if (i == 0)
		return (ft_algotetro(ft_tetrotogrid(tetro, nb, ft_gridsize(grid) + 1),
					0, ft_makegrid(ft_gridsize(grid) + 1), nb));
		return (0);
}
