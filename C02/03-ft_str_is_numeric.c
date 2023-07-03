/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 07:38:20 by pdelanno          #+#    #+#             */
/*   Updated: 2022/08/29 11:15:53 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
		}
		else
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str;
	int		result;

	str = "1234";
	result = ft_str_is_numeric(str);
	printf("%d\n", result);
	str = "1234?";
	result = ft_str_is_numeric(str);
	printf("%d\n", result);
	str = "12E4";
	result = ft_str_is_numeric(str);
	printf("%d\n", result);
	str = "";
	result = ft_str_is_numeric(str);
	printf("%d\n", result);
}*/
