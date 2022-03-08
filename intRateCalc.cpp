#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // Insert code here
    // declare variables
    int principal;
    double intRate;
    int numOfYear;
    //read input
    cout << "Quanto hai investito\n";
    cin >> principal;
    cout << "Quale è il tasso annuale di interesse(%)?\n";
    cin >> intRate;
    cout << "Per quanto tempo (in anni)?\n";
    cin >> numOfYear;
    // math operation
    double endBal = 
        pow(1.0*intRate*0.01,numOfYear) * principal;
    double interest = endBal - principal;
    // print output
    cout << "Guadagnerai";
    cout << interest;
    cout << "\n";
    /* Finish */
    
    return 0;
}
