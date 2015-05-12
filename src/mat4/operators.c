/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/11 17:17:15 by crenault          #+#    #+#             */
/*   Updated: 2015/05/13 00:26:48 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/mat4.h"

void				mat4_mult(t_mat4 *out, float *m, float *n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < 16)
	{
		j = 0;
		while (j < 4)
		{
			out->m[i + j] = (n[i + 0] * m[j + 0]) + (n[i + 1] * m[j + 4])
							+ (n[i + 2] * m[j + 8]) + (n[i + 3] * m[j + 12]);
			++j;
		}
		i += 4;
	}
}
