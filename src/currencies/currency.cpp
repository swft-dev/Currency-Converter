#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include "headers/currency.hpp"

std::string lower(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(),
        [](unsigned char c) { return std::tolower(c); });
    return str;
}

void currency(const std::string currency) {
    std::string curr{lower(currency)};

    if (curr == "russian ruble") {}
    else if (curr == "afghan afgani") {}
    else if (curr == "euro") {}
    else if (curr == "albanian lek") {}
    else if (curr == "algerian dinar") {}
    else if (curr == "angolan kwanza") {}
    else if (curr == "eastern caribbean dollar") {}
    else if (curr == "argentine peso") {}
    else if (curr == "armenian dram") {}
    else if (curr == "aruban florin") {}
    else if (curr == "saint helena pound") {}
    else if (curr == "australian dollar") {}
    else if (curr == "azerbaijani manat") {}
    else if (curr == "bahamian dollar") {}
    else if (curr == "bahraini dinar") {}
    else if (curr == "bangladeshi taka") {}
    else if (curr == "barbadian dollar") {}
    else if (curr == "belarusian ruble") {}
    else if (curr == "belize dollar") {}
    else if (curr == "west african cfa franc") {}
    else if (curr == "bermudian dollar") {}
    else if (curr == "bhutanese ngultrum") {}
    else if (curr == "indian rupee") {}
    else if (curr == "bolivian boliviano") {}
    else if (curr == "united states dollar") {}
    else if (curr == "bosnia and herzegovina convertible mark") {}
    else if (curr == "botswana pula") {}
    else if (curr == "brazilian real") {}
    else if (curr == "brunei dollar") {}
    else if (curr == "singapore dollar") {}
    else if (curr == "burundian franc") {}
    else if (curr == "cambodian riel") {}
    else if (curr == "central african cfa franc") {}
    else if (curr == "canadian dollar") {}
    else if (curr == "cape verdean escudo") {}
    else if (curr == "cayman islands dollar") {}
    else if (curr == "chilean peso") {}
    else if (curr == "renminbi") {}
    else if (curr == "colombian peso") {}
    
}