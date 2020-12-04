/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 22:09:57 by apaula-b          #+#    #+#             */
/*   Updated: 2020/12/02 20:29:52 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_value(char c);
int		check_size(long int value);
void	cnvr_vlue(long int size, int value);

void	ft_putnbr(int nbr)
{
	long int	lng_vlue;
	int			size;

	lng_vlue = nbr;
	if (nbr < 0)
	{
		write(1, "-", 1);
		lng_vlue *= -1;
	}
	size = check_size(lng_vlue);
	cnvr_vlue(lng_vlue, size);
}

int		check_size(long int value)
{
	int			size;
	long int	compare_value;

	size = 1;
	compare_value = value;
	while ((compare_value / 10) > 0)
	{
		compare_value /= 10;
		size++;
	}
	return (size);
}

void	cnvr_vlue(long int value, int size)
{
	int		last_value;
	int		counter;
	char	string_print[size + 1];
	int		sub_vlue;
	int		i;

	i = 0;
	sub_vlue = 1;
	counter = 1;
	while (counter <= size)
	{
		last_value = value % 10;
		value /= 10;
		string_print[size - sub_vlue] = last_value + '0';
		counter++;
		sub_vlue++;
	}
	string_print[size] = '\0';
	while (string_print[i] != '\0')
	{
		write(1, &string_print[i], 1);
		i++;
	}
}
