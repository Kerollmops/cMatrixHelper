/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 22:26:16 by crenault          #+#    #+#             */
/*   Updated: 2015/05/13 00:23:45 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT4_H
# define MAT4_H

# include "../include/vec3.h"

/*
** mat4 struct
*/
typedef struct		s_mat4
{
	float			m[4 * 4];

}					t_mat4;

/*
** mat4/simple.c
*/


/*
** mat4/models.c
*/
void				mat4_ident(t_mat4 *out);
void				mat4_trans(t_mat4 *out, float x, float y, float z);
void				mat4_scale(t_mat4 *out, float x, float y, float z);
void				mat4_rotate(t_mat4 *out, float ang, t_vec3 vec);

/*
** mat4/operators.c
*/
void				mat4_mult(t_mat4 *out, float *m, float *n);

#endif
