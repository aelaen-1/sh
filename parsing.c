#include "include/minishell.h"

int is_space(char c)
{
    if (c >= 9 && c <= 13)
        return (1);
    return (0);
}

int is_builtin(char *s)
{
    if (s == "cd" || s == "echo" || s == "pwd" || s == "export" || s == "unset" || s == "env" || s == "exit")
        return (1);
    return (0);
}
t_command    *parse_input(char *input)
{
    t_command *cmd;
    int     i;

    i = 0;
    get_first_token();

    return (cmd);
}

int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    char *input = readline("minishell % ");
    t_command *cmd = parse_input(input);
    exec(cmd);
    
    return (0);
}