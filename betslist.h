/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#ifndef BETSLIST_H
#define BETSLIST_H

#include <iostream>
#include <vector>

#include "bet.h"

using namespace std;


class BetsList {
private:
    vector<Bet> bets_list;

public:
    BetsList();
    ~BetsList();
    void printList() const;
};

#endif /* BETSLIST_H */

