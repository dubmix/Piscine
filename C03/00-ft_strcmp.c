/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:23:06 by pdelanno          #+#    #+#             */
/*   Updated: 2022/08/29 19:55:47 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2 [i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}		

/*int	main(void)
{
	char	*s1;
	char	*s2;
	int		result;

	s1 = "Helloo";
	s2 = "Hello!";
	result = ft_strcmp(s1, s2);
	printf("%d ", result);
	printf("%d", strcmp(s1,s2));
}*/
