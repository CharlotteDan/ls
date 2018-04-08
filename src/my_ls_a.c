/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** epitech
*/

#include "../include/my.h"

int my_ls_a(int ac)
{
	DIR *dir = NULL;
	struct dirent *entry = NULL;

	dir = opendir("./");
	if (dir == NULL)
		perror("");
	while ((entry = readdir(dir)) != NULL) {
		my_putstr(entry->d_name);
		my_putchar(' ');
	}
	closedir(dir);
	return (0);
}
