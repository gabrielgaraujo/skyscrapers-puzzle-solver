/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaujo <garaujo@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:49:08 by garaujo           #+#    #+#             */
/*   Updated: 2024/04/21 19:48:35 by garaujo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# define SHALL_NOT_PASS 0
# define END_OF_STRING '\0'
# define HINT_MULTIPLIER 4
# define GRID_SIZE 4

int		char2int(char digit);
char	int2char(int digit);
int		is_char_in_range(char c, char start, char end);
int		is_char_equal(char first_char, char second_char);
void	print(char *str);

#endif // UTILS_H
