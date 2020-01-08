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

#include "betslist.h"

using namespace std;

BetsList::BetsList()
{
    string value;
    Bet b;
    
    ifstream bets_file("bets.csv");
    if (bets_file.is_open())
    {
        while (!bets_file.eof()) // diavazw kathe grammi apo to arxeio bets.csv
        {
            getline(bets_file, value, '|');
            b.setBet_id(atoi(value.c_str()));

            getline(bets_file, value, '|');
            b.setUser_id(atoi(value.c_str()));

            getline(bets_file, value, '|');
            b.setNode_id(value);

            getline(bets_file, value, '|');
            b.setStake(atof(value.c_str()));

            getline(bets_file, value, '\n');
            b.setResult(value);

            bets_list.push_back(b); // vale thn domi b ston pinaka bets_list 
        }
    }
    else
    {
        cout << "Den mporw na anoiksw to arxeio bets.csv" << endl;
    }
    bets_file.close();
}

BetsList::~BetsList()
{
}

void BetsList::printList() const
{
    for(int i = 0; i < bets_list.size()-1; i++)
    {
        cout << bets_list[i].getBet_id() << " , ";
        cout << bets_list[i].getUser_id() << " , ";
        cout << bets_list[i].getNode_id() << " , ";
        cout << bets_list[i].getStake() << " , ";
        cout << bets_list[i].getResult() << endl;
    }
}