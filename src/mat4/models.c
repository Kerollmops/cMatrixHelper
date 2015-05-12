/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   models.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/10 23:06:44 by crenault          #+#    #+#             */
/*   Updated: 2015/05/12 23:19:45 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../../include/mat4.h"

void				mat4_ident(float *out)
{
	ft_bzero(out, 4 * 4 * sizeof(float));
	out[0] = 1.f;
	out[5] = 1.f;
	out[10] = 1.f;
	out[15] = 1.f;
}

void				mat4_trans(float *out, float x, float y, float z)
{
	ft_bzero(out, 4 * 4 * sizeof(float));
	out[0] = 1.f;
	out[5] = 1.f;
	out[10] = 1.f;
	out[12] = x;
	out[13] = y;
	out[14] = z;
	out[15] = 1.f;
}

void				mat4_scale(float *out, float x, float y, float z)
{
	ft_bzero(out, 4 * 4 * sizeof(float));
	out[0] = x;
	out[5] = y;
	out[10] = z;
	out[15] = 1.f;
}
void				mat4_rotate(float *out, float ang, t_vec3 vec)
{
	t_vec3			unit;

	unit = vec3_normal(vec);
	ft_bzero(out, 4 * 4 * sizeof(float));
	out[0] = cos(ang) + (unit.x * unit.x) * (1 - cos(ang));
	out[1] = unit.x * unit.y * (1 - cos(ang)) - unit.z * sin(ang);
	out[2] = unit.x * unit.z * (1 - cos(ang)) + unit.y * sin(ang);
	out[4] = unit.y * unit.x * (1 - cos(ang)) + unit.z * sin(ang);
	out[5] = cos(ang) + (unit.y * unit.y) * (1-cos(ang));
	out[6] = unit.y * unit.z * (1 - cos(ang)) - unit.x * sin(ang);
	out[8] = unit.z * unit.x * (1 - cos(ang)) - unit.y * sin(ang);
	out[9] = unit.z * unit.y * (1 - cos(ang)) + unit.x * sin(ang);
	out[10] = cos(ang) + (unit.z * unit.z) * (1 - cos(ang));
	out[15] = 1.f;
}
