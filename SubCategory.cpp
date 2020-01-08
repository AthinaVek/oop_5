#include "SubCategory.h"

SubCategory::SubCategory()
{
}

SubCategory::~SubCategory()
{
}
   
void SubCategory::setSubCategoryId(int x)
{
    SubCategory::subcategory_id = x;
}

int SubCategory::getSubCategoryId() const
{
    return SubCategory::subcategory_id;
}

void SubCategory::setSubCategoryName(string c)
{
    SubCategory::subcategory_name = c;
}

string SubCategory::getSubCategoryName() const
{
    return SubCategory::subcategory_name;
}

void SubCategory::printElements() const
{
    
}
