//
// Created by Nate on 3/2/2017.
//

#ifndef HW4_BINGO_CARD_H
#define HW4_BINGO_CARD_H

#include <vector>

class Card {
private:
    const unsigned int m_cardSize;
public:
    std::vector<std::vector<unsigned int>>m_cardGrid;

    //Card();
    Card(unsigned int cardSize, unsigned int maxBingoNumber);

    const unsigned int getElement(unsigned int xIndex, unsigned int yIndex);
    const unsigned int getCardSize();

    ~Card();
};


#endif //HW4_BINGO_CARD_H
