/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map_dimention.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-garo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:19:52 by eel-garo          #+#    #+#             */
/*   Updated: 2025/02/21 13:43:00 by eel-garo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_get_map_dimention(t_data *data)
{
	int	x;
	int	y;
	int	c;

	x = 0;
	c = 0;
	while (data->ptr[x])
	{
		y = 0;
		while (data->ptr[x][y])
		{
			if (data->ptr[x][y] == 'C')
				c++;
			y++;
		}
		x++;
	}
	data->x = x;
	data->y = y;
	data->cl = c;
}
