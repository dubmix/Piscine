/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 20:53:19 by pdelanno          #+#    #+#             */
/*   Updated: 2022/08/21 18:29:10 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int		ft_atoi(char str[]);

/* argc is controlling the size of the array
atoi is converting the input in terminal into a number */
int	main(int argc, char *args[])
{
	int	x;
	int	y;

	if (argc != 3)
	{	
		write(1, "Sorry, not today.", 17);
		return (0);
	}
	x = ft_atoi(args[1]);
	y = ft_atoi(args[2]);
	if (x == 0 || y == 0)
	{
		write(1, "Arguments should be positive numbers!", 37);
		return (0);
	}
	rush(x, y);
	return (0);
}
