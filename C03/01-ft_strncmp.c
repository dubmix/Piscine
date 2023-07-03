/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:32:18 by pdelanno          #+#    #+#             */
/*   Updated: 2022/09/01 09:16:26 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

/*int	main(void)
{
	char	*s1;
	char	*s2;
	int		n;
	int		result;

	s1 = "Hello World!";
	s2 = "Helloo World?";
	n = 0;
	result = ft_strncmp(s1, s2, n);
	printf("%d ", result);
	printf("%d", strncmp(s1, s2, n));
}*/
