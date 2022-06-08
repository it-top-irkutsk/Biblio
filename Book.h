#ifndef BOOKS_BOOK_H
#define BOOKS_BOOK_H

#include <utility>

#include "AbstractEditon.h"
#include "AbstractAuthor.h"

class Book : protected AbstractEdition {
private:
    AbstractAuthor* _author;
    string _title;

public:
    Book(AbstractNumber *number, AbstractAuthor *author, string title) : AbstractEdition(number),
                                                                                _author(author), _title(std::move(title)) {}

    AbstractAuthor *getAuthor() const {
        return _author;
    }

    const string &getTitle() const {
        return _title;
    }

    string getNumber() {
        return _number->getNumber();
    }
};


#endif //BOOKS_BOOK_H
