#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "PrintedMedia.h"
#include <string>
using namespace std;

class Magazine : public PrintedMedia {
private:
    string month;
    int issueNum;

public:
    Magazine(string title, double price, string month, int issueNum);
    void printDetails() override;
};

#endif