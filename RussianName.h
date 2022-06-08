#ifndef BOOKS_RUSSIANNAME_H
#define BOOKS_RUSSIANNAME_H

#include <utility>

#include "AbstractName.h"

#include <string>

using namespace std;

class RussianName : public AbstractName {
private:
    string _lastName;
    string _patronymic;

public:
    RussianName(const string &firstName, string lastName, string patronymic) : AbstractName(firstName),
                                                                                             _lastName(std::move(lastName)),
                                                                                             _patronymic(std::move(patronymic)) {}

    const string &getFirstName() const {
        return _firstName;
    }

    const string &getLastName() const {
        return _lastName;
    }

    const string &getPatronymic() const {
        return _patronymic;
    }

    string getFullName() override {
        return _lastName + " " + _firstName + " " + _patronymic;
    }
};


#endif //BOOKS_RUSSIANNAME_H
