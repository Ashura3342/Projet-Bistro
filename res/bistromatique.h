/*
** bistromatique.h for Projet-Bistro in /home/giallo_n/git/Projet-Bistro/res
** 
** Made by nathan giallombardo
** Login   <giallo_n@epitech.net>
** 
** Started on  Sat Nov  9 16:48:19 2013 nathan giallombardo
** Last update Sat Nov  9 16:49:29 2013 nathan giallombardo
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
char *eval_expr(char *base,char *ops,char *expr,unsigned int size);
