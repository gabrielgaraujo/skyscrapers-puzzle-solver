/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaujo <garaujo@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:47:19 by garaujo           #+#    #+#             */
/*   Updated: 2024/04/21 19:48:48 by garaujo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"

int	is_char_in_range(char c, char start, char end)
{
	return (c >= start && c <= end);
}

int	is_char_equal(char first_char, char second_char)
{
	return (first_char == second_char);
}

void	print(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	write(STDOUT_FILENO, str, length);
}
