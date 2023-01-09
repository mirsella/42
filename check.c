/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirsella <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 23:48:22 by mirsella          #+#    #+#             */
/*   Updated: 2023/01/10 00:00:19 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_argv(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	if (ft_strlen(argv[1]) < 5)
		return (0);
	if (ft_strncmp(argv[1] + ft_strlen(argv[1]) - 4, ".ber", 4))
		return (0);
	return (1);
}
