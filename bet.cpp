/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "bet.h"

Bet::Bet()
{
    
}

Bet::~Bet()
{
}

void Bet::setBet_id(int x)
{
    Bet::bet_id = x;
}

int Bet::getBet_id() const
{
    return Bet::bet_id;
}

void Bet::setUser_id(int u_id) {
    Bet::user_id = u_id;
}

int Bet::getUser_id() const {
    return Bet::user_id;
}

void Bet::setNode_id(string n_id) {
    Bet::node_id = n_id;
}

string Bet::getNode_id() const {
    return Bet::node_id;
}

void Bet::setStake(double s) {
    Bet::stake = s; 
}

double Bet::getStake() const {
    return Bet::stake;
}

void Bet::setResult(string r) {
    Bet::result = r;
}

string Bet::getResult() const {
    return Bet::result;
}

void Bet::printLine() const
{
}

