#ifndef BOOKS_AUTHOR_H
#define BOOKS_AUTHOR_H

#include "AbstractAuthor.h"

class Author : public AbstractAuthor {
public:
    Author(AbstractName *name) : AbstractAuthor(name) {}
};


#endif //BOOKS_AUTHOR_H
