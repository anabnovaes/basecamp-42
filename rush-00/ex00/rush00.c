/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 19:52:27 by lricardo          #+#    #+#             */
/*   Updated: 2020/11/23 01:34:06 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);
void	first_line (int x);
void	middle_lines (int x);
void	last_line (int x);

void	rush(int x, int y)
{
	int	counter_lines;

	counter_lines = 0;
	while (counter_lines < y)
	{
		if (counter_lines == 0)
		{
			first_line(x);
		}
		else if (counter_lines == y - 1)
		{
			last_line(x);
		}
		else
		{
			middle_lines(x);
		}
		ft_putchar('\n');
		counter_lines++;
	}
}

void	first_line(int x)
{
	int columns_counter;

	columns_counter = 0;
	while (x > columns_counter)
	{
		if (columns_counter == 0)
		{
			ft_putchar('o');
		}
		else if (x - 1 == columns_counter)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		columns_counter++;
	}
}

void	middle_lines(int x)
{
	int columns_counter;

	columns_counter = 0;
	while (x > columns_counter)
	{
		if (columns_counter == 0)
		{
			ft_putchar('|');
		}
		else if (x - 1 == columns_counter)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		columns_counter++;
	}
}

void	last_line(int x)
{
	int columns_counter;

	columns_counter = 0;
	while (x > columns_counter)
	{
		if (columns_counter == 0)
		{
			ft_putchar('o');
		}
		else if (columns_counter == x - 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		columns_counter++;
	}
}
