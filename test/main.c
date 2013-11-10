/*
** main.c for Projet-Bistro in /home/giallo_n/git/Projet-Bistro/test
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Sun Nov 10 19:52:13 2013 nathan giallombardo
** Last update Sun Nov 10 20:00:06 2013 nathan giallombardo
*/
#include "../bistromathique.h"
int	main(int ac, char **av)
{
  t_nb	*nb;

  if (ac != 5)
    {
      my_putstr("error Usage\n");
      return (1);
    }
  else
    {
      if (av[2][0] == '+')
	{
	  nb = my_add(make_nb(av[1]), make_nb(av[2]), av[3]);
	  print_nb(nb);
	}
    }
}
