/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mk_dct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:58:18 by pdelanno          #+#    #+#             */
/*   Updated: 2022/09/04 23:10:11 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct _dct_ {
	char	*key;
	char	*def;

}	t_dct;

void	put_key(char *text, t_dct *dctindex, int array[], int k)
{
	int	buffersize;
	int	cpoint;
	int	tindex;
	int	pos;

	pos = 0;
	buffersize = 0;
	cpoint = array[1] - 1;
	tindex = array[0] - 1;
	while (text[++tindex] != ':')
	{	
		if (text[tindex] == ' ')
			cpoint++;
		if (text[tindex] >= '0' && text[tindex] <= '9')
			buffersize++;
	}
	dctindex[k].key = malloc(sizeof(char) * buffersize);
	while (text[++cpoint] != ':')
	{
		dctindex[k].key[pos] = text[cpoint];
		pos++;
	}
	array[1] = cpoint;
	array[0] = tindex;
}

void	put_def(char *text, t_dct *dctindex, int array[], int k)
{
	int	buffersize;
	int	cpoint;
	int	tindex;
	int	pos;

	pos = 0;
	buffersize = 0;
	cpoint = array[1] - 1;
	tindex = array[0] - 1;
	while (text[++tindex] != '\n')
	{
		if (text[tindex] == ' ')
			cpoint++;
		if (text[tindex] >= 33)
			buffersize++;
	}
	dctindex[k].def = malloc(sizeof(char) * buffersize);
	while (text[++cpoint] != '\n')
	{
		dctindex[k].def[pos] = text[cpoint];
		pos++;
	}
	array[1] = cpoint;
	array[0] = tindex;
}

t_dct	*mk_dct(char *text, int num_lines)
{
	int		k;
	int		array[2];
	t_dct	*dctindex;

	array[0] = 0;
	array[1] = 0;
	k = 0;
	dctindex = malloc(sizeof(dctindex[k]) * num_lines);
	while (k < num_lines)
	{
		put_key(text, dctindex, array, k);
		array[1]++;
		put_def(text, dctindex, array, k);
		array[0]++;
		array[1]++;
		k++;
	}
	return (dctindex);
}
