/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#ifndef CATEGORY_H
#define CATEGORY_H

#include <iostream>
#include <vector>
#include <string>
#include "SubCategory.h"

using namespace std;

class Category
{
private:
    int category_id;
    string category_name;
public:
    Category(string);
    virtual ~Category();
    
    void setCategoryId(int);
    int getCategoryId() const;
    void setCategoryName(string);
    string getCategoryName() const;
    virtual void printElements() const;
};

#endif /* CATEGORY_H */

 