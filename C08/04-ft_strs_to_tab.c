/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:05:55 by pdelanno          #+#    #+#             */
/*   Updated: 2022/09/08 16:14:44 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str, int size)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * size + 1);
	if (!dest)
		return (0);
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*struc;

	struc = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!struc)
		return (0);
	i = 0;
	while (i < ac)
	{
		struc[i].size = ft_strlen(av[i]);
		struc[i].str = av[i];
		struc[i].copy = ft_strdup(av[i], ft_strlen(av[i]));
		i++;
	}
	struc[i].size = 0;
	struc[i].str = 0;
	struc[i].copy = 0;
	return (struc);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	int			i;
	t_stock_str	*struc;

	struc = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i <= argc)
	{
		printf("%d\n", struc[i].size);
		printf("%s\n", struc[i].str);
		printf("%s\n", struc[i].copy);
		printf("\n");
		i++;
	}
	free(struc);
	return (0);
}*/
