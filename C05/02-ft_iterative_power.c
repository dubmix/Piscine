/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:58:04 by pdelanno          #+#    #+#             */
/*   Updated: 2022/09/05 17:12:16 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{	
	int	i;

	i = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power != 1)
	{
		nb = nb * i;
		power--;
	}
	return (nb);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_power(8, 3));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(1, -4));
	printf("%d\n", ft_iterative_power(0, 2));
	printf("%d\n", ft_iterative_power(2, 0));
}*/
