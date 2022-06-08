#ifndef BOOKS_ABSTRACTAUTHOR_H
#define BOOKS_ABSTRACTAUTHOR_H

#include "AbstractName.h"

class AbstractAuthor {
protected:
    AbstractName* _name;

    AbstractAuthor(AbstractName *name) : _name(name) {}

public:
    AbstractName *getName() const {
        return _name;
    }
};


#endif //BOOKS_ABSTRACTAUTHOR_H
