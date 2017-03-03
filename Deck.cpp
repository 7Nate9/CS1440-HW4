//
// Created by Stephen Clyde on 2/16/17.
//

#include "Deck.h"
#include <cmath>
#include <iomanip>

Deck::Deck(int cardSize, int cardCount, int numberMax):
m_deckSize(static_cast<unsigned int>(cardCount)),
m_maxNumber(static_cast<unsigned int>(numberMax))
{
    if (cardSize < 3 || cardSize > 15 || cardCount < 3 || cardCount > 10000 || numberMax < (2 * cardSize * cardSize) || numberMax > (4 * cardSize * cardSize))
    {
        exit(-1);
    }

    for (unsigned int i = 0; i < m_deckSize; i++)
    {
        m_cardDeck.push_back(Card(static_cast<unsigned int>(cardSize), m_maxNumber));
    }
}

Deck::~Deck()
{
    //The Deck class does not use any dynamically allocated memory, with the exception vectors, which handle their own destruction.
}

const void Deck::print(std::ostream& out)
{
    for (unsigned int i = 1; i <= m_deckSize; i++)
    {
        print(out, i);
        out << std::endl;
    }
}

const void Deck::print(std::ostream& out, int cardIndex)
{
    cardIndex--;

    unsigned int maxNumberLength = static_cast<unsigned int>(log10(static_cast<double>(m_maxNumber)) + 1);

    out << "Card #" << cardIndex + 1 << std::endl;

    out << "+";

    for (unsigned int i = 0; i < m_cardDeck[cardIndex].getCardSize(); i++)
    {
        for (unsigned int j = 0; j < maxNumberLength + 2; j++)
        {
            out << "-";
        }

        out << "+";
    }

    out << std::endl;

    for (unsigned int i = 0; i < m_cardDeck[cardIndex].getCardSize(); i++)
    {
        out << "|";

        for (unsigned int j = 0; j < m_cardDeck[cardIndex].getCardSize(); j++)
        {
            out << " ";
            out << std::setw(maxNumberLength + 1) << std::left << m_cardDeck[cardIndex].getElement(i, j);
            out << std::setw(1) << "|";
        }

        out << std::endl;
        out << "+";

        for (unsigned int j = 0; j < m_cardDeck[cardIndex].getCardSize(); j++)
        {
            for (unsigned int k = 0; k < maxNumberLength + 2; k++)
            {
                out << "-";
            }

            out << "+";
        }

        out << std::endl;
    }
}

const unsigned int Deck::getDeckSize()
{
    return m_deckSize;
}

const unsigned int Deck::getMaxNumber()
{
    return m_maxNumber;
}

const std::vector<Card>& Deck::getCardDeck()
{
    return m_cardDeck;
}