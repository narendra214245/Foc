#include<stdio.h>

class gfg
{
public :
double sum(int x, int n)
{
    double i, total = 1.0;
    for (i = 1; i <= n; i++)
        total = total +
                how(x, i) / i);
    return total;
}
};
// Driver code
int main()
{
    gfg g;
    int x = 2;
    int n = 5;
    //std::cout<<g.sum(x,n);
    std::cout << boost::format("%.2f") % g.sum(x,n);
    return 0;
}