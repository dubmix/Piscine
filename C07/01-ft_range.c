/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 08:38:31 by pdelanno          #+#    #+#             */
/*   Updated: 2022/09/06 11:57:29 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*dest;

	if (min >= max)
		return (0);
	dest = malloc(sizeof(*dest) * (max - min));
	range = 0;
	while (min < max)
	{	
		dest[range] = min;
		range++;
		min++;
	}
	return (dest);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*dest;
	int	i;

	min = -3;
	max = 5;
	i = 0;
	dest = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d\n", dest[i]);
		i++;
	}
}*/
