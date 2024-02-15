#include "DeckOfCards.h"
#include <iostream>
#include <cstdlib> //rand() ; srand()
#include <ctime>

DeckOfCards::DeckOfCards() {
    vector<char> types = {'1', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    vector<string> suits = {"Spades", "Diamonds", "Hearts", "Clubs"};

    for (const auto& suit : suits) {
        for (const auto& type : types) {
            cards.emplace_back(type, suit);
        }
    }
}

void DeckOfCards::riffleShuffle() {
    vector<PlayingCards> shuffledDeck;
    size_t half = cards.size() / 2;
    for (size_t i = 0; i < half; ++i) {
        shuffledDeck.push_back(cards[i]);
        shuffledDeck.push_back(cards[i + half]);
    }
    cards = shuffledDeck;
}

void DeckOfCards::displayDeck() {
    for (const auto& card : cards) {
        cout << card.getType() << " " << card.getSuit() << endl;
    }
}

void DeckOfCards::shuffleDeck() {
    srand(static_cast<unsigned int>(time(NULL))); // random generator

    for (size_t i = 0; i < cards.size(); ++i) {
        size_t randomIndex = rand() % cards.size();
        swap(cards[i], cards[randomIndex]);
    }
}
