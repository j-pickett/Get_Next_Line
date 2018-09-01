/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apickett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 04:08:53 by apickett          #+#    #+#             */
/*   Updated: 2018/05/08 04:08:55 by apickett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprime(int c)
{
	int	i;

	if (c < 2)
		return (0);
	i = 2;
	while (i * i <= c)
	{
		if (c % i == 0)
			return (0);
		i++;
	}
	return (1);
}