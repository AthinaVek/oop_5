/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "Category.h"

Category::Category(string)
{
}

Category::~Category()
{
}

void Category::setCategoryId(int x)
{
    Category::category_id = x;
}

int Category::getCategoryId() const
{
    return Category::category_id;
}

void Category::setCategoryName(string c)
{
    Category::category_name = c;
}

string Category::getCategoryName() const
{
    return Category::category_name;
}

void Category::printElements() const
{
    
}
