#include <iostream>
#include <string>

void calculateRentalCost(int days, double dailyRate) {
    double totalCost = days * dailyRate;

    std ::cout<<"totalCost"<<totalCost << totalCost << std::endl;
    // In Release mode, debugLog is declared but not used, leading to a compiler warning
}

int main() {
    calculateRentalCost(5, 30.0);
    return 0;
}
