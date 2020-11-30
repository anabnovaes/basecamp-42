/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:05:27 by apaula-b          #+#    #+#             */
/*   Updated: 2020/11/26 13:44:17 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void		print_values(int dg_one, int dg_two, int dg_three, int dg_four);
void		calc_numbers(int dg_one, int dg_two, int dg_three, int dg_four);

void		ft_print_comb2(void)
{
	int dg_one;
	int dg_two;
	int dg_three;
	int dg_four;

	dg_one = 48;
	dg_two = 48;
	dg_three = 48;
	dg_four = 49;
	calc_numbers(dg_one, dg_two, dg_three, dg_four);
}

void		calc_numbers(int dg_one, int dg_two, int dg_three, int dg_four)
{
	while (dg_one < 58)
	{
		while (dg_two < 58)
		{
			dg_three = dg_one;
			dg_four = dg_two + 1;
			while (dg_three < 58)
			{
				while (dg_four < 58)
				{
					print_values(dg_one, dg_two, dg_three, dg_four);
					dg_four++;
				}
				dg_three++;
				dg_four = 48;
			}
			dg_two++;
			dg_three = 48;
		}
		dg_one++;
		dg_two = 48;
	}
}

void		print_values(int dg_one, int dg_two, int dg_three, int dg_four)
{
	if (dg_one == '9' && dg_two == '8')
	{
		write(1, &dg_one, 1);
		write(1, &dg_two, 1);
		write(1, " ", 1);
		write(1, &dg_three, 1);
		write(1, &dg_four, 1);
	}
	else
	{
		write(1, &dg_one, 1);
		write(1, &dg_two, 1);
		write(1, " ", 1);
		write(1, &dg_three, 1);
		write(1, &dg_four, 1);
		write(1, ", ", 2);
	}
}
