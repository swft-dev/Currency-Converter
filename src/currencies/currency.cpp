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
    else if (curr == "kenyan shilling") {}
    else if (curr == "kiribati dollar") {}
    else if (curr == "north korean won") {}
    else if (curr == "south korean won") {}
    else if (curr == "kuwaiti dinar") {}
    else if (curr == "kyrgyz som") {}
    else if (curr == "lao kip") {}
    else if (curr == "lebanese pound") {}
    else if (curr == "lesotho loti") {}
    else if (curr == "liberian dollar") {}
    else if (curr == "libyan dinar") {}
    else if (curr == "swiss franc") {}
    else if (curr == "macanese pataca") {}
    else if (curr == "malagasy ariary") {}
    else if (curr == "malawian kwacha") {}
    else if (curr == "malaysian ringgit") {}
    else if (curr == "maldivian rufiyaa") {}
    else if (curr == "mauritanian ouguiya") {}
    else if (curr == "mauritian rupee") {}
    else if (curr == "mexican peso") {}
    else if (curr == "moldovan leu") {}
    else if (curr == "mongolian tögrög" || curr == "mongolian togrog") {}
    else if (curr == "moroccan dirham") {}
    else if (curr == "mozambican metical") {}
    else if (curr == "burmese kyat") {}
    else if (curr == "namibian dollar") {}
    else if (curr == "nepalese rupee") {}
    else if (curr == "nicaraguan córdoba" || curr == "nicaraguan cordoba") {}
    else if (curr == "nigerian naira") {}
    else if (curr == "niue dollar") {}
    else if (curr == "macedonian denar") {}
    else if (curr == "turkish lira") {}
    else if (curr == "norwegian krone") {}
    else if (curr == "omani rial") {}
    else if (curr == "pakistani rupee") {}
    else if (curr == "panamanian balboa") {}
    else if (curr == "papua new guinean kina") {}
    else if (curr == "paraguayan guaraní" || curr == "paraguayan guarani") {}
    else if (curr == "peruvian sol") {}
    else if (curr == "philippine peso") {}
    else if (curr == "pitcairn islands dollar") {}
    else if (curr == "polish złoty" || curr == "polish zloty") {}
    else if (curr == "qatari riyal") {}
    else if (curr == "romanian leu") {}
    else if (curr == "rwandan franc") {}
    else if (curr == "sahrawi peseta") {}
    else if (curr == "saint helena pound") {}
    else if (curr == "samoan tālā" || curr == "samoan tala") {}
    else if (curr == "são tomé and príncipe dobra" || curr == "sao tome and principe dobra") {}
    else if (curr == "saudi riyal") {}
    else if (curr == "serbian dinar") {}
    else if (curr == "seychellois rupee") {}
    else if (curr == "sierra leonean leone") {}
    else if (curr == "solomon islands dollar") {}
    else if (curr == "somali shilling") {}
    else if (curr == "somaliland shilling") {}
    else if (curr == "south sudanese pound") {}
    else if (curr == "sri lankan rupee") {}
    else if (curr == "sudanese pound") {}
    else if (curr == "surinamese dollar") {}
    else if (curr == "swedish krona") {}
    else if (curr == "syrian pound") {}
    else if (curr == "new taiwan dollar") {}
    else if (curr == "tajikistani somoni") {}
    else if (curr == "tanzanian shilling") {}
    else if (curr == "thai baht") {}
    else if (curr == "tongan pa'anga") {}
    else if (curr == "transnistrian ruble") {}
    else if (curr == "trinidad and tobago dollar") {}
    else if (curr == "tunisian dinar") {}
    else if (curr == "turkmenistani manat") {}
    else if (curr == "tuvaluan dollar") {}
    else if (curr == "ugandan shilling") {}
    else if (curr == "ukrainian hryvnia") {}
    else if (curr == "united arab emirates dirham") {}
    else if (curr == "uruguayan peso") {}
    else if (curr == "uzbekistani sum") {}
    else if (curr == "vanuatu vatu") {}
    else if (curr == "venezuelan sovereign bolívar" || curr == "venezuelan sovereign bolivar") {}
    else if (curr == "venezuelan digital bolívar" || curr == "venezuelan digital bolivar") {}
    else if (curr == "vietnamese đồng" || curr == "vietnamese dong") {}
    else if (curr == "yemeni rial") {}
    else if (curr == "zambian kwacha") {}
    else if (curr == "zimbabwe gold") {}
}