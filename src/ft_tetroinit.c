/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetroinit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 14:24:43 by ssabbah           #+#    #+#             */
/*   Updated: 2017/11/07 10:55:24 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		**ft_tetroinit(int **tab, int nb_tetros, int width)
{
	int i;
	int h;

	h = 0;
	while (h < nb_tetros)
	{
		i = -1;
		if (width == 2)
			while (++i < 4)
				tab[h][i] = tab[h][i] - ((tab[h][i] / 5) * 2);
		if (width == 3)
			while (++i < 4)
				tab[h][i] = tab[h][i] - (tab[h][i] / 5);
		if (width > 4)
			while (++i < 4)
				tab[h][i] = tab[h][i] + ((tab[h][i] / 5) * (width - 4));
		h++;
	}
	return (tab);
}
