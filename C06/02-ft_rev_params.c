/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:44:12 by pdelanno          #+#    #+#             */
/*   Updated: 2022/09/05 10:52:19 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (i < argc)
	{
		i++;
	}
	while (i > 1)
	{
		str = argv[i - 1];
		j = 0;
		while (str[j] != '\0')
		{
			write(1, &str[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
}
