#include <iostream>
#include "verify.hpp"
#include "currency.hpp"

void checkCurrency(const std::string currency, double numOne, double numTwo) {
	static int temp{};
	if (temp == 0) {
		temp ++;
		currencyCheck(currency, numOne);
		if (numOne > 0.000) {
			std::cout << "Currency Found\n";
		} else {
			std::cout << "Currency not Found\n";
		}
	} else {
		currencyCheck(currency, numTwo);
	}
}