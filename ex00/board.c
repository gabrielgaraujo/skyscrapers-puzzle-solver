/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:23:03 by gonische          #+#    #+#             */
/*   Updated: 2024/04/21 19:45:01 by garaujo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "board.h"

char	*create_board(int board_row_size)
{
	char			*result;
	unsigned int	board_size;
	unsigned int	i;

	if (board_row_size > 9)
		return (NULL);
	board_size = board_row_size * board_row_size;
	result = (char *)malloc(board_size);
	i = 0;
	while (i < board_size)
	{
		result[i] = (char)48;
		i++;
	}
	return (result);
}

void	print_board(const char *board, int board_row_size)
{
	int	i;
	int	board_size;

	if (board_row_size > 9)
		return ;
	i = 0;
	board_size = board_row_size * board_row_size;
	while (i < board_size)
	{
		write(1, &board[i], 1);
		i++;
		if ((i % board_row_size) == 0)
			write(1, "\n", 1);
		else
			write(1, " ", 1);
	}
	write(1, "\n", 1);
}

char	*get_board_cell(char *board, int board_row_size,
		unsigned int row, unsigned int col)
{
	return (&board[(board_row_size * row) + col]);
}
