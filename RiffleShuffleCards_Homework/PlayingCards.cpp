//
// Created by Annie on 15.2.2024 г..
//

#include "PlayingCards.h"

char PlayingCards::getType() const {
    return type;
}

void PlayingCards::setType(char type) {
    PlayingCards::type = type;
}

const string &PlayingCards::getSuit() const {
    return suit;
}

void PlayingCards::setSuit(const string &suit) {
    PlayingCards::suit = suit;
}

PlayingCards::PlayingCards(char type, string suit) {
    setType(type);
    setSuit(suit);
}
