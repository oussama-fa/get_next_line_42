/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <oufarah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:31:24 by oufarah           #+#    #+#             */
/*   Updated: 2025/01/30 21:25:39 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

void	f(void)
{
	system("leaks a.out");
}

int	main(int ac, char **av)
{
	int		fd;
	char	*line;

	atexit(f);
	(void)ac;
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (-1);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
		{
			puts("{null}");
			break ;
		}
		printf("%s", line);
		free(line);
	}
	return (0);
}
