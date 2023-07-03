/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 09:49:53 by pdelanno          #+#    #+#             */
/*   Updated: 2022/09/05 17:25:39 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	y;

	y = 1;
	while (y <= 46340 && y * y <= nb)
	{
		if (y * y == nb)
			return (y);
		else
			y++;
	}
	return (0);
}

/*int	main(void)
{
	int	nb;

	nb = 46340 * 46340;
	printf("%d\n", ft_sqrt(nb));
	nb = 2147483647;
	printf("%d\n", ft_sqrt(nb));
	nb = 25;
	printf("%d\n", ft_sqrt(nb));
}*/
