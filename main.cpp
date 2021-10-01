#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double sum = 0;
    for (double x = -1; x <= 1; x+=0.2)
    {
        double y=sin(3*x);
        if (y<0)
            sum++;
        if (x<0)
            cout<<x<<""<<y<<endl;
    }
    cout<<"sum="<<sum<<endl;
}


