#include "functions.h"

extern "C"
{
    
double sigmoid(double x)
{
    return 1.0 / (1 + exp(-x));
}


double sigmoid_prime(double x)
{
    double evald = sigmoid(x);
    return evald * (1.0 - evald);
}


double tanh_prime(double x)
{
    double evald = tanh(x);
    return 1 - (evald * evald);
}

    
}
