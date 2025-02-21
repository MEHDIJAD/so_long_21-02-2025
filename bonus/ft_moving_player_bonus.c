/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moving_player_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-garo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 15:15:03 by eel-garo          #+#    #+#             */
/*   Updated: 2025/02/21 15:18:12 by eel-garo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_first_move(int keycode, t_data *data)
{
	static int	movement_count;

	ft_get_player_position(data);
	if (keycode == XK_Escape)
		ft_exit(data);
	if (keycode == XK_Right)
		put_move(data, data->y_p, data->x_p + 1, &movement_count);
	if (keycode == XK_Left)
		put_move(data, data->y_p, data->x_p - 1, &movement_count);
	if (keycode == XK_Down)
		put_move(data, data->y_p + 1, data->x_p, &movement_count);
	if (keycode == XK_Up)
		put_move(data, data->y_p - 1, data->x_p, &movement_count);
	return (0);
}
