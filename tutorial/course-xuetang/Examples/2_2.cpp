#include <iostream>
#include <cmath>
using namespace std;
// C++ 浮点数因精度问题不能直接进行比较
int main(){
    const double pi_a(3.1415);
    const double pi_b(3.1415);
    const double EPS(1e-7);
    cout << pi_a << endl;
    cout << pi_b << endl;
    if(fabs(pi_a-pi_b) < EPS){
        cout <<"pi_a == pi_b\n";
    }
    if(pi_a-pi_b>EPS){
        cout << "pi_a > pi_b\n";
    }
    if(pi_b-pi_a>EPS){
        cout << "pi_b > pi_a\n";
    }
    return 0;
}