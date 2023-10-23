/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:26:59 by drenassi          #+#    #+#             */
/*   Updated: 2023/10/21 17:55:16 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>


int	main(void)
{

	//int i = 1;
	int fd = open("test.txt", O_RDONLY);
	char *line = NULL;
	
	line = get_next_line(fd);
	printf("%s", (char *)line);
	/*while(1)
	{
		line = get_next_line(fd);
		if (line && !line[0])
		{
			printf("Line %d : [%s]", i, line);
			free(line);
			break ;
		}
		printf("Line %d : [%s]", i, line);
		i++;
		free(line);
	}*/
	close(fd);
}



/* 
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int fd = open("test1.txt", O_RDONLY);
		char *line = NULL;
		while(i < 12)
		{
			line = get_next_line(fd);
			printf("Line %d : '%s'\n", i, line);
			free(line);
			i++;
		}
		close(fd);
		
	}
} */