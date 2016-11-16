#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double E=1e-6;
    double Sum=0;
    double sd;
    double si;
    int k=0;


do { k++;
    sd=(double)k/pow(k+2,2);
    si=pow(-1,k);
    Sum+=sd*si;

}while(sd>=E);
    cout <<Sum<<endl;
    return 0;
}