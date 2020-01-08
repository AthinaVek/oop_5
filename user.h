/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using namespace std;

class User
{
private:
    int user_id;
    string username;
    string fullname;
    string password;
    int type;
    string status;
    double balance;
    string freebets;
    
public:
    User();
    virtual ~User();
    
    void setUser_id(int);
    int getUser_id() const;
    
    void setUsername(string);
    string getUsername() const;
    
    void setFullname(string);
    string getFullname() const;
    
    void setPassword(string);
    string getPassword() const;
    
    void setType(int);
    int getType() const;

    void setStatus(string);
    string getStatus() const;
    
    void setBalance(double);
    double getBalance() const;
    
    void setFreebets(string);
    string getFreebets() const;
    
    void printLine() const;
    
    virtual void printMenu() const;
};

#endif /* USER_H */

