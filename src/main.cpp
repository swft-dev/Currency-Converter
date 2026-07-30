#include <iostream>
#include <string>
#include "verify.hpp"
#include "currency.hpp"

int main() {
    using std::cout;
    using std::cin;
    using std::getline;
    using std::string;
    
    string currency{};
    double firstNum{}, secondNum{};

    cout 
    << "Type 'help' for more information\n"
    << "================================\n"
    << "====== Currency Converter ======\n"
    << "================================\n"
    << "Type first currency\n>_";

    getline(cin, currency);
    checkCurrency(currency, firstNum, secondNum);
    return 0;
}