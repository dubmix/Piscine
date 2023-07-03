/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 08:02:54 by pdelanno          #+#    #+#             */
/*   Updated: 2022/08/29 11:24:59 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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

	str = "Hello World!";
	result = ft_str_is_printable(str);
	printf("%d\n", result);
	str = "1234";
	result = ft_str_is_printable(str);
	printf("%d\n", result);
	str = "";
	result = ft_str_is_printable(str);
	printf("%d\n", result);
	str = "\n";
	result = ft_str_is_printable(str);
	printf("%d\n", result);
}*/
