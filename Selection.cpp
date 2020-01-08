/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

#include "Selection.h"

using namespace std;

Selection::Selection()
{
}

Selection::~Selection()
{
}

void Selection::setSelectionId(int x)
{
    Selection::selection_id = x;
}

int Selection::getSelectionId() const 
{
    return Selection::selection_id;
}

void Selection::setSelectionName(string c)
{
    Selection::selection_name = c;
}

string Selection::getSelectionName() const
{
    return Selection::selection_name;
}

void Selection::setPrice(string c)
{
    Selection::price = c;
}

string Selection::getPrice() const 
{
    return Selection::price;
}

