/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** epitech
*/

#include "../include/my.h"

int my_ls_t()
{
	DIR *dir = NULL;
	struct dirent *entry = NULL;
	struct stat buf;

	dir = opendir(".");
	if (dir == NULL)
		perror("");
	while ((entry = readdir(dir))!= NULL) {
		my_putstr(entry->d_name);
		my_printf("\n");
	}
	closedir(dir);
	return (0);
}
