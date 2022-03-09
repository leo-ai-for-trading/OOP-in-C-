#include<iostream>
#include<cmath>
using namespace std;

// buil first function
double compInt(double P, double i, int n){
    double interest = P * pow(1+ i * 0.01,n) - P;
    return interest;
}
int main(){
    int principal;
    double intRate;
    int numOfYear;
    cout << "Quanto stai investendo?\n";
    cin >> principal;
    cout << "Quale è il tasso di interesse annuale (%)?\n";
    cin >> intRate;
    cout << "Per quanto tempo (in anni)?\n";
    cin >> numOfYear;
    double interest = compInt(principal,intRate,numOfYear);
    cout << "Guadagnerai ";
    cout << interest;
    cout << "\n";
    return 0;
}

