#ifndef BOOKS_ISBN_H
#define BOOKS_ISBN_H

#include "AbstractNumber.h"

#include <string>

using namespace std;

class ISBN : public AbstractNumber {
private:
    int _country;
    int _publishingHouse;
    int _unique;
    int _control;

public:
    ISBN(int country, int publishingHouse, int unique, int control) : _country(country),
                                                                      _publishingHouse(publishingHouse),
                                                                      _unique(unique), _control(control) {}

    string getNumber() override {
        return to_string(_country) + to_string(_publishingHouse) + to_string(_unique) + to_string(_control);
    }
};


#endif //BOOKS_ISBN_H
