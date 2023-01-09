/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   closing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 00:00:43 by mirsella          #+#    #+#             */
/*   Updated: 2023/01/10 00:01:15 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_exit(t_game *game)
{
	mlx_destroy_window(game->mlx, game->win);
	mlx_destroy_display(game->mlx);
	free(game->mlx);
	exit(0);
}
