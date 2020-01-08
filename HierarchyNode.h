/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#ifndef HIERARCHY_H
#define HIERARCHY_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;


class HierarchyNode
{
private:
    int id;
    string name;
    HierarchyNode* parent;
    vector<HierarchyNode*>  children;

public:
    HierarchyNode(HierarchyNode* parent, int id, string name);
    HierarchyNode();
    ~HierarchyNode();

    int getId() const;
    string getName() const;
    void setId(int id);
    void setName(string name);
    HierarchyNode* addChild(int id, string name);
    void removeChild(int id);
    HierarchyNode* findChild(int id) const;
    HierarchyNode* getChild(int id) const;
    HierarchyNode* getParent() const;
    int getNumChildren() const;
    vector<HierarchyNode*> getChildren() const;

};

#endif /* HIERARCHY_H */

