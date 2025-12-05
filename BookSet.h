#ifndef BOOKSET_H
#define BOOKSET_H

#include "Book.h"
using namespace std;
// Inherits from Book, NOT PrintedMedia
class BookSet : public Book {
private:
    int volume;

public:
    // Constructor: Needs Title, Price, Author, ISBN, Volume
    BookSet(string t, double p, string a, string i, int v);

    void printDetails() override;
};

#endif