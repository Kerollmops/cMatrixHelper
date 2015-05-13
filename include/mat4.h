/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 22:26:16 by crenault          #+#    #+#             */
/*   Updated: 2015/05/13 13:23:16 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT4_H
# define MAT4_H

# include "../include/vec3.h"

/*
** [ 0][ 1][ 2][ 3]
** [ 4][ 5][ 6][ 7]
** [ 8][ 9][10][11]
** [12][13][14][15]
*/

/*
** mat4 struct
*/
typedef struct		s_mat4
{
	float			m[4 * 4];

}					t_mat4;

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
void				mat4_mult(t_mat4 *out, t_mat4 *m, t_mat4 *n);

#endif
