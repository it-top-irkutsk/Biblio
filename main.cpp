#include <iostream>

#include "BookEdition.h"
#include "ISBN.h"
#include "RussianName.h"
#include "Author.h"

using namespace std;

void PrintBook(BookEdition* bookEdition);

int main() {
    auto* author = new Author(new RussianName("r", "r", "r"));
    auto book = new Book(new ISBN(3, 3, 3, 3), author, "t");
    auto* bookEdition = new BookEdition(book, "Moscow", 200);

    PrintBook(bookEdition);

    return 0;
}

void PrintBook(BookEdition* bookEdition) {
    cout << "Number: " << bookEdition->getBook()->getNumber() << endl;
    cout << "Title: " << bookEdition->getBook()->getTitle() << endl;
    cout << "Author: " << bookEdition->getBook()->getAuthor()->getName()->getFullName() << endl;
    cout << "Publishing house: " << bookEdition->getPublishingHouse() << endl;
    cout << "Number of pages: " << bookEdition->getNumberOfPages() << endl;
}
