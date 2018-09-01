/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apickett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:39:37 by apickett          #+#    #+#             */
/*   Updated: 2018/08/16 15:39:40 by apickett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intcount(char **str)
{
	t_list *head;

	head = malloc(sizeof(t_list));
	head->i = 0;
	while (str[head->i])
		head->i++;
	return (head->i);
}
