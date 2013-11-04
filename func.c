/*
** xmalloc.c for Projet-Bistro in /home/giallo_n/rendu/Projet-C-Bistro
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Mon Oct 28 22:56:48 2013 nathan giallombardo
** Last update Mon Nov  4 17:09:03 2013 nathan giallombardo
*/

#include <stdlib.h>
#include "my.h"
#include "inc.h"

int	xfree(void *obj)
{
  if (obj != NULL)
    {
      free(obj);
    }
}

char	*xmalloc(int size)
{
  char	*a;
  int	i;

  a = malloc(size + 1);
  i = 0;
  if (a != NULL)
    {
      while (i < size)
	a[i++] = '0';
      a[i] = '\0';
    }
  else
    my_puterr("error malloc \n");
  return (a);
}

int	my_max(t_nb *a, t_nb *b)
{
  int	i;

  i = 0;
  if (a->size > b->size)
    return (1);
  else if (a->size < b->size)
    return (0);
  else
    {
      while (i < a->size)
	{
	  if (a->nbr[i] > b->nbr[i])
	    return (1);
	  else if (a->nbr[i] < b->nbr[i])
	    return (0);
	  i = i + 1;
	}
      return (1);
    }
}

int	my_isneg(char *str, int *i)
{
  int	a;

  *i = 0;
  a = 1;
  while (str[*i] == '-' || str[*i] == '+')
    {
      if (str[(*i)++] == '-')
	a = a * (-1);
    }
  return (a);
}
