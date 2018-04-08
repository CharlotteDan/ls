/*
** EPITECH PROJECT, 2017
** test
** File description:
** epitech
*/

#include "../include/my.h"
#include <stdlib.h>

int permissions(struct stat fileStat)
{
	my_printf( (S_ISDIR(fileStat.st_mode)) ? "d" : "-");
	my_printf( (fileStat.st_mode & S_IRUSR) ? "r" : "-");
	my_printf( (fileStat.st_mode & S_IWUSR) ? "w" : "-");
	my_printf( (fileStat.st_mode & S_IXUSR) ? "x" : "-");
	my_printf( (fileStat.st_mode & S_IRGRP) ? "r" : "-");
	my_printf( (fileStat.st_mode & S_IWGRP) ? "w" : "-");
	my_printf( (fileStat.st_mode & S_IXGRP) ? "x" : "-");
	my_printf( (fileStat.st_mode & S_IROTH) ? "r" : "-");
	my_printf( (fileStat.st_mode & S_IWOTH) ? "w" : "-");
	my_printf( (fileStat.st_mode & S_IXOTH) ? "x" : "-");
	return (0);
}
