#ifndef BlackScholes_hpp
#define BlackScholes_hpp

#include<vector>
#include<iostream>
#include<bits/stl_vector.h>

class BlackScholesMethod{
public:
    BlackScholesMethod(double expiration, double maxPrice, double strike, double intRate);
    BlackScholesMethod(const BlackScholesMethod &p);
    ~BlackScholesMethod();
    BlackScholesMethod &operator=(const BlackScholesMethod &p);

    std::vector<double> solve(double volatility, int nx, int timeSteps);
private:
    double m_expiration;
    double m_maxPrice;
    double m_strike;
    double m_intRate;
};

#endif // BLACKSCHOLES_H_INCLUDED
