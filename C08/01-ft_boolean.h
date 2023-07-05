/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:32:39 by pdelanno          #+#    #+#             */
/*   Updated: 2022/09/08 11:07:20 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum s_bool {
	TRUE,
	FALSE
}	t_bool;

# define EVEN(nbr) (nbr % 2 == 0)

# define EVEN_MSG "I have an even number of arguments.\n"

# define ODD_MSG "I have an odd number of arguments.\n"

# define SUCCESS 0

#endif
