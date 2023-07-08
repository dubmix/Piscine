/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:58:18 by pdelanno          #+#    #+#             */
/*   Updated: 2022/09/04 23:13:31 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct _dct_ {
	char	*key;
	char	*def;

}	t_dct;

int		ft_strlen(char *str);
int		get_mod(char *str);
void	ft_putstr(char *str);
t_dct	*mk_dct(char *text, int num_lines);
char	**get_number(char *str);
void	putfirstlast(int array[], int j, char **ptrnum, t_dct *ptrdct);
void	puthundred(int num_lines, t_dct *ptrdct);
void	putsecond(int array[], char c, char **ptrnum, t_dct *ptrdct);
int		putthousand(int num_lines, int thousands, t_dct *ptrdct);
int		count_lines(char *str);

int		putnbr(int array[], int j, char **ptrnum, t_dct *ptrdct);

char	*getfile(char *path)
{
	static char		text[1000];
	unsigned int	filedesc;

	filedesc = open(path, O_RDONLY);
	read(filedesc, text, 1000);
	close(filedesc);
	return (text);
}

void	sub_ifargc2(int array[], char **ptrnum, t_dct *ptrdct);

void	ifargc2(char *argv, char *path);

int	main(int argc, char *argv[])
{
	char	*path;

	if (argc == 2)
	{	
		path = "numbers.dict";
		ifargc2(argv[1], path);
	}
	else if (argc == 3)
	{
		path = argv[2];
		ifargc2(argv[1], path);
	}
	else
		write(1, "Error", 5);
}
