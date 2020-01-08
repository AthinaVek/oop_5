/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include <string>
#include <stdlib.h>

#include "Market.h"

Market::Market(string value)
{
    
}

Market::~Market()
{
}

void Market::setMarketId(int x)
{
    Market::market_id = x;
}

int Market::getMarketId() const
{
    return Market::market_id;
}

void Market::setMarketName(string c)
{
    Market::market_name = c;
}

string Market::getMarketName() const
{
    return Market::market_name;
}

