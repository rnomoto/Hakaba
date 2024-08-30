/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:36:46 by rnomoto           #+#    #+#             */
/*   Updated: 2024/08/30 13:57:20 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	char_count(const char *str, char c)
{
	int index;
	int	count;

	index = 0;
	count = 0;
	while (str[index] != '\0')
	{
		if (str[index] == c)
			count++;
		index++;
	}
	if (str[index] == c && c == '\0')
		index++;
	return (count);
}

char	*ft_strrchr(const char *str, int c)
{
	char	c_cast;
	int		num;
	int index;

	c_cast = (char)c;
	num = char_count(str, c_cast);
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == c_cast && num == 1)
			return ((char *)str + index);
		else if (str[index] == c_cast && num != 1)
			num--;
		index++;
	}
	if (str[index] == c_cast && *str == '\0')
		return ((char *)str + index);
	return (NULL);
}


// int main(void)
// {
//     char *input = "";
//     char i = 'r';
//     char j = 'l';
//     char k = '\0';

//     printf("input: %c, output: %s\n", i, ft_strrchr(input, i));
//     printf("input: %c, output: %s\n", j, ft_strrchr(input, j));
//     printf("input: %c, output: %s\n", k, ft_strrchr(input, k));

//     return (0);
// }