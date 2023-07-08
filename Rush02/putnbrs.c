/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbrs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:26:58 by pdelanno          #+#    #+#             */
/*   Updated: 2022/09/04 23:09:30 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct _dct_ {
	char	*key;
	char	*def;

}	t_dct;

void	ft_putstr(char *str);
int		ft_strlen(char *str);

void	putfirstlast(int array[], int j, char **ptrnum, t_dct *ptrdct)
{
	int	i;
	int	block_nb;
	int	num_lines;

	block_nb = array[0];
	num_lines = array[1];
	i = 0;
	while (i < num_lines)
	{
		if (ptrnum[block_nb][j] == ptrdct[i].key[0]
			&& (ptrnum[block_nb][j] != '0'))
		{		
			ft_putstr(ptrdct[i].def);
			if (block_nb != 0 && j != 0)
				write(1, " ", 1);
			break ;
		}
		i++;
	}
}

void	puthundred(int num_lines, t_dct *ptrdct, int zero)
{
	int	i;

	i = 0;
	if (zero != 0)
	{
		while (i < num_lines)
		{
			if (ft_strlen(ptrdct[i].key) == 3)
			{
				write(1, " ", 1);
				ft_putstr(ptrdct[i].def);
				write(1, " ", 1);
				break ;
			}
			i++;
		}
	}
}

void	putsecond(int array[], char c, char **ptrnum, t_dct *ptrdct)
{
	int	i;
	int	block_nb;
	int	num_lines;

	block_nb = array[0];
	num_lines = array[1];
	i = 0;
	while (i < num_lines)
	{
		if (ptrnum[block_nb][1] == ptrdct[i].key[0] && ptrdct[i].key[1] == c)
		{
			ft_putstr(ptrdct[i].def);
			write(1, " ", 1);
			break ;
		}
		i++;
	}
}

int	putthousand(int num_lines, int thousands, t_dct *ptrdct)
{
	int	i;

	i = 0;
	while (i < num_lines)
	{
		if (ft_strlen(ptrdct[i].key) == thousands)
		{
			ft_putstr(ptrdct[i].def);
			write(1, " ", 1);
			break ;
		}
		i++;
	}
	thousands = thousands - 3;
	return (thousands);
}

int	putnbr(int array[], int j, char **ptrnum, t_dct *ptrdct)
{
	char	c;
	int		z;
	int		block_nb;
	int		num_lines;

	block_nb = array[0];
	num_lines = array[1];
	if (j == 0 || j == 2)
		putfirstlast(array, j, ptrnum, ptrdct);
	if (j == 0 && ptrnum[block_nb][j] != 'x')
	{
		z = (ptrnum[block_nb][0] - 48);
		puthundred(num_lines, ptrdct, z);
	}
	if (j == 1)
	{
		if (ptrnum[block_nb][j] == '1')
			c = ptrnum[block_nb][j + 1];
		else
			c = '0';
		putsecond(array, c, ptrnum, ptrdct);
		if (ptrnum[block_nb][j] == '1')
			j++;
	}
	return (j);
}
