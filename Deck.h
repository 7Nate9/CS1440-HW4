//
// Created by Stephen Clyde on 2/16/17.
//

#ifndef BINGO_DECK_H
#define BINGO_DECK_H

#include <ostream>
#include <vector>
#include "Card.h"

// TODO: Extend this definition as you see fit

class Deck {
private:
    unsigned int m_deckSize;
    unsigned int m_maxNumber;
    std::vector<Card> m_cardDeck;
public:
    Deck(int cardSize, int cardCount, int numberMax);
    ~Deck();

    void print(std::ostream& out) const;
    void print(std::ostream& out, int cardIndex) const;

    unsigned int getDeckSize();
    unsigned int getMaxNumber();
    std::vector<Card>& getCardDeck();
};

#endif //BINGO_DECK_H
