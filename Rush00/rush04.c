/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:44:36 by pdelanno          #+#    #+#             */
/*   Updated: 2022/08/21 13:44:44 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
const int	g_nw = 'A';
const int	g_ne = 'C';
const int	g_sw = 'C';
const int	g_se = 'A';
const int	g_lc = 'B';
const int	g_cc = 'B';
const int	g_sp = ' ';
const int	g_nl = '\n';

void	check_firstline(int j, int x)
{
	if (j == 1)
		ft_putchar(g_nw);
	else if (j == x)
		ft_putchar(g_ne);
	else
		ft_putchar(g_lc);
}

void	check_lastline(int j, int x)
{
	if (j == 1)
		ft_putchar(g_sw);
	else if (j == x)
		ft_putchar(g_se);
	else
		ft_putchar(g_lc);
}

void	check_middleline(int j, int x)
{
	if (j == 1 || j == x)
		ft_putchar(g_cc);
	else
		ft_putchar(g_sp);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= y)
	{	
		while (j <= x)
		{
			if (i == 1)
				check_firstline(j, x);
			else if (i == y)
				check_lastline(j, x);
			else
				check_middleline(j, x);
			j++;
		}
		ft_putchar(g_nl);
		i++;
		j = 1;
	}
}
