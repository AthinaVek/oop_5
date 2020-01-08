/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#ifndef USERSLIST_H
#define USERSLIST_H

#include <iostream>
#include <vector>

#include "user.h"

using namespace std;


class UsersList
{
private:
    vector<User> users_list;
    
public:
    UsersList();
    ~UsersList();
    vector<User> getUsersList() const;
    void printList() const;
};

#endif /* USERSLIST_H */

