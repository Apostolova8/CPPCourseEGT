//
// Created by Annie on 15.2.2024 г..
//

#ifndef RIFFLESHUFFLECARDS_HOMEWORK_PLAYINGCARDS_H
#define RIFFLESHUFFLECARDS_HOMEWORK_PLAYINGCARDS_H
#include <iostream>

using namespace std;

class PlayingCards {

public:
    PlayingCards(char, string);

    char getType() const;

    void setType(char type);

    const string &getSuit() const;

    void setSuit(const string &suit);

private:
    char type;
    string suit;
};


#endif //RIFFLESHUFFLECARDS_HOMEWORK_PLAYINGCARDS_H
