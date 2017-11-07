/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrotogrid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 15:11:21 by ssabbah           #+#    #+#             */
/*   Updated: 2017/11/07 10:56:01 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		**ft_tetrotogrid(int **tab, int nb_tetros, int width)
{
	int	i;
	int h;

	i = 0;
	h = 0;
	while (h < nb_tetros)
	{
		i = 0;
		while (i < 4)
		{
			tab[h][i] = tab[h][i] + (tab[h][i] / width);
			i++;
		}
		h++;
	}
	return (tab);
}
