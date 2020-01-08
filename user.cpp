/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <string>
#include "user.h"

using namespace std;

//int Users::user_id = 0;

User::User()
{
}

User::~User()
{
}

void User::setUser_id(int x) {
    User::user_id = x;
}

int User::getUser_id() const {
    return User::user_id;
}

void User::setUsername(string u_name) {
    User::username = u_name;
}

string User::getUsername() const {
    return User::username;
}

void User::setFullname(string f) {
    User::fullname = f;
}

string User::getFullname() const {
    return User::fullname;
}

void User::setPassword(string p) {
    User::password = p; 
}

string User::getPassword() const {
    return User::password;
}

void User::setType(int t)
{
    User::type = t;
}

int User::getType() const
{
    return User::type;
}

void User::setStatus(string s)
{
    User::status = s;
}

string User::getStatus() const
{
    return User::status;
}

void User::setBalance(double b)
{
    User::balance = b;
}

double User::getBalance() const
{
    return User::balance;
}

void User::setFreebets(string f)
{
    User::freebets = f;
}

string User::getFreebets() const
{
    return User::freebets;
}

void User::printMenu() const
{
    
}


void User::printLine() const
{
}