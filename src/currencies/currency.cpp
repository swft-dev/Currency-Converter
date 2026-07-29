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
    else if (curr == "comorian franc") {}
    else if (curr == "cook islands dollar") {}
    else if (curr == "new zealand dollar") {}
    else if (curr == "costa rican colón" || curr == "costa rican colon") {}
    else if (curr == "cuban peso") {}
    else if (curr == "caribbean guilder") {}
    else if (curr == "czech koruna") {}
    else if (curr == "danish krone") {}
    else if (curr == "djiboutian franc") {}
    else if (curr == "dominican peso") {}
    else if (curr == "egyptian pound") {}
    else if (curr == "eritrean nakfa") {}
    else if (curr == "swazi lilangeni") {}
    else if (curr == "south african rand") {}
    else if (curr == "ethiopian birr") {}
    else if (curr == "falkland islands pound") {}
    else if (curr == "sterling" || curr == "gbp" || curr == "pound") {}
    else if (curr == "faroese króna" || curr == "faroese krona") {}
    else if (curr == "fijian dollar") {}
    else if (curr == "cfp franc") {}
    else if (curr == "gambian dalasi") {}
    else if (curr == "georgian lari") {}
    else if (curr == "ghanaian cedi") {}
    else if (curr == "gibraltar pound") {}
    else if (curr == "guatemalan quetzal") {}
    else if (curr == "guatemalan quetzal") {}
    else if (curr == "guernsey pound") {}
    else if (curr == "guinean franc") {}
    else if (curr == "guyanese dollar") {}
    else if (curr == "haitian gourde") {}
    else if (curr == "honduran lempira") {}
    else if (curr == "hong kong dollar") {}
    else if (curr == "hungarian forint") {}
    else if (curr == "icelandic króna" || curr == "icelandic krona") {}
    else if (curr == "indonesian rupiah") {}
    else if (curr == "iranian rial") {}
    else if (curr == "iraqi dinar") {}
    else if (curr == "manx pound") {}
    else if (curr == "israeli new shekel") {}
    else if (curr == "jamaican dollar") {}
    else if (curr == "japanese yen") {}
    else if (curr == "jersey pound") {}
    else if (curr == "jordanian dinar") {}
    else if (curr == "kazakhstani tenge") {}
}