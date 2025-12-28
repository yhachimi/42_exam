/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhachimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 09:44:16 by yhachimi          #+#    #+#             */
/*   Updated: 2025/12/23 11:30:36 by yhachimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FLOOD_FILL_H
# define FLOOD_FILL_H

# include "unistd.h"
# include "stdlib.h"

typedef struct	s_point
{
	int		x;
	int		y;
}	t_point;
void  flood_fill(char **tab, t_point size, t_point begin);
