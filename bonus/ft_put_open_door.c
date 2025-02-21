/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_open_door.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-garo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:50:42 by eel-garo          #+#    #+#             */
/*   Updated: 2025/02/21 20:42:43 by eel-garo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

typedef struct s_exit
{
	int x;
	int y;
	
}  t_exit;

static void	ft_exit_position(t_data *data, t_exit *exit)
{
	int i;
	int j;
	
	i = 0;
	while (i < data->x && data->ptr[i])
	{
		j = 0;
		while(j < data->y && data->ptr[i][j])
		{
			if (data->ptr[i][j] == 'E')
			{
				exit->x = i;
				exit->y = j;
			}
			j++;
		}
		i++;
	}
}

int	ft_put_open_door(t_data *data)
{
	t_exit exit;
	ft_exit_position(data, &exit);
	data->img_exit_open = mlx_xpm_file_to_image(data->mlx,
			data->relative_path_exit_open, &data->img_widht, &data->img_height);
	if (!data->img_exit_open)
		return (ft_printf(2, "Failed exit_open image"), ft_exit(data), 0);
	mlx_put_image_to_window(data->mlx, data->win, data->img_exit_open,
		(exit.y * data->img_widht), (exit.x * data->img_height));
	mlx_do_sync(data->mlx);
	return(0);
}
