/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filetostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 13:09:07 by ssabbah           #+#    #+#             */
/*   Updated: 2017/11/07 10:41:49 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include "../libft/libft.h"
#define BUF_SIZE 600

char	*ft_filetostr(char *file)
{
	int		ret;
	int		fd;
	char	*buf;
	char	*str;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_errormsg(2);
		return (0);
	}
	if ((buf = (char*)malloc(sizeof(*buf) * (BUF_SIZE + 1))) == 0)
		return (0);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	str = ft_strdup(buf);
	close(fd);
	free(buf);
	return (str);
}
