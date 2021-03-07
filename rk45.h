#include <iostream>
#include <vector>
#include <cmath>
#include "mkl.h"

typedef void (*ode_ptr)(const std::vector<double>&, std::vector<double>&, double); //state_vec, dydt, t
typedef void (*ode_print)(const std::vector<double>&, double); // state_vec, t

void RK45(ode_ptr ODE_func, const std::vector<double>& init_vec, double t_start, double t_end, double t_step, ode_print PTR_func);