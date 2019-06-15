#include <string>
#include <map>
#include "converter.h"


Converter::Converter(string value) {
    this->number = textToNumber(value);

}

unsigned long Converter::fromReadable() {
    return this->number;
}

unsigned long Converter::textToNumber(string value) {
    map<char, int> units = {{'M', 6},
                            {'G', 9},
                            {'T', 12},
                            {'P', 15},
                            {'E', 18}};

    int shift = 0;
    int positionDot = 0;
    char size = value.back();
    auto unit = units.find(size);
    value.erase(remove(value.begin(), value.end(), size), value.end());

    if (unit == units.end()) return 0;

    positionDot = value.find('.');
    shift = unit->second;

    if (positionDot > 0) {
        value.erase(remove(value.begin(), value.end(), '.'), value.end());
        shift = unit->second - (value.length() - positionDot);
    }

    for (int i = 0; i < shift; i++)
        value += '0';

    return stoul(value);
}

