/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:07:04 by pdelanno          #+#    #+#             */
/*   Updated: 2022/09/06 15:28:45 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	total_length(int size, char **strs, char *sep)
{
	int	i;
	int	ccount;

	i = 0;
	ccount = 0;
	while (i < size)
	{
		ccount = ccount + ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		ccount = ccount + (ft_strlen(sep) * (size - 1));
	return (ccount + 1);
}

int	ft_cat(char *dest, char *src, int k)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[k] = src[i];
		i++;
		k++;
	}
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	str = malloc(total_length(size, strs, sep));
	while (i < size)
	{
		k = ft_cat(str, strs[i], k);
		if (i < size - 1)
		{
			k = ft_cat(str, sep, k);
		}
		i++;
	}
	str[total_length(size, strs, sep)] = '\0';
	return (str);
}

/*int	main(int argc, char *argv[])
{
	char	*sep = "//";
	char	*result = ft_strjoin(argc, argv, sep);
	(void)argc;
	printf("%d\n", total_length(argc, argv, sep));
	printf("%s\n", result);
	free(result);
}*/
