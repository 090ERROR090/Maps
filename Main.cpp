#include <iostream>

using namespace std;

int main(){
    int sales = 95000;
    cout << "Sales: $" << sales << endl;
    double state_tax = sales * 0.04;
    cout << "State Tax: $" << state_tax << endl;
    double county_tax = state_tax * 0.02;
    cout << " County Tax: $" << county_tax << endl;

    
    return 0;
}