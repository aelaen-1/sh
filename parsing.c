
#include "include/minishell.h"
// int is_space(char c)
// {
//     if (c >= 9 && c <= 13)
//         return (1);
//     return (0);
// }

// int is_builtin(char *s)
// {
//     if (s == "cd" || s == "echo" || s == "pwd" || s == "export" || s == "unset" || s == "env" || s == "exit")
//         return (1);
//     return (0);
// }


void    parse(char *inpt, char *delim)
{
    char    *buffer = malloc(strlen(inpt));
    char    *input = strdup(inpt);
    printf("\nOriginal: \"%s\"\n", input);
    printf("\nTo split by: \"%s\"\n", delim);

    char *a = NULL;
}



int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    char *input = readline("minishell % ");

    while (input)
    {
        printf("%s\n", strtok(input, " "));
        strtok = strtok(NULL_ )
    }
    // parse(input, ' ');
    // t_command *cmd = parse_input(input);
    // exec(cmd);
    
    return (0);
}
