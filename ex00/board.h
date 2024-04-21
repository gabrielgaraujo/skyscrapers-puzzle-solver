/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaujo <garaujo@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:01:30 by garaujo           #+#    #+#             */
/*   Updated: 2024/04/21 19:33:17 by garaujo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOARD_H
# define BOARD_H

char	*create_board(int board_row_size);
void	print_board(const char *board, int board_row_size);

#endif // BOARD_H
