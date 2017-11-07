/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minsquare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 18:35:23 by ssabbah           #+#    #+#             */
/*   Updated: 2017/11/07 10:54:58 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_minsquare(int nb_tetros)
{
	int	i;
	int	nb;

	nb = nb_tetros;
	i = 2;
	if (nb_tetros == 1)
		return (2);
	nb = nb * 4;
	while (i * i < nb)
		i++;
	return (i);
}
