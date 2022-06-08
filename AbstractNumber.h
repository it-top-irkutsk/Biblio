#ifndef BOOKS_ABSTRACTNUMBER_H
#define BOOKS_ABSTRACTNUMBER_H

#include <string>

using namespace std;

class AbstractNumber {
public:
    virtual string getNumber() = 0;
};


#endif //BOOKS_ABSTRACTNUMBER_H
