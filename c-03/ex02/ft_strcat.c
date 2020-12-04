/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:46:23 by apaula-b          #+#    #+#             */
/*   Updated: 2020/12/01 16:29:20 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int counter_org;
	int counter_dest;

	counter_org = 0;
	counter_dest = 0;
	while (dest[counter_org] != '\0')
	{
		counter_org++;
	}
	while (src[counter_dest] != '\0')
	{
		dest[counter_org] = src[counter_dest];
		counter_org++;
		counter_dest++;
	}
	dest[counter_org] = '\0';
	return (dest);
}
