/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apickett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 19:36:38 by apickett          #+#    #+#             */
/*   Updated: 2018/04/24 19:37:28 by apickett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		x;
	int		y;
	char	*joint;

	x = 0;
	y = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	joint = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (joint == NULL)
		return (NULL);
	while (s1[x] != '\0')
	{
		joint[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		joint[x + y] = s2[y];
		y++;
	}
	joint[x + y] = '\0';
	return (joint);
}
