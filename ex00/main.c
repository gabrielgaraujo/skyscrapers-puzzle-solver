/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaujo <garaujo@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:27:26 by garaujo           #+#    #+#             */
/*   Updated: 2024/04/21 19:59:58 by garaujo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "board.h"
#include "utils.h"

int	is_valid_input(char *str)
{
	int	is_within_range;
	int	is_next_num;
	int	input_count;

	input_count = 0;
	if (is_char_equal(*str, ' '))
		return (SHALL_NOT_PASS);
	while (*str != END_OF_STRING)
	{
		is_next_num = is_char_in_range(*(str + 1), '1', int2char(GRID_SIZE));
		if (is_char_equal(*str, ' ') && !is_next_num)
			return (SHALL_NOT_PASS);
		if (!is_char_equal(*str, ' '))
		{
			is_within_range = is_char_in_range(*str, '1', int2char(GRID_SIZE));
			if (!(is_within_range && !is_next_num))
				return (SHALL_NOT_PASS);
			input_count++;
		}
		str++;
	}
	return (GRID_SIZE * HINT_MULTIPLIER == input_count);
}

int	main(int argc, char **argv)
{
	char	*board;

	if (argc != 2 || !is_valid_input(argv[1]))
	{
		print("You shall not pass! Invalid arguments\n");
		return (1);
	}
	board = create_board(GRID_SIZE);
	print_board(board, GRID_SIZE);
	return (0);
}
