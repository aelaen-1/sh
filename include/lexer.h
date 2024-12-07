#ifndef MINISHELL_H
 #define MINISHELL_H

# include "libft/libft.h"
# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <sys/time.h>
# include <sys/resource.h>
# include <sys/stat.h>
# include <sys/ioctl.h>
# include <signal.h>
# include <dirent.h>
# include <termios.h>
# include <curses.h>
# include <term.h>

enum e_builtins
{
    CD,
    ECHO,
    ENV,
    PWD,
    EXPORT,
    UNSET,
    EXIT
};

enum e_token_kind
{
    STRING,
    OPERATOR,
    WORD
};

enum e_operator
{
    PIPE, // |
    SEMI, // ;
    LESS, // <
    GREAT, // >
    DLESS, //  <<
    DGREAT, // >>
    OPEN_PAR, // (
    CLOSE_PAR // )
};

typedef struct s_input
{

}   t_input;

//utils.c
int is_builtin(char *s);
int is_space(char c);
int ft_strcmp(char *s1, char *s2);
size_t	count_words(char const *s, char c);


#endif