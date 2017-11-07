/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makegrid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:53:32 by ssabbah           #+#    #+#             */
/*   Updated: 2017/11/07 10:53:49 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_makegrid(int i)
{
	int		j;
	char	*str;

	str = (char*)malloc(sizeof(char) * (i * (i + 1) + 1));
	if (str == NULL)
		return (NULL);
	j = 0;
	while (j < i * (i + 1) - 1)
	{
		if ((j + 1) % (i + 1) != 0)
			str[j] = '.';
		else
			str[j] = '\n';
		j++;
	}
	str[j] = '\0';
	return (str);
}
