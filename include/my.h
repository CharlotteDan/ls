/*
** EPITECH PROJECT, 2017
** my h
** File description:
** include
*/

#ifndef MY_H
#define MY_H

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>

void my_putchar(char c);

int ls1(char **av);
int ls(int ac, char **av);
int my_ls_t();
int my_ls_d();
int my_ls_l();
int my_ls_a();
int my_printf(char *str, ...);
int my_putnbr_base(long int nb, char *base);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_put_nbr(int nb);
int my_string(char const *str);
int permissions(struct stat fileStat);

char *my_strcpy(char *dest, char const *src);

#endif /* MY_H */
