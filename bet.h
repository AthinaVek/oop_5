/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#ifndef BET_H
#define BET_H

#include <iostream>
#include <string>

using namespace std;


class Bet 
{
private:
    int bet_id;
    int user_id;
    string node_id;
    double stake;
    string result;

public:
    Bet();
    ~Bet();

    void setBet_id(int);
    int getBet_id() const;
    void setUser_id(int);
    int getUser_id() const;
    void setNode_id(string);
    string getNode_id() const;
    void setStake(double);
    double getStake() const;
    void setResult(string);
    string getResult() const;
    void printLine() const;
};

#endif /* BET_H */

