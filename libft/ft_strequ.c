/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:47:08 by ssabbah           #+#    #+#             */
/*   Updated: 2017/04/27 14:00:24 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(char const *s1, char const *s2)
{
	int i;
	int p;

	i = 0;
	p = 1;
	if (s1 != 0 && s2 != 0)
	{
		while (s1[i] != '\0' || s2[i] != '\0')
		{
			if (s1[i] != s2[i])
				p = 0;
			i++;
		}
	}
	if (p == 0)
		return (0);
	return (1);
}
