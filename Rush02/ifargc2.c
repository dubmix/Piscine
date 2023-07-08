/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ifargc2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:15:16 by pdelanno          #+#    #+#             */
/*   Updated: 2022/09/04 23:02:31 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct _dct_ {
	char	*key;
	char	*def;

}	t_dct;

int		ft_strlen(char *str);
int		get_mod(char *str);
void	ft_putstr(char *str);
t_dct	*mk_dct(char *text, int num_lines);
char	**get_number(char *str, int block_nb);
void	putfirstlast(int array[], int j, char **ptrnum, t_dct *ptrdct);
void	puthundred(int num_lines, t_dct *ptrdct);
void	putsecond(int array[], char c, char **ptrnum, t_dct *ptrdct);
int		putthousand(int num_lines, int thousands, t_dct *ptrdct);
int		count_lines(char *str);
int		putnbr(int array[], int j, char **ptrnum, t_dct *ptrdct);
char	*getfile(char *path);

void	free_all(t_dct *ptrdct, char **ptrnum, int num_lines, int block_nb)
{
	int	i;

	i = 0;
	while (i < num_lines)
	{
		free(ptrdct[i].key);
		free(ptrdct[i].def);
		i++;
	}
	free(ptrdct);
	i = 0;
	while (i < block_nb)
	{
		free(ptrnum[i]);
		i++;
	}
	free(ptrnum);
}

int	check_z(int num_lines, char *argv, char **ptrnum, t_dct *ptrdct)
{
	int	i;

	i = 0;
	if (ft_strlen(argv) == 1)
	{
		while (i < num_lines)
		{
			if (ptrnum[0][2] == ptrdct[i].key[0])
			{
				ft_putstr(ptrdct[i].def);
				return (1);
			}
			i++;
		}
	}
	return (0);
}

int	block_zero(int block_nb, char **ptrnum)
{
	int	i;

	i = 0;
	while (i <= 2)
	{
		if (ptrnum[block_nb][i] != '0')
			return (1);
		else
			i++;
	}
	return (0);
}

void	sub_ifargc2(int array[], char **ptrnum, t_dct *ptrdct)
{
	int	j;
	int	num_lines;
	int	block_nb;
	int	thousands;

	block_nb = array[0];
	num_lines = array[1];
	j = 0;
	thousands = block_nb * 3 + 1;
	while (block_nb >= 0)
	{
		array[0] = block_nb;
		array[1] = num_lines;
		while (j <= 2)
		{
			j = putnbr(array, j, ptrnum, ptrdct);
			j++;
		}
		if (block_nb != 0 && block_zero(block_nb, ptrnum) != 0)
			thousands = putthousand(num_lines, thousands, ptrdct);
		else
			thousands = thousands - 3;
		block_nb--;
		j = 0;
	}
}

void	ifargc2(char *argv, char *path)
{
	int		num_lines;
	t_dct	*ptrdct;
	char	**ptrnum;
	int		block_nb;
	int		array[2];

	num_lines = count_lines(getfile(path));
	block_nb = (ft_strlen(argv) / 3) + get_mod(argv) - 1;
	array[0] = block_nb;
	array[1] = num_lines;
	ptrdct = mk_dct(getfile(path), num_lines);
	ptrnum = get_number(argv, block_nb);
	if (check_z(num_lines, argv, ptrnum, ptrdct) == 1)
		return ;
	sub_ifargc2(array, ptrnum, ptrdct);
	free_all(ptrdct, ptrnum, num_lines, block_nb);
}
