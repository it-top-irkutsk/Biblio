#ifndef BOOKS_BOOKEDITION_H
#define BOOKS_BOOKEDITION_H

#include "Book.h"

class BookEdition {
private:
    Book* _book;
    string _publishingHouse;
    int _numberOfPages;

public:
    BookEdition(Book *book, const string &publishingHouse, int numberOfPages) : _book(book),
                                                                                _publishingHouse(publishingHouse),
                                                                                _numberOfPages(numberOfPages) {}

    Book *getBook() const {
        return _book;
    }

    const string &getPublishingHouse() const {
        return _publishingHouse;
    }

    int getNumberOfPages() const {
        return _numberOfPages;
    }

};


#endif //BOOKS_BOOKEDITION_H
