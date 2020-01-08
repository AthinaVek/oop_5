/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#ifndef HIERARCHYLIST_H
#define HIERARCHYLIST_H

#include <iostream>
#include <vector>
#include <string>

#include "HierarchyNode.h"

using namespace std;


class HierarchyList
{
private:
    HierarchyNode *root;
    
public:
    HierarchyList(HierarchyNode*);
    virtual ~HierarchyList();
    HierarchyNode * getHierarchyList() const;
    void printList() const;
    int countDots(string, char);
};

#endif /* HIERARCHYLIST_H */

