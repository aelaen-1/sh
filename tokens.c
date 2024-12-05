
#include "include/lexer.h"

void    input_struct_init(char *input, t_input *shell)
{
    if (!input)
        return;
    shell->full_input = input;
    shell->token_array = ft_split(input, ' ');
    shell->nb_of_tokens = count(input, ' ');
}

int main()
{
    t_input shell;

    char *input = readline("minishell % ");
    input_struct_init(input, &shell);
    
    return (0);
}



// parse(input, ' ');
    // t_command *cmd = parse_input(input);
    // exec(cmd);
