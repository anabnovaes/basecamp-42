/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:00:00 by apaula-b          #+#    #+#             */
/*   Updated: 2020/12/04 16:28:54 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int potency;

	potency = nb;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power <= 0 || nb <= 0)
	{
		return (0);
	}
	else
	{
		while (power > 1)
		{

			return potency *(ft_recursive_power(nb, power - 1));
		}
	}
	return (potency);
}
