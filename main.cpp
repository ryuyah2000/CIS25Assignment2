// CIS25 Assignment 2
// does some simple math and prints the result
// Code by Ryuya Hirota

#include <iostream>

int main() {
    double sales = 95000; // sales in dollars
    double estate_tax_rate = 0.04; // estate tax rate in percent
    double county_tax_rate = 0.02; // county tax rate in percent
    double estate_tax = sales * estate_tax_rate; // total estate tax
    double county_tax = sales * county_tax_rate; // total county tax
    
    // total taxed money
    double total_tax = estate_tax + county_tax;
    
    // print everything
    std::cout << "Total Sales: " << sales << std::endl;
    std::cout << "Estate Tax: " << estate_tax << std::endl;
    std::cout << "County Tax: " << county_tax << std::endl;
    std::cout << "Total Tax: " << total_tax << std::endl;

    return 0;
}

