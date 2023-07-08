/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:58:18 by pdelanno          #+#    #+#             */
/*   Updated: 2022/09/04 16:01:40 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	get_mod(char *str);

int	put_num_array(char *str, char **ptrptr, int i, int j)
{
	int	k;

	k = 2;
	while (k >= 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
			ptrptr[j][k] = str[i];
		else
			ptrptr[j][k] = 'x';
		k--;
		i--;
	}
	return (i);
}

char	**get_number(char *str, int block_nb)
{
	int		i;
	int		j;
	char	**ptrptr;

	i = ft_strlen(str) - 1;
	j = 0;
	ptrptr = malloc(sizeof(ptrptr[j]) * (block_nb + 1));
	if (!ptrptr)
		return (0);
	while (j < (ft_strlen(str) / 3) + get_mod(str))
	{
		ptrptr[j] = malloc(sizeof(char) * 3);
		if (!ptrptr[j])
			return (0);
		i = put_num_array(str, ptrptr, i, j);
		j++;
	}
	return (ptrptr);
}
