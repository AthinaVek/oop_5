#include <iostream>
#include <string>

#include "guest.h"

using namespace std;

Guest::Guest(){};

Guest::~Guest(){};

void Guest::printMenu() const
{
    cout << "Select:" << endl << "The ID of a node." << endl;
    cout << "H(Home) to return to home page." << endl;
    cout << "T(Toggle) to exchange the prices' view." << endl;
    cout << "X(Exit) to leave the site." << endl;
}