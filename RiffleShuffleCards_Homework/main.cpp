#include <iostream>
#include "DeckOfCards.h"

using namespace std;

int main() {

    DeckOfCards deck;
    cout << "Deck: " << endl;
    deck.displayDeck();
    cout << endl;

    deck.shuffleDeck();
    cout << "Shuffled deck: " << endl;
    deck.displayDeck();
    cout << endl;

    deck.riffleShuffle();
    cout << "Riffle-shuffled deck: " << endl;
    deck.displayDeck();

    return 0;
}
