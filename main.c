/*
** main.c for Projet-Bistro in /home/giallo_n/git/Projet-Bistro
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Mon Nov  4 12:13:22 2013 nathan giallombardo
** Last update Mon Nov  4 17:10:10 2013 nathan giallombardo
** Last update Mon Nov  4 13:58:19 2013 valentin wallet
*/

#include	<stdlib.h>
#include	"my.h"
#include	"inc.h"

t_nb		*define_operator(t_nb *nb1, t_nb *nb2, t_base *base, char op)
{
  t_op		operator;
  t_nb		*nb;

  if (op == '-')
    nb2->neg = nb2->neg * (-1);
  if (op == '+' || op == '-')
    {
      if (nb1->neg > 0 && nb2->neg < 0 || nb1->neg < 0 && nb2->neg > 0)
	operator = &my_sub;
      else
	operator = &my_add;
    }
  else
    return (NULL);
  if (my_max(nb2, nb1))
    {
      nb = nb1;
      nb1 = nb2;
      nb2 = nb;
      nb = NULL;
    }
  return (operator(nb1, nb2, base));
} 

int		main(int ac, char **av)
{
  t_nb		*nb;
  t_nb		*nb1;
  t_nb		*nb2;
  t_base	*base;

  if (ac != 5)
    {
      my_putstr("Usage : ./calc <nb1> <operator> <nb2> <base>\n");
      return (1);
    }
  else if (my_strlen(av[2]) != 1)
    {
      my_putstr("Usage : ./calc <nb1> <operator> <nb2> <base>\n");
      return (1);
    }
  nb1 = make_nb(av[1]);
  nb2 = make_nb(av[3]);
  base = make_base(av[4]);
  nb = define_operator(nb1, nb2, base, av[2][0]);
  xfree(nb1);
  xfree(nb2);
  xfree(base);
  if (nb != NULL)
    {
      print_nb(nb);
      xfree(nb->nbr);
      xfree(nb);
    }
  return (0);
}
