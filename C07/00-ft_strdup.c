/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 08:03:41 by pdelanno          #+#    #+#             */
/*   Updated: 2022/09/06 11:52:14 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*dest;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	dest = malloc(sizeof(*dest) * (length + 1));
	i = 0;
	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*str;
	char	*dest;

	str = "Hello World!";
	dest = strdup(str);
	printf("%s\n", str);
	printf("%s\n", dest);
	dest = ft_strdup(str);
	printf("%s\n", str);
	printf("%s\n", dest);
}*/
