/*
** bistromatique.h for Projet-Bistro in /home/giallo_n/git/Projet-Bistro/res
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Sat Nov  9 16:48:19 2013 nathan giallombardo
** Last update Sun Nov 10 19:46:25 2013 nathan giallombardo
*/

#define OP_OPEN_PARENT_IDX 0
#define OP_CLOSE_PARENT_IDX 1
#define OP_PLUS_IDX 2
#define OP_SUB_IDX 3
#define OP_NEG_IDX 3
#define OP_MULT_IDX 4
#define OP_DIV_IDX 5
#define OP_MOD_IDX 6
#define SYNTAXE_ERROR_MSG "syntax error"

typedef struct 
{
  char	*nbr;
  int	size;
  int	poss;
  int	neg;
}	t_nb;

typedef t_nb* (*t_op)(t_nb*, t_nb*, char*);

typedef struct
{
  t_nb	*operant;
  t_op	operateur;
}	t_expr;


int	xfree(void *);
char	*xmalloc(int);
int	my_max(t_nb *a, t_nb *b);
t_nb	*make_nb_base(char *, int, int, int);
t_nb	*make_nb(char *);
t_nb	*make_nb_empty(int);
int	print_nb(t_nb *);
int	free_nb(t_nb *);
char	get_digit(char*, int);
char	get_digit_ch(char*, char);
t_nb	*my_add(t_nb *, t_nb *, char*);
t_nb	*my_sub(t_nb *, t_nb *, char*);
t_nb	*my_multi(t_nb *, t_nb *, char*);
t_nb	*my_div(t_nb *, t_nb *, char*);
char	*eval_expr(char *,char *,char *,unsigned int);
