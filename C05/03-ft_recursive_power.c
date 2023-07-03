/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:19:14 by pdelanno          #+#    #+#             */
/*   Updated: 2022/09/05 17:02:38 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power != 0)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}

/*int	main(void)
{
	int	nb;
	int	power;

	nb = 8;
	power = -6;
	printf("%d\n", ft_recursive_power(nb, power));
}*/
