/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <oufarah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:31:24 by oufarah           #+#    #+#             */
/*   Updated: 2024/11/15 23:32:50 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <libc.h>

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

// char	*get_next_line(int fd)
// {
// 	static char	*rest;
// 	char		*temp;
// 	char		*ret;
// 	int			rd;

// 	rd = 1;
// 	while (!ft_strchr(rest, '\n') && rd)
// 	{
// 		temp = malloc((size_t)BUFFER_SIZE + 1);
// 		if (!temp)
// 		{
// 			free(rest);
// 			rest = NULL;
// 			return (NULL);
// 		}
// 		rd = read(fd, temp, BUFFER_SIZE);
// 		if (rd == -1)
// 		{
// 			free(temp);
// 			free(rest);
// 			rest = NULL;
// 			return (NULL);
// 		}
// 		if (!rd)
// 		{
// 			free(temp);
// 			break ;
// 		}
// 		temp[rd] = '\0';
// 		rest = ft_strjoin(rest, temp);
// 		free(temp);
// 	}
// 	ret = get_linis(rest);
// 	if (!ret)
// 		return (free(rest), rest = NULL, NULL);
// 	temp = rest;
// 	rest = get_rest(rest);
// 	return (free(temp), ret);
// }