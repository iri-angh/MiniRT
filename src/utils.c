#include "../inc/minirt.h"

void	ft_return_head(t_minirt *minirt)
{
	ft_rtr_head_cy(minirt->cylinders);
	ft_rtr_head_pl(minirt->planes);
	ft_rtr_head_sp(minirt->spheres);
}
