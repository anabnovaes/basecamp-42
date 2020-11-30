/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 21:58:36 by apaula-b          #+#    #+#             */
/*   Updated: 2020/11/25 12:32:39 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_values(int first_value, int second_value, int third_value);

void	ft_print_comb(void)
{
	int first_value;
	int second_value;
	int third_value;

	first_value = 48;
	while (first_value < 56)
	{
		second_value = first_value + 1;
		while (second_value < 57)
		{
			third_value = second_value + 1;
			while (third_value < 58)
			{
				print_values(first_value, second_value, third_value);
				third_value++;
			}
			second_value++;
		}
		first_value++;
	}
}

void	print_values(int first_value, int second_value, int third_value)
{
	write(1, &first_value, 1);
	write(1, &second_value, 1);
	write(1, &third_value, 1);
	if (first_value == 55 && second_value == 56 && third_value == 57)
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}
