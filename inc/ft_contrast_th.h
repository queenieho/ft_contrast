/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contrast_th.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrameau <jrameau@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 17:01:54 by qho               #+#    #+#             */
/*   Updated: 2017/04/09 23:36:10 by jrameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONTRAST_TH_H
# define FT_CONTRAST_TH_H

# include <libft.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <pthread.h>

# define NUM_THREADS 32

typedef struct		s_flags
{
	char		*iname;
	char		*oname;
	float		contrast;
}					t_flags;

typedef struct		s_header
{
	int			width;
	int			height;
	int			maxgrey;
}					t_header;

typedef struct s_line
{
	int fd;
	char **lines;
	t_flags flags;
	int idx;
}			t_line;

#endif