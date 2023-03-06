double function_1(double x, double y, double z)
{
    double s;
    const double p = 3.1415926535897932385;
    const double e = 2.718281828459045;

    s = p * x + pow(e, abs(y)) - sqrt(fabs(pow(z, 2) - y));

    cout << "The result is: \n" << s;

    return s;
}
