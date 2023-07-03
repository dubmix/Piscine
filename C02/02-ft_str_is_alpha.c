/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 19:22:36 by pdelanno          #+#    #+#             */
/*   Updated: 2022/08/29 11:11:02 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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

	str = "Hello W0rld";
	result = ft_str_is_alpha(str);
	printf("%d\n", result);
	str = "Hello World!";
	result = ft_str_is_alpha(str);
	printf("%d\n", result);
	str = "HelloWorld";
	result = ft_str_is_alpha(str);
	printf("%d\n", result);
	str = "";
	result = ft_str_is_alpha(str);
	printf("%d\n", result);
}*/
