/*tal 544
** EPITECH PROJECT, 2017
** my_ls
** File description:
** epitech
*/

#include "../include/my.h"

int flag(int ac, char **av)
{
	int i = 1;
	int y = 0;

	if (ac > 1) {
		while (av[i] != NULL) {
			if (av[i][y] == '-') {
				y = y + 1;
				switch (av[i][y]) {
				case 'a':
					my_ls_a(ac);
					my_printf("\n");
					break;
				case 'd':
					my_ls_d();
					break;
				case 'l':
					my_ls_l();
					break;
				case 't':
					my_ls_t();
					break;
				}
			}
			y = 0;
			i = i + 1;
			ls1(av);
		}
	}
	else
		ls(ac, av);
	return (0);
}

int main(int ac, char **av)
{
	flag(ac, av);
	return (0);
}
