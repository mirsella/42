/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 00:00:14 by mirsella          #+#    #+#             */
/*   Updated: 2023/01/10 00:01:41 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	handle_keycode(int keycode, t_game *game)
{
	(void)game;
	if (keycode == ESC)
		ft_exit(game);
	ft_printf("keycode is %d\n", keycode);
	return (0);
}
