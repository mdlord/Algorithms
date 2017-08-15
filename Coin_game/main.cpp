//
//  main.cpp
//  Coin Game 
//
//  Created by Mayank Daswani on 8/13/17.
//  Copyright © 2017 Mayank Daswani. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stack>

using namespace std;

class Coin{
private:
    string coinOption;
    string side[2] = {"heads", "tails"};
    
public:
    Coin(){
        int rnum = rand()%2;
        coinOption = side[rnum];
    }
    string getCoinOption(){
        return coinOption;
    }
    
};

class Player{
private:
    string name;
    string sidePicked;
    string sides[2] = {"heads","tails"};
public:
    Player(string nm){
        name = nm;
    }
    string getCoinOption(){
        return sidePicked;
    }
    void setCoinOption(string opponentfilp){
        if(opponentfilp == sides[0])
            sidePicked = sides[1];
        else
            sidePicked = sides[0];
    }
    string getRandomCoin(){
        int rnum = rand()%2;
        sidePicked = sides[rnum];
        return sidePicked;
    }
    void didWin(string winningFlip){
        if(sidePicked == winningFlip){
            cout<<"Player: "<< name<<" won!!"<<endl;
        }
        else{
            cout<<"Player: "<<name<<" lost :("<<endl;
        }
    }
    
};

class CoinGame{
private:
    Player * player[2];
    Coin coin = Coin();
public:
    CoinGame(string pname1, string pname2){
        player[0] = new Player(pname1);
        player[1] = new Player(pname2);
    }
    void startgame(){
    
        int pmun = rand()%2;
        string playerpick = player[pmun]->getRandomCoin();
        cout<<"Player "<<pmun<<" picked: "<<playerpick<<endl;
        
        int otherp;
        
        if(pmun == 1)
            otherp =0;
        else
            otherp =1;
        
        player[otherp]->setCoinOption(playerpick);
        
        Coin c;
        string flippedcval = c.getCoinOption();
        
        player[0]->didWin(flippedcval);
        player[1]->didWin(flippedcval);

    }
};


int main(int argc, const char * argv[]) {
 
    srand( time(NULL) );

    for(int i = 0; i<5; i++){
        CoinGame cg("Raj","Ray");
        cg.startgame();
        cout<<endl;
    }
    return 0;
}
