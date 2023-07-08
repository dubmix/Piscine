/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:20:38 by pdelanno          #+#    #+#             */
/*   Updated: 2022/09/01 09:12:40 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (&str[i]);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{	
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*char    *ft_strstr(char *str, char *to_find)
{
    int i;

    i = 0;
    if (*to_find == '\0')
        return (str);
    while (*str != '\0')
    {
        i = 0;
        while (str[i] == to_find[i])
        {
            if (to_find[i + 1] == '\0')
            {   
                return (str);
            }
            i++;
        }
        str++;
    }
    return (0); 
}*/

int	main(void)
{
	char	*str;
	char	*to_find;

	//str = "c'est juste une phrase de test tkt OKLM"
	str = "   j4foql ";
	to_find = "j4f";
	//printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	//to_find = "";
	//printf("%s\n", ft_strstr(str, to_find));
	//printf("%s\n", strstr(str, to_find));
	//to_find = "OKL";
	//printf("%s\n", ft_strstr(str, to_find));
	//printf("%s\n", strstr(str, to_find));
}
