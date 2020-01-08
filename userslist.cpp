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

//#include "user.h"
#include "userslist.h"

using namespace std;

UsersList::UsersList()
{
    string value;
    User u;
    
    ifstream user_file("users.csv");
    if (user_file.is_open())
    {
        while (!user_file.eof())
        {
            getline(user_file, value, '|');
            u.setUser_id(atoi(value.c_str()));

            getline(user_file, value, '|');
            u.setUsername(value);

            getline(user_file, value, '|');
            u.setFullname(value);

            getline(user_file, value, '|');
            u.setPassword(value);

            getline(user_file, value, '|');
            u.setType(atoi(value.c_str()));

            getline(user_file, value, '|');
            u.setStatus(value);

            getline(user_file, value, '|');
            u.setBalance((double)(atof(value.c_str())));

            getline(user_file, value, '\n');
            u.setFreebets(value);

            users_list.push_back(u); // vale thn domi u ston pinaka users_list 
        }
    }
    else
    {
        cout << "Den mporw na anoiksw to arxeio users.csv" << endl;
    }
    user_file.close();
}

UsersList::~UsersList()
{
}

vector<User> UsersList::getUsersList() const
{
    return UsersList::users_list;
}

void UsersList::printList() const
{
    for(int i = 0; i < users_list.size()-1; i++)
    {
        cout << users_list[i].getUser_id() << " , ";
        cout << users_list[i].getUsername() << " , ";
        cout << users_list[i].getFullname() << " , ";
        cout << users_list[i].getPassword() << " , ";
        cout << users_list[i].getType() << " , ";
        cout << users_list[i].getStatus() << " , ";
        cout << users_list[i].getBalance() << " , ";
        cout << users_list[i].getFreebets() << endl;
    }
}