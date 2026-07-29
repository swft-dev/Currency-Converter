#include <iostream>
#include "headers/verify.hpp"

int main() {
    using std::cout;
    using std::string;
    
    string currency{};

    cout 
    << "Type 'help' for more information\n"
    << "================================\n"
    << "====== Currency Converter ======\n"
    << "================================\n"
    << "Type first currency\n";

    checkLanguage(currency);
    return 0;
}