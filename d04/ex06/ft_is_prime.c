/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 02:12:41 by abarriel          #+#    #+#             */
/*   Updated: 2016/08/09 16:48:02 by abarriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int n;

	n = nb - 1;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (n >= 2)
	{
		if (nb % n == 0)
			return (0);
		else
			n--;
	}
	return (1);
}