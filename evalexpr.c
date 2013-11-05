/*
** evalexpr.c for evalexpr in /home/wallet_v/git/Projet-Bistro
** 
** Made by valentin wallet
** Login   <wallet_v@epitech.net>
** 
** Started on  Tue Oct 29 12:26:11 2013 valentin wallet
** Last update Mon Nov  4 17:37:49 2013 valentin wallet
*/

#include <stdlib.h>
#include "my.h"
#include "inc.h"

int	parcours(char *str, int *i)
{
  char	*dest;
  int	nbr1;
  int	nbr2;

  dest = malloc(my_strlen(str));
  my_strcpy(dest, str);
  while (dest[i] != '\0')
    {
      if (dest[i] == '+' || dest[i] == '-' || dest[i] == '*' || dest[i] == '/')
	{
	  while (!(dest[i - 1] <= 9 && dest[i - 1] >= 0))
	    {
	      if (dest[i] >= 0 && dest[i] <= 9)
		{
		  dest[i] = nbr1;
		}
	      i = i - 1;
	    }
	  while (!(dest[i + 1] <= 9 && dest[i + 1] >= 0))
	    {
	      if (dest[i] >= 0 && dest[i] <= 9)
		{
		  dest[i] = nbr2;
		}
	      i = i + 1;
	    }
	}
      i = i + 1;
    }
  while (str[*i] != '\0' && str[*i] != ')')
    {
      if (str[*i] == '(')
	{
	  *i = *i + 1;
	  parcours(str, i);
	}
      else
	my_putchar(dest[*i]);
      *i = *i + 1;
    }
}

int	main(int ac, char **av)
{
  int	i;

  i = 0;
  parcours(av[1], &i);
}
