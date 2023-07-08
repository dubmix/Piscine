/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:33:17 by digallar          #+#    #+#             */
/*   Updated: 2022/08/21 17:23:26 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric(char str)
{
	if (str < 48 || str > 57)
	{
		return (0);
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	iterator;
	int	size;

	iterator = 0;
	size = 0;
	while (str[iterator] != '\0')
	{
		iterator++;
		size++;
	}
	return (size);
}

int	ft_atoi(char str[])
{
	int	size;
	int	iterator;
	int	current;
	int	is_negative;
	int	result;

	result = 0;
	size = ft_strlen(str);
	iterator = 0;
	is_negative = 0;
	while (iterator < size)
	{
		current = str[iterator];
		if (iterator == 0 && current == '-')
			is_negative = 1;
		else if (ft_char_is_numeric(current))
			result = (result * 10) + (current - 48);
		else
			return (0);
		iterator++;
	}
	if (is_negative)
		result = result * -1;
	return (result);
}
