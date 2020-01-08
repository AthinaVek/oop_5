/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <string>
#include <vector>

#include "HierarchyNode.h"

using namespace std;


HierarchyNode::HierarchyNode(HierarchyNode* parent, int id, string name)
{
    this->parent = parent;
    this->id = id;
    this->name = name;
}

HierarchyNode::HierarchyNode()
{
    this->parent = NULL;
    this->id = 0;
    this->name = "";
}

HierarchyNode::~HierarchyNode()
{
    for(int i=0; i<children.size(); i++)
        delete this->children[i];
}

int HierarchyNode::getId() const
{
    return this->id;
}

string HierarchyNode::getName() const
{
    return this->name;
}

void HierarchyNode::setId(int id)
{
    this->id = id;
}

HierarchyNode* HierarchyNode::addChild(int id, string name)
{
    HierarchyNode *temp = new HierarchyNode(this, id, name);
    children.push_back(temp);
    
    return temp;
}

void HierarchyNode::removeChild(int indx)
{
    children.erase(children.begin()+indx);
}

HierarchyNode* HierarchyNode::findChild(const int id) const
{
    for(int i=0; i<children.size(); i++)
        if(children[i]->getId() == id)
            return children[i];
    return NULL;
}

HierarchyNode* HierarchyNode::getChild(int indx) const
{
    return children[indx];
}

HierarchyNode* HierarchyNode::getParent() const
{
    return parent;
}

int HierarchyNode::getNumChildren() const
{
    return children.size();
}


vector<HierarchyNode*> HierarchyNode::getChildren() const
{
    return HierarchyNode::children;
}
