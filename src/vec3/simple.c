/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 12:29:58 by crenault          #+#    #+#             */
/*   Updated: 2015/05/12 23:19:33 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../../include/vec3.h"

t_vec3				vec3(float x, float y, float z)
{
	t_vec3			ret;

	ret.x = x;
	ret.y = y;
	ret.z = z;
	return (ret);
}

t_vec3				vec3_normalize(t_vec3 vec)
{
	float			len;

	len = vec3_len(vec);
	return (vec3(vec.x / len, vec.y / len, vec.z / len));
}

float				vec3_len(t_vec3 vec)
{
	float			len;

	len = sqrt((vec.x * vec.x) + (vec.y * vec.y) + (vec.z * vec.z));
	return (len);
}
