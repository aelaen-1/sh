#include "include/lexer.h"


size_t	count(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	if (!s)
		return (0);
	words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

int ft_strcmp(char *s1, char *s2)
{
    int     i;

    i = 0;
    while (s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

int is_space(char c)
{
    if (c >= 9 && c <= 13)
        return (1);
    return (0);
}

int is_builtin(char *s)
{
    if (!ft_strcmp(s, "cd") || !ft_strcmp(s, "echo") || !ft_strcmp(s, "pwd") ||
        !ft_strcmp(s, "export") || !ft_strcmp(s, "unset") || !ft_strcmp(s, "env") || !ft_strcmp(s, "exit"))
            return (1);
    return (0);
}

void free_split(char **s)
{
    int i = 0;
    while (s[i])
    {
        free(s[i]);
        i++;
    }
    free(s);
    s = NULL; // obligatoire ? 
}