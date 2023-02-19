#include "../includes/miniRT.h"

void	hit_wich_cylinder(t_ray ray, t_inter *res, t_obj obj)
{
	t_vec3	hp;

	hp = vec_addition(ray.origin, vec_float_multi(res->t, ray.direction));
	if (cylinder_height(hp, res, obj) < 0.0f)
	{
		if (res->t == res->t1)
			res->t = res->t2;
		else
			res->t = res->t1;
		hp = vec_addition(ray.origin, vec_float_multi(res->t, ray.direction));
		if (cylinder_height(hp, res, obj) < 0.0f)
			res->t = -1.0f;
	}
}

float	cylinder_height(t_vec3 hp, t_inter *res, t_obj obj)
{
	float	len;
	t_vec3	tpoint;
	float	max;

	(void)res;
	max = sqrtf(powf(obj.diameter * 0.5f, 2) + powf(obj.height * 0.5f, 2));
	tpoint = vec_minus(hp, obj.pos);
	len = vec_length(tpoint);
	if (len > max)
		return (-1.0f);
	return (len);
}