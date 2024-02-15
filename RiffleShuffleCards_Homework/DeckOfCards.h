//
// Created by Annie on 15.2.2024 г..
//

#ifndef RIFFLESHUFFLECARDS_HOMEWORK_DECKOFCARDS_H
#define RIFFLESHUFFLECARDS_HOMEWORK_DECKOFCARDS_H
#include <iostream>
#include <vector>
#include "PlayingCards.h"

using namespace std;

class DeckOfCards {

public:
    DeckOfCards();

    void shuffleDeck();

    void riffleShuffle();

    void displayDeck();

private:
    vector<PlayingCards> cards;
};


#endif //RIFFLESHUFFLECARDS_HOMEWORK_DECKOFCARDS_H
