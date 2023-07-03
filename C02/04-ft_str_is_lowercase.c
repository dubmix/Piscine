/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 07:46:46 by pdelanno          #+#    #+#             */
/*   Updated: 2022/08/29 11:18:19 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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

	str = "helloworld";
	result = ft_str_is_lowercase(str);
	printf("%d\n", result);
	str = "Helloworld";
	result = ft_str_is_lowercase(str);
	printf("%d\n", result);
	str = "hello w0rld";
	result = ft_str_is_lowercase(str);
	printf("%d\n", result);
	str = "";
	result = ft_str_is_lowercase(str);
	printf("%d\n", result);
}*/
