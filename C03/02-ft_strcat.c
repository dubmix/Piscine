/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:50:42 by pdelanno          #+#    #+#             */
/*   Updated: 2022/08/29 19:41:42 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	s;

	s = 0;
	i = 0;
	while (dest[i] != '\0')
	{	
		i++;
	}
	while (src[s] != '\0')
	{
		dest[i] = src[s];
		s++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[] = "yolo";
	char	dest[9] = {'c', 'o', 'o', 'l'};

	printf("%s\n", ft_strcat(dest, src));
}*/
