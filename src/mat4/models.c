/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   models.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/10 23:06:44 by crenault          #+#    #+#             */
/*   Updated: 2015/05/27 18:48:04 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../../include/mat4.h"
#include "../../libft/includes/libft.h"

t_mat4				mat4_ident(void)
{
	t_mat4			out;

	ft_bzero(out.m, 4 * 4 * sizeof(float));
	out.m[0] = 1.f;
	out.m[5] = 1.f;
	out.m[10] = 1.f;
	out.m[15] = 1.f;
	return (out);
}

t_mat4				mat4_trans(float x, float y, float z)
{
	t_mat4			out;

	out = mat4_ident();
	out.m[12] = x;
	out.m[13] = y;
	out.m[14] = z;
	return (out);
}

t_mat4				mat4_scale(float x, float y, float z)
{
	t_mat4			out;

	out = mat4_ident();
	out.m[0] = x;
	out.m[5] = y;
	out.m[10] = z;
	return (out);
}

t_mat4				mat4_rotate(float ang, t_vec3 vec)
{
	t_mat4			out;
	t_vec3			unit;

	unit = vec3_normal(vec);
	out = mat4_ident();
	out.m[0] = cos(ang) + (unit.x * unit.x) * (1 - cos(ang));
	out.m[1] = unit.x * unit.y * (1 - cos(ang)) - unit.z * sin(ang);
	out.m[2] = unit.x * unit.z * (1 - cos(ang)) + unit.y * sin(ang);
	out.m[4] = unit.y * unit.x * (1 - cos(ang)) + unit.z * sin(ang);
	out.m[5] = cos(ang) + (unit.y * unit.y) * (1 - cos(ang));
	out.m[6] = unit.y * unit.z * (1 - cos(ang)) - unit.x * sin(ang);
	out.m[8] = unit.z * unit.x * (1 - cos(ang)) - unit.y * sin(ang);
	out.m[9] = unit.z * unit.y * (1 - cos(ang)) + unit.x * sin(ang);
	out.m[10] = cos(ang) + (unit.z * unit.z) * (1 - cos(ang));
	return (out);
}
