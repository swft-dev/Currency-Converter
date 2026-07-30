#include <iostream>
#include "verify.hpp"
#include "currency.hpp"

void checkCurrency(const std::string currency, double numOne, double numTwo) {
	static int temp{0};
	if (temp == 0) {
		temp ++;
		currencyCheck(currency, numOne);
		if (numOne > 0.000) {
			std::cout << "Currency Found\n";
		} else {

		}
	} else {

	}
}