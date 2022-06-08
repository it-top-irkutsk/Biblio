#ifndef BOOKS_ABSTRACTNAME_H
#define BOOKS_ABSTRACTNAME_H

#include <string>

using namespace std;

class AbstractName {
protected:
    string _firstName;

    AbstractName(const string &firstName) : _firstName(firstName) {}

public:
    virtual string getFullName() {
        return _firstName;
    }
};


#endif //BOOKS_ABSTRACTNAME_H
