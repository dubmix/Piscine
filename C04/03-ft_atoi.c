/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 08:29:33 by pdelanno          #+#    #+#             */
/*   Updated: 2022/08/31 10:38:36 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	nb;

	i = 0;
	neg = 1;
	nb = 0;
	while (str[i] == ' ' || (str[i] <= 13 && str[i] >= 7))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{	
			neg = neg * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (neg * nb);
}		

/*int	main(void)
{
	char	*str;
	int		result;

	str = "  \n  \f  ---++-+-67845";
	result = ft_atoi(str);
	printf("%d", result);
}*/
