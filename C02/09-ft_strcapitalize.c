/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 09:03:01 by pdelanno          #+#    #+#             */
/*   Updated: 2022/08/29 11:34:37 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isa(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else if (c >= '0' && c <= '9')
		return (2);
	else
		return (0);
}

int	isu(char d)
{
	if (d >= 'A' && d <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (isa(str[i - 1]) == 0 && isa(str[i]) == 1 && isu(str[i]) == 0)
			str[i] = str[i] - 32;
		else if (isa(str[i - 1]) == 1 && isa(str[i - 1]) && isu(str[i]) == 1)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "bonjour le monde";

	printf("%s\n", ft_strcapitalize(str));
}*/
