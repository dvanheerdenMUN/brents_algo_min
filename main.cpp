#include "boost/math/tools/minima.hpp"
#include <iostream>

unsigned counter = 0;

struct funcdouble
{
    double operator()(double const& x)
    {
        counter++;
        return -sin(x/2);
    }
};

int main()
{
    using boost::math::tools::brent_find_minima;

    double min = -(2*M_PI);
    double max = (2*M_PI);
    boost::uintmax_t max_iter = 30;
    int bits = std::numeric_limits<double>::digits;


    std::pair<double, double> r = brent_find_minima(funcdouble(), min, max, bits, max_iter);

    std::cout << "x at minimum = " << r.first << ", f(" << r.first << ") = " << r.second << std::endl;

    std::cout << "Total Iterations - Counter = " << counter << std::endl;

}
