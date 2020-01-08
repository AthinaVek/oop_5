/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <stdlib.h>

#include "userslist.h"
#include "betslist.h"
#include "HierarchyList.h"

using namespace std;

int main(int argc, char** argv)
{
    string name, pass;
    int v;
    
    // fortwma arxeiwn efarmoghs stoys containers ul, bl //
    cout << "users.csv" << endl;
    UsersList ul;   // ul container pou periexei lista me users apo arxeio users.csv //
    ul.printList();
    cout << endl;
    
    cout << "bets.csv" << endl;
    BetsList bl; // bl container pou periexei lista me bets apo arxeio bets.csv //
    bl.printList();
    cout << endl;

    cout << "hierarchy.dat" << endl;
    
    HierarchyNode *r = new HierarchyNode();
    HierarchyList hl(r);

    HierarchyNode* rt = hl.getHierarchyList();
    cout << endl;
    
    cout << rt->getChildren()[0]->getChildren()[1]->getName() << endl;
    //hl.printList();
    cout << endl;

    /*if (argc > 1)
    {
        if (argv [1] == "-R")
        {
            cout << "Username: ";
            getline(cin, name);
        
            if ((name.length() == 0) || (name == "guest"))
                //eisodos guest
                ;

            v = 0;
            int i = 0;
            while (i<ul.getUsersList().size())
            {
                if (name == ul.getUsersList()[i].getUsername())
                {
                    v = 1;  // username found into list //
                    break;
                }
                i++;
            }

            if (v == 1)
            {
                cout << "Password: ";
                cin >> pass;
                //eisodos sto site
            }
            else
                cout << "Invalid username." << endl;

        }
    }
    else
    {
        cout << "Welcome to StoixiMan!" << endl;
        cout << "Plese type yous username and password to continue." << endl;
        cout << "If you don't have an account press Enter or type guest to continue an a guest." << endl;
        
        cout << "Username: ";
        getline(cin, name);
        
        if ((name.length() == 0) || (name == "guest"))
            //eisodos guest
            ;
        
        v = 0;
        int i = 0;
        while (i<ul.getUsersList().size())
        {
            if (name == ul.getUsersList()[i].getUsername())
            {
                v = 1;  // username found into list //
                break;
            }
            i++;
        }
        
        if (v == 1)
        {
            cout << "Password: ";
            cin >> pass;
            //eisodos sto site
        }
        else
            cout << "Invalid username." << endl;

    }*/
    
    cout << endl;
    
    return 0;
}

