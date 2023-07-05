/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:10:09 by pdelanno          #+#    #+#             */
/*   Updated: 2022/09/06 15:11:15 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	m;

	m = min;
	if (min >= max)
		return (0);
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (max - m);
}

/*int	main(void)
{
	int	**range;
	int	*ptr;

	range = &ptr;
	ptr = NULL;
	printf("%d\n", ft_ultimate_range(range, 0, 6));
	printf("%i\n", (*range)[1]);
	free(*range);
}*/	
