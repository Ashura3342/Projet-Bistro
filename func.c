/*
** xmalloc.c for Projet-Bistro in /home/giallo_n/rendu/Projet-C-Bistro
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Mon Oct 28 22:56:48 2013 nathan giallombardo
** Last update Mon Oct 28 23:10:09 2013 nathan giallombardo
*/
#include <stdlib.h>
#include "inc.h"

void	*xmalloc(size_t size)
{
  void	*s;
  int	err;

  s = malloc(size);
  err = -1;
  if (s == NULL)
    {
      my_puterr("malloc segmentation fault \n");
      return (&err);
    }
  else
    {
      return (s);
    }
}
