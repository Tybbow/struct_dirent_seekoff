/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 00:14:24 by tiskow            #+#    #+#             */
/*   Updated: 2017/11/21 00:52:42 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <dirent.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void	ft_readdir(char *path)
{
	DIR		*dir;
	struct 	dirent	*ent;

	dir = opendir(path);
	while ((ent = readdir(dir)) != NULL)
	{
		printf("Name : %s\t - Type : %u\t - Seekoff : %lld\n", ent->d_name, ent->d_type, ent->d_seekoff);
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage : ./seekoff path\n");
	}
	else
	{
		ft_readdir(argv[1]);
		printf("exit\n");
	}
	return (0);
}