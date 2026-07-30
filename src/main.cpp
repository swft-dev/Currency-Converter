#include <iostream>
#include <string>
#include "headers/verify.hpp"
#include "headers/currency.hpp"

int main() {
    using std::cout;
    using std::cin;
    using std::getline;
    using std::string;
    
    string currency{};
    double firstNum{};

    cout 
    << "Type 'help' for more information\n"
    << "================================\n"
    << "====== Currency Converter ======\n"
    << "================================\n"
    << "Type first currency\n>_";

    getline(cin, currency);
    checkCurrency(currency);
    return 0;
}