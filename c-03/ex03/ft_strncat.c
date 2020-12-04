/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 22:08:11 by apaula-b          #+#    #+#             */
/*   Updated: 2020/11/30 22:31:58 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int counter_dest;
	unsigned int counter_src;

	counter_dest = 0;
	counter_src = 0;
	while (dest[counter_dest] != '\0')
	{
		counter_dest++;
	}
	while (counter_src < nb && src[counter_src] != '\0')
	{
		dest[counter_dest] = src[counter_src];
		counter_dest++;
		counter_src++;
	}
	dest[counter_dest] = '\0';
	return (dest);
}
