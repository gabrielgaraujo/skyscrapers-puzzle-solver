/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaujo <garaujo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:35:21 by garaujo           #+#    #+#             */
/*   Updated: 2024/04/21 13:08:20 by garaujo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	char2int(char digit)
{
	return (digit - 48);
}

char	int2char(int digit)
{
	return (digit + 48);
}

int	is_char_in_range(char c, char start, char end)
{
	return ((c >= start && c <= end) ? 1 : 0);
}

int	is_char_equal(char first_char, char second_char)
{
	return ((first_char == second_char) ? 1 : 0);
}

int	ft_validate_input(char *str, int grid_size) {
   int	is_within_range;
   int	is_next_char_number;
   int	input_count;

   input_count = 0;
   if (is_char_equal(*str, ' '));
   	return 0;

   while (*str != '\0') {
	is_next_char_number = is_char_in_range(*(str + 1), '1', int2char(grid_size));
	if (is_char_equal(*str, ' ') && !is_next_char_number)
		return 0;
	else
	{
		is_within_range = is_char_in_range(*str, '1', int2char(grid_size));
		if !(is_within_range && !is_next_char_number)
			return (0);
		input_count++;
   	}
        str++;
    }

    return (grid_size * grid_size == input_count);
}

void	ft_print(char *str)
{
	int length;

	length = 0;
    while (str[length] != '\0')
	{
        length++;
	}
    write(STDOUT_FILENO, str, length);
}

int	ft_hints_length(char *str)
{
	int length;

	length = 0;
	while(*str)
	{
		if(*str >= 48 && *str <= 57)
			length++;
		str++;
	}
	return (length);
}

int	main(int argc, char **argv)
{
	int	grid_size;
	
	grid_size = 4;
	// if(argc != 2 || !ft_validate_input(argv[1]))
	// {
	// 	ft_print("ERROR: Invalid arguments\n");
	// 	return (1);
	// }

	printf("-> %d", ft_validate_input(argv[1], grid_size));

	return (0);
}
