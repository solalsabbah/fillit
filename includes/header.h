/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 14:19:50 by ssabbah           #+#    #+#             */
/*   Updated: 2017/10/09 15:14:27 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*ft_filetostr(char *file);
int		ft_errormsg(int msg);
int		ft_errorcheck(int argc, char *argv);
int		ft_checkline(char *str);
int		ft_checkfile(char *str);
int		ft_checkcount(char *str);
int		ft_checktetro(char *str);
int		ft_checkexception(char *str);
int		ft_minsquare(int nb_tetros);
int		**ft_array(char *str);
char	*ft_cutcol(char *str);
char	*ft_cutrow(char *str);
int		*ft_coord(int *tetro, char *str);
int		ft_algotetro(int **tetro, int i, char *grid, int nb);
int		ft_gridsize(char *grid);
int		ft_tetrofits(int **tetro, char *grid, int pos, int i);
char	*ft_erasetetro(int **tetro, char *grid, int pos, int i);
char	*ft_printtetro(int **tetro, char *grid, int pos, int i);
int		**ft_tetroinit(int **t, int nb_tetros, int width);
char	*ft_makegrid(int i);
int		**ft_tetrotogrid(int **tab, int nb_tetros, int width);

#endif
