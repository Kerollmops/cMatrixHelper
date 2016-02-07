/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 22:26:16 by crenault          #+#    #+#             */
/*   Updated: 2016/02/07 21:41:22 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT4_H
# define MAT4_H

# ifdef __cplusplus
extern "C" {
# endif

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
t_mat4				mat4_ident(void);
t_mat4				mat4_trans(float x, float y, float z);
t_mat4				mat4_scale(float x, float y, float z);
t_mat4				mat4_rotate(float ang, t_vec3 vec);

/*
** mat4/operators.c
*/
t_mat4				mat4_mult(t_mat4 m, t_mat4 n);

# ifdef __cplusplus
}
# endif

#endif
