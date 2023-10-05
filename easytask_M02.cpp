#include <iostream>
#include <cmath>
using namespace std;

double get_square(double A, double N){
    double S = (N * pow(A, 2))/(4*tan(M_PI/N));
    return S;
}

int main() {
    double A, N;
    cout << "Enter N: ";
    cin >> N;   
    cout << "Enter A: ";
    cin >> A;
    if ((A>0)&&(N>2)) {
        cout << get_square(A,N);
        return 1;
    }
return 0;
}