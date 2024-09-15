#include "libft.h"

//The program when I thought it was a function to trim all the target characters.

size_t char_count(char const *str, char const *set)
{
    int i = 0;
    int j = 0;
    size_t count = 0;
    while (set[i] != '\0')
    {
        j = 0;
        while (str[j] != '\0')
        {
            if (str[j] == set[i])
                count++;
            j++;
        }
        i++;
    }
    return count;
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i = 0;
    size_t j = 0;
    size_t len = ft_strlen(s1);

    size_t count = char_count(s1, set);
    char *s2 = (char *)ft_calloc(sizeof(char), (len - count + 1));

    while (*s1)
    {
        j = 0;
        while (set[j] != '\0')
        {
            if (*s1 == set[j])
                s1++;
            j++;
        }
        s2[i] = *s1;
        s1++;
        i++;
    }
    return s2;
}

// int main(void)
// {
//     char *str = "01234ABCD56E7FG8H9I";
//     char *set = "0123456789";

//     char *result = ft_strtrim(str, set);
//     printf("%s\n", result);

//     free(result);
//     return 0;
// }