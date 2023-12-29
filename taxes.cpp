#include <iostream>

using namespace std;

int main() {
    double sales = 95000;
    const double stateTax = 0.04;
    const double countyTax = 0.02;

    double totalSales = sales * (1 - stateTax) * (1 - countyTax);

    double salesAfterStateTax = sales * (1 - stateTax);
    double salesAfterCountyTax = sales * (1 - countyTax);
    double totalTax = (sales * stateTax) + (sales * countyTax);

    cout << "total sales: $" << totalSales << endl 
         << "sales after state taxes: $" << salesAfterStateTax << endl
         << "sales after county taxes: $" << salesAfterCountyTax << endl;
    
    cout << "total taxes: $" << totalTax << endl;



    return 0;
}