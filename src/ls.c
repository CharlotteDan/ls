/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** epitech
*/

#include "../include/my.h"

int ls(int ac, char **av)
{
	DIR *dir = NULL;
	struct dirent *entry = NULL;

	dir = opendir(".");
	if (dir == NULL)
		perror("");
	while ((entry = readdir(dir)) != NULL) {
		if (entry->d_name[0] != '.') {
			my_putstr(entry->d_name);
			my_putchar('\n');
		}
	}
	closedir(dir);
	return (0);
}
