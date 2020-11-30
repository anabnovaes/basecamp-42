/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 22:45:38 by apaula-b          #+#    #+#             */
/*   Updated: 2020/11/28 00:54:10 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int division;
	int modulus;
	int first_value;
	int second_value;

	first_value = *a;
	second_value = *b;
	division = first_value / second_value;
	modulus = first_value % second_value;
	*a = division;
	*b = modulus;
}
