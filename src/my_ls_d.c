/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** epitech
*/

#include "../include/my.h"

int my_ls_d()
{
	DIR *dir;
	struct dirent *entry;

	dir = opendir("./");
	entry = readdir(dir);
	while (entry != NULL) {
		if (entry->d_name[0] == '.' && entry->d_name[1] == '\0') {
			my_putstr(entry->d_name);
			my_putchar('\n');
			exit(0);
		}
		entry = readdir(dir);
	}
	closedir(dir);
	return (0);
}
