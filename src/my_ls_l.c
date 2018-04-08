/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** ls_l
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>
#include "../include/my.h"

int my_ls_l()
{
	struct dirent* entry = NULL;
	struct stat st;
	struct passwd *pass;
	struct group *grp;
	char *tmp = malloc(sizeof(char) * 25);
	DIR *dir = NULL;

	dir = opendir(".");
	my_printf("Total : %d\n", st.st_blocks);
	while ((entry = readdir(dir)) != NULL) {
		if (entry->d_name[0] != '.') {
			stat(entry->d_name, &st);
			permissions(st);
			my_printf(" %d ", st.st_nlink);
			pass = getpwuid(st.st_uid);
			my_printf("%s ", pass->pw_name);
			grp = getgrgid(st.st_gid);
			my_printf("%s ", grp->gr_name);
			tmp = ctime(&st.st_mtime);
			tmp = tmp + 4;
			for (int i = 0; i < 12; i++) {
				my_printf("%c", *tmp);
				tmp = tmp + 1;
			}
			my_printf(" %d", st.st_size);
			my_printf(" %s", entry->d_name);
			my_printf("\n");
		}
	}
}
