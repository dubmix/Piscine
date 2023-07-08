/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:38:42 by pdelanno          #+#    #+#             */
/*   Updated: 2022/08/28 18:50:52 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char *dest;
	int	a;
	int b;
	
	char yx[6][6]=
	{
		{48, 48, 48, 48, 48, 48},
		{48, 48, 48, 48, 48, 48},
		{48, 48, 48, 48, 48, 48},
		{48, 48, 48, 48, 48, 48},
		{48, 48, 48, 48, 48, 48},
		{48, 48, 48, 48, 48, 48}
	};

	if (argc != 2)
		return(0);
	dest = argv[1];

	yx[0][1] = dest[0];
	yx[0][2] = dest[2];
	yx[0][3] = dest[4];
	yx[0][4] = dest[6];
	yx[5][1] = dest[8];
	yx[5][2] = dest[10];
	yx[5][3] = dest[12];
	yx[5][4] = dest[14];
	yx[1][0] = dest[16];
	yx[2][0] = dest[18];
	yx[3][0] = dest[20];
	yx[4][0] = dest[22];
	yx[1][5] = dest[24];
	yx[2][5] = dest[26];
	yx[3][5] = dest[28];
	yx[4][5] = dest[30];
	
	int cx;
	int cy;

//----------------------------------------------------
	cx = 0;
	cy = 1;
	while (cy <= 5)
	{
		if (yx[cy][cx] == '4')
		{
			yx[cy][cx + 1] = '1';
			yx[cy][cx + 2] = '2';
			yx[cy][cx + 3] = '3';
			yx[cy][cx + 4] = '4';
		}
		else if (yx[cy][cx] == '1')
		{
			yx[cy][cx + 1] = '4';
		}
		else if (yx[cy][cx] == '3' && (yx[cy][cx + 1] == '0' || yx[cy][cx + 1] == 'Y'))
		{
			yx[cy][cx + 1] = 'X';
		}
		else if (yx[cy][cx] == '2' && (yx[cy][cx + 1] == '0' || yx[cy][cx + 1] == 'X'))
		{
			yx[cy][cx + 1] = 'Y';
		}
		cy++;
	}

//----------------------------------------------------
	cx = 1;
	cy = 5;
	while (cx <= 5)
	{
		if (yx[cy][cx] == '4')
		{
			yx[cy - 1][cx] = '1';
			yx[cy - 2][cx] = '2';
			yx[cy - 3][cx] = '3';
			yx[cy - 4][cx] = '4';
		}
		else if (yx[cy][cx] == '1')
		{
			yx[cy - 1][cx] = '4';
		}
		else if (yx[cy][cx] == '3' && (yx[cy - 1][cx] == '0' || yx[cy - 1][cx] == 'Y'))
		{
			yx[cy - 1][cx] = 'X';
		}
		else if (yx[cy][cx] == '2' && (yx[cy - 1][cx] == '0' || yx[cy - 1][cx] == 'X'))
		{
			yx[cy - 1][cx] = 'Y';
		}
		cx++;
	}

//----------------------------------------------------
	cx = 5;
	cy = 1;
	while (cy <= 5)
	{
		if (yx[cy][cx] == '4')
		{
			yx[cy][cx - 1] = '1';
			yx[cy][cx - 2] = '2';
			yx[cy][cx - 3] = '3';
			yx[cy][cx - 4] = '4';
		}
		else if (yx[cy][cx] == '1')
		{
			yx[cy][cx - 1] = '4';
		}
		else if (yx[cy][cx] == '3' && (yx[cy][cx - 1] == '0' || yx[cy][cx - 1] == 'Y'))
		{
			yx[cy][cx - 1] = 'X';
		}
		else if (yx[cy][cx] == '2' && (yx[cy][cx - 1] == '0' || yx[cy][cx - 1] == 'X'))
		{
			yx[cy][cx - 1] = 'Y';
		}
		cy++;
	}

//----------------------------------------------------
	cx = 1;
	cy = 0;
	while (cx <= 5)
	{
		if (yx[cy][cx] == '4')
		{
			yx[cy + 1][cx] = '1';
			yx[cy + 2][cx] = '2';
			yx[cy + 3][cx] = '3';
			yx[cy + 4][cx] = '4';
		}
		else if (yx[cy][cx] == '1')
		{
			yx[cy + 1][cx] = '4';
		}
		else if (yx[cy][cx] == '3' && (yx[cy + 1][cx] == '0' || yx[cy + 1][cx] == 'Y'))
		{
			yx[cy + 1][cx] = 'X';
		}
		else if (yx[cy][cx] == '2' && (yx[cy + 1][cx] == '0' || yx[cy + 1][cx] == 'X'))
		{
			yx[cy + 1][cx] = 'Y';
		}
		cx++;
	}

//----------------------------------------------------
	a = 1;
	b = 1;
	while (a <= 4)
	{
		while (b <= 4)
		{
			write(1, &yx[a][b], 1);
			write(1, " ", 1);
			b++;
		}
		a++;
		write(1, "\n", 1);
		b = 1;
	}	
}
// a = 0, b = 0, a <= 5, b <= 5
