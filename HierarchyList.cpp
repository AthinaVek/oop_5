/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include <iomanip>

#include "HierarchyList.h"

using namespace std;

HierarchyList::HierarchyList(HierarchyNode *r) : root(r)
{
    string value;
    HierarchyNode *p1, *p2, *p3, *p4, *p5;

    ifstream hierarchy_file("hierarchy.dat");
    if (hierarchy_file.is_open()) 
    {
        while (!hierarchy_file.eof()) // diavazw kathe grammi apo to arxeio bets.csv
        {
            getline(hierarchy_file, value, '\n'); // diabazw thn grammi toy arxeioy hierarchy.dat //
            if (value.size() != 0) {
                string str1 = value.substr(0, value.find(' ')); // pairnw to prwto tmhma mexri to prwto keno //
                int nDots = countDots(str1, '.'); // metraw poses teleies exei to prwto tmhma //

                if (nDots == 0) // 1 tote einai h Category class //
                {
                    // get category_id //
                    string sId = str1.substr(0, str1.find('.')); // pare gia id, mexri thn prwth . //
                    int category_id = atoi(sId.c_str()); // kane to string integer //
                    // get category_name
                    string category_name = value.substr(value.find(" ") + 1); // pare gia name, meta to prwto keno kai mexri to telos //

                    p1 = root->addChild(category_id, category_name);

                    cout << p1->getId() << " " << p1->getName() << endl;
                } else if (nDots == 1) // 1.1 tote einai h SubCategory class //
                {
                    // get subcategory_id //
                    string sId1 = str1.substr(0, str1.find('.')); // diavase apo thn arxh mexri thn prwth . //
                    string sId2 = str1.substr(sId1.length() + 1, str1.find(' ')); // diavase meta thn 1h teleia mexri to prwto keno //

                    int subcategory_id = atoi(sId2.c_str()); // kane to sId2 integer //
                    // get subcategory_name
                    string subcategory_name = value.substr(value.find(" ") + 1); // pare gia name, meta to prwto keno kai mexri to telos //

                    p2 = p1->addChild(subcategory_id, subcategory_name);

                    cout << p1->getId() << "." << p2->getId() << " " << p2->getName() << endl;
                } else if (nDots == 2) // 1.1.1 tote einai h Event class //
                {
                    // get event_id //
                    string sId1 = str1.substr(0, str1.find('.')); // diavase apo thn arxh mexri thn prwth . //
                    string sId2 = str1.substr(sId1.length() + 1, str1.find('.')); // diavase meta thn 1h teleia mexri th 2h //
                    string sId3 = str1.substr(sId1.length() + sId2.length() + 2, str1.find(' ')); // diavase meta thn 2h teleia mexri to prwto keno //

                    int event_id = atoi(sId3.c_str()); // kane to sId3 integer //
                    // get event_name //
                    string event_name = value.substr(value.find(" ") + 1); // pare gia name, meta to prwto keno kai mexri to telos //

                    p3 = p2->addChild(event_id, event_name);

                    cout << p1->getId() << "." << p2->getId() << "." << p3->getId() << " " << p3->getName() << endl;
                } else if (nDots == 3) // 1.1.1.1 tote einai h Market class //
                {
                    // get market_id //
                    string sId1 = str1.substr(0, str1.find('.')); // diavase apo thn arxh mexri thn prwth . //
                    string sId2 = str1.substr(sId1.length() + 1, str1.find('.')); // diavase meta thn 1h teleia mexri th 2h //
                    string sId3 = str1.substr(sId1.length() + sId2.length() + 2, str1.find('.')); // diavase meta thn 2h teleia mexri thn 3h teleia //
                    string sId4 = str1.substr(sId1.length() + sId2.length() + 2 + sId3.length() + 1, str1.find(' ')); // diavase meta thn 3h teleia mexri to 1o keno //

                    int market_id = atoi(sId4.c_str()); // kane to sId3 integer //
                    // get market_name //
                    string market_name = value.substr(value.find(" ") + 1); // pare gia name, meta to prwto keno kai mexri to telos //

                    p4 = p3->addChild(market_id, market_name);

                    cout << p1->getId() << "." << p2->getId() << "." << p3->getId() << "." << p4->getId() << " " << p4->getName() << endl;

                } else if (nDots == 4) // 1.1.1.1.1 tote einai h Selection class //
                {
                    // get selection_id //
                    string sId1 = str1.substr(0, str1.find('.')); // diavase apo thn arxh mexri thn prwth . //
                    string sId2 = str1.substr(sId1.length() + 1, str1.find('.')); // diavase meta thn 1h teleia mexri th 2h //
                    string sId3 = str1.substr(sId1.length() + sId2.length() + 2, str1.find('.')); // diavase meta thn 2h teleia mexri thn 3h teleia //
                    string sId4 = str1.substr(sId1.length() + sId2.length() + 2 + sId3.length() + 1, str1.find('.')); // diavase meta thn 3h teleia mexri thn 4h teleia //
                    string sId5 = str1.substr(sId1.length() + sId2.length() + 2 + sId3.length() + 2 + sId4.length(), str1.find(' ')); // diavase meta thn 4h teleia mexri to 1o keno //

                    int selection_id = atoi(sId5.c_str()); // kane to sId3 integer //
                    // get selection_name //
                    string selection_name = value.substr(value.find(" ") + 1); // pare gia name, meta to prwto keno kai mexri to telos //

                    p5 = p4->addChild(selection_id, selection_name);

                    cout << p1->getId() << "." << p2->getId() << "." << p3->getId() << "." << p4->getId() << "." << p5->getId() << " " << p5->getName() << endl;
                }
            }
        }
    } else {
        cout << "Den mporw na anoiksw to arxeio hierarchy.dat" << endl;
    }
    hierarchy_file.close();
}

HierarchyList::~HierarchyList() {
}

void HierarchyList::printList() const {
}

HierarchyNode * HierarchyList::getHierarchyList() const {
    return HierarchyList::root;
}

int HierarchyList::countDots(string s, char c) {
    int count = 0, i = 0;

    while (i < s.size()) {
        if (s.at(i) == c) // 
            count++;

        i++;
    }

    return count;
}