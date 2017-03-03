//
// Created by Nate on 3/2/2017.
//

#ifndef BINGO_DECKTESTER_H
#define BINGO_DECKTESTER_H

#include "../Deck.h"


class DeckTester {
public:
    void testConstructorAndGetters();
    void testConstructorAndGettersCase(unsigned int cardSize, unsigned int cardCount, unsigned int maxNumber);
};


#endif //BINGO_DECKTESTER_H
