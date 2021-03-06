/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pathjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qho <qho@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 21:07:23 by qho               #+#    #+#             */
/*   Updated: 2017/04/09 21:10:03 by qho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_pathjoin(char *p1, char *p2)
{
	if (!ft_strendswith(p1, "/"))
		return (ft_strjoin(ft_strjoinch(p1, '/'), p2));
	return (ft_strjoin(p1, p2));
}
