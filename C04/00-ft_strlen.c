/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 08:07:32 by pdelanno          #+#    #+#             */
/*   Updated: 2022/08/29 18:09:21 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char *str;
	int result;

	str = "Hello World!";
	result = ft_strlen(str);
	printf("%d", result);
	return (0);
}*/
