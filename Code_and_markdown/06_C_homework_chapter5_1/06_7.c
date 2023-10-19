#include <stdio.h>
#include <math.h>

double equation(double x)
{
    return 2 * pow(x, 3) - 4 * pow(x, 2) + 3 * x - 6;
}

double bisection(double left, double right)
{
    double epsilon = 1e-6;
    double mid, fmid;

    while (right - left > epsilon)
    {
        mid = (left + right) / 2;
        fmid = equation(mid);

        if (fmid == 0)
            return mid;
        else if (fmid * equation(left) < 0)
            right = mid;
        else
            left = mid;
    }

    return (left + right) / 2;
}

int main()
{
    double left = -10.0;
    double right = 10.0;

    double root = bisection(left, right);

    printf("%.6f", root);

    return 0;
}