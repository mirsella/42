/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:26:34 by mirsella          #+#    #+#             */
/*   Updated: 2023/01/10 00:08:56 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char **argv)
{
	t_game game;

	if (!check_argv(argc, argv))
		return (0);
	ft_bzero(&game, sizeof(t_game));
	game.mlx = mlx_init();
	if (!game.mlx)
		return (0);
	// load map, check it and fill game struct
	game.win = mlx_new_window(game.mlx, 800, 400, "so_long");
	if (!game.win)
		return (0);
	mlx_hook(game.win, 17, 0, ft_exit, &game);
	mlx_key_hook(game.win, handle_keycode, &game);
	mlx_loop(game.mlx);
}
