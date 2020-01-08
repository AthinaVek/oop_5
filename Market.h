/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#ifndef MARKET_H
#define MARKET_H

#include <iostream>
#include <string>
#include <vector>
#include "Selection.h"

using namespace std;


class Market
{
private:
    int market_id;
    string market_name;

public:
    Market(string);
    virtual ~Market();
    
    void setMarketId(int);
    int getMarketId() const;
    void setMarketName(string);
    string getMarketName() const;
};

#endif /* MARKET_H */

