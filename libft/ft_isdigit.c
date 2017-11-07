/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 13:29:45 by ssabbah           #+#    #+#             */
/*   Updated: 2016/12/03 13:29:47 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	int p;

	p = 0;
	if (c >= '0' && c <= '9')
		p = 1;
	return (p);
}
