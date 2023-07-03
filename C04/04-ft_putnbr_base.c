/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:41:59 by pdelanno          #+#    #+#             */
/*   Updated: 2022/08/31 11:42:37 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	argcheck(char *str)
{
	int	i;
	int	j;

	if (str[0] == '\0' || str[1] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[j] == str [i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	char	c;

	base_len = ft_strlen(base);
	if (argcheck(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	if (nbr < base_len)
	{
		c = base[nbr % base_len];
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr_base(nbr / base_len, base);
		c = base[nbr % base_len];
		write(1, &c, 1);
	}
}

/*int	main(void)
{
	int nbr;
	char *base;

	nbr = 673562134;
	base = "0123456789ABCDEF";
	ft_putnbr_base(nbr, base);
	write(1, "\n", 1);
	nbr = 12;
	base = "011";
	ft_putnbr_base(nbr, base);	
}*/
