#include <bits/stdc++.h>
using namespace std;

int calcSalary(int base, int premium)
{
    return base + premium;
}
double calcSalary(double ratio, double base)
{
    return base * ratio;
}
int calcSalary(int base, int premium, int bonus)
{
    return base + premium + bonus;
}

int main()
{
    cout << calcSalary(5, 10) << endl;
    cout << calcSalary(0.5, 1500.0) << endl;
    cout << calcSalary(1000, 100, 100) << endl;

    return 0;
}