#include <string>

using namespace std;

#ifndef Z2_CONVERTER_H
#define Z2_CONVERTER_H

class Converter {
private:
    unsigned long number;

    unsigned long textToNumber(string value);

public:
    Converter(string input);

    unsigned long fromReadable();
};

#endif //Z2_CONVERTER_H
