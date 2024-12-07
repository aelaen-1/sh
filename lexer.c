#include "include/lexer.h"

//   |   &   ;   (  )  <  >  space  tab  newline’


/*Fonction qui retourne l'input sous la forme d'un tableau de tokens*/
char **lex_input(char *s)
{
    char **token_array;
    int     i;
    int     token_count;

    i = 0;
    token_count = 0;
    token_array = malloc(sizeof(char *) * (ft_strlen(s) + 1));
    while(s[i] && is_space(s[i]))
        i++;
    fe
    if (!token_count)
        return (free_split(token_array), NULL);
    return(token_array);
}


int main (int ac, char **av)
{
    (void)ac;

    int i = 0;
    return 0;
}