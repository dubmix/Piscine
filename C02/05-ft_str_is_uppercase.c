/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 07:55:21 by pdelanno          #+#    #+#             */
/*   Updated: 2022/08/29 11:21:17 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

	str = "HELLOWORLD";
	result = ft_str_is_uppercase(str);
	printf("%d\n", result);
	str = "HELLO WORLD";
	result = ft_str_is_uppercase(str);
	printf("%d\n", result);
	str = "HELLoWORLD";
	result = ft_str_is_uppercase(str);
	printf("%d\n", result);
	str = "";
	result = ft_str_is_uppercase(str);
	printf("%d\n", result);
}*/
