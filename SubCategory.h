#ifndef SUBCATEGORY_H
#define SUBCATEGORY_H

#include <iostream>
#include <vector>
#include <string>
#include "Event.h"

using namespace std;


class SubCategory
{
private:
    int subcategory_id;
    string subcategory_name;
    
public:
    SubCategory();
    virtual ~SubCategory();
    
    void setSubCategoryId(int);
    int getSubCategoryId() const;
    void setSubCategoryName(string);
    string getSubCategoryName() const;
    virtual void printElements() const;
};

#endif /* SUBCATEGORY_H */

