#include "Magazine.h"
#include <iostream>
using namespace std;

// TODO: Implement the Constructor
// Hint: Remember to call the PrintedMedia constructor using : PrintedMedia(t, p)
Magazine::Magazine(string title, double price, string month, int issueNum)
    :PrintedMedia(title, price), month(month), issueNum(issueNum) {}

void Magazine::printDetails() {
    std::cout << "Type: MAGAZINE" << std::endl;
    std::cout << "Title: " << title << " | Price: $" << price << std::endl;
    std::cout << "Month: " << month << " | Issue Number: " << issueNum << std::endl;
    std::cout << "-----------------------------" << std::endl;}