/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#ifndef SELECTION_H
#define SELECTION_H

#include <iostream>
#include <string>
#include <vector>
//#include "Market.h"

using namespace std;


class Selection
{
private:
    int selection_id;
    string selection_name;
    string price;
public:
    Selection();
    virtual ~Selection();
    
    void setSelectionId(int);
    int getSelectionId() const;
    void setSelectionName(string);
    string getSelectionName() const;
    void setPrice(string);
    string getPrice() const;
};

#endif /* SELECTION_H */

