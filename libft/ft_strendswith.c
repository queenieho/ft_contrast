/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strendswith.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 20:56:49 by jrameau           #+#    #+#             */
/*   Updated: 2017/04/09 21:11:09 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strendswith(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i])
		if (s1[i] == s2[0])
			if (ft_strcmp(s1 + i, s2) == 0)
				return (1);
	return (0);
}
