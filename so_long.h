/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:26:36 by mirsella          #+#    #+#             */
/*   Updated: 2023/01/10 00:09:00 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include "minilibx-linux/mlx.h"
# include "libft/libft.h"
# include <fcntl.h>
#include "stdlib.h"

# define UP	119
# define DOWN 115
# define LEFT 97
# define RIGHT 100
# define ESC 65307

# define resolution 32

typedef struct pos
{
	int	x;
	int	y;
}				t_pos;

typedef struct imgs
{
	void	*wall;
	void	*floor;
	void	*player_up;
	void	*player_down;
	void	*player_left;
	void	*player_right;
	void	*exit;
	void	*collect;
	void	*patrol;
}				t_imgs;

typedef struct game
{
	void				*mlx;
	void				*win;
	char				**map;
	size_t				map_width;
	size_t				map_height;
	unsigned long long	movement_count;
	t_pos				*collectibles;
	int					collectibles_count;
	t_pos				patrol_pos;
	int					patrol_direction;
}				t_game;

int	check_argv(int argc, char **argv);
int ft_exit(t_game *game);
int	handle_keycode(int keycode, t_game *game);

#endif
