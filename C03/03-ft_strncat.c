/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:42:09 by pdelanno          #+#    #+#             */
/*   Updated: 2022/08/29 19:51:04 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	s;

	s = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[s] != '\0' && s < nb)
	{
		dest[i] = src[s];
		s++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
    char    src[] = "yolo";
    char    dest[9] = {'c', 'o', 'o', 'l'};
	unsigned int	nb = 3;

    printf("%s\n", ft_strncat(dest, src, nb));
}*/
