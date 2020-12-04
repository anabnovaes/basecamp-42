/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:36:08 by apaula-b          #+#    #+#             */
/*   Updated: 2020/12/04 15:58:21 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
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
			potency *= nb;
			power--;
		}
	}
	return (potency);
}
