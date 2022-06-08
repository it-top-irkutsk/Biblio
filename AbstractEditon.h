#ifndef BOOKS_ABSTRACTEDITON_H
#define BOOKS_ABSTRACTEDITON_H

#include "AbstractNumber.h"

class AbstractEdition {
protected:
    AbstractNumber* _number;

    AbstractEdition() {}
    AbstractEdition(AbstractNumber *number) : _number(number) {}

public:
    AbstractNumber *getNumber() const {
        return _number;
    }
};


#endif //BOOKS_ABSTRACTEDITON_H
