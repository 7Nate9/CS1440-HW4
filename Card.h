//
// Created by Nate on 3/2/2017.
//

#ifndef HW4_BINGO_CARD_H
#define HW4_BINGO_CARD_H


class Card {
private:
    unsigned int m_cardSize;
public:
    unsigned int** m_cardGrid;

    //Card();
    Card(unsigned int cardSize, unsigned int maxBingoNumber);
    unsigned int getElement(unsigned int xIndex, unsigned int yIndex) const;
    unsigned int getCardSize() const;
    ~Card();
};


#endif //HW4_BINGO_CARD_H
