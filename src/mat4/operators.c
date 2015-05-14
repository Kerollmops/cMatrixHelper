/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/11 17:17:15 by crenault          #+#    #+#             */
/*   Updated: 2015/05/14 21:07:16 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/mat4.h"

t_mat4				mat4_mult(t_mat4 *m, t_mat4 *n)
{
	t_mat4			out;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < 16)
	{
		j = 0;
		while (j < 4)
		{
			out.m[i + j] = (n->m[i + 0] * m->m[j + 0])
							+ (n->m[i + 1] * m->m[j + 4])
							+ (n->m[i + 2] * m->m[j + 8])
							+ (n->m[i + 3] * m->m[j + 12]);
			++j;
		}
		i += 4;
	}
	return (out);
}
