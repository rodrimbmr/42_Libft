/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonfort <rmonfort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 06:08:28 by rmonfort          #+#    #+#             */
/*   Updated: 2024/10/08 21:28:25 by rmonfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const int	word_counter(int n)
{
	int	c;

	c = 0;
	while(n > 1)
	{
		n / 10;
		c++;
	}
	return(c);
}
char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	res = calloc(sizeof(char), word_counter(n));
	i = 0;
	if (n < 0)
	{
		res[i] = '-';
		n = -n;
	}

}
