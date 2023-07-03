/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:54:33 by pdelanno          #+#    #+#             */
/*   Updated: 2022/08/29 10:59:46 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{	
		dest[index] = src[index];
		index++;
	}
	dest[index] = src[index];
	return (dest);
}

/*int	main(void)
{
	char *src;
	char dest[13];

	src = "Hello World!";
	
	ft_strcpy(dest, src);
	printf("%s\n", src);
	printf("%s\n", dest);
}*/	
