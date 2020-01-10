#include <iostream>
#include<cmath>

using namespace std;

double sumSqrt (int N){
    int x=1;
    float sum=0;
    if (N>0){
        while(x<=N){
            sum=sum+(1/(sqrt(x)));
            x = x+1;

        }

    }else {
        sum = 0;
    }
    return sum;

}


int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
