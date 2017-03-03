//
// Created by Nate on 3/2/2017.
//

#include "Card.h"
#include <cstdlib>
#include <vector>

//Card::Card()
//{
//
//}

Card::Card(unsigned int cardSize, unsigned int maxBingoNumber)
{
    m_cardSize = cardSize;
    std::vector<unsigned int> usedNums;

    m_cardGrid = new unsigned int*[m_cardSize];

    for (unsigned int i = 0; i < m_cardSize; i++)
    {
        m_cardGrid[i] = new unsigned int[m_cardSize];

        for (unsigned int j = 0; j < m_cardSize; j++)
        {
            bool alreadyInCard = true;

            while(alreadyInCard)
            {
                alreadyInCard = false;

                unsigned int number = (std::rand() % maxBingoNumber) + 1;

                for (int k = 0; k < usedNums.size(); k++)
                {
                    if (number == usedNums[k])
                    {
                        alreadyInCard = true;
                        break;
                    }
                }

                if (!alreadyInCard)
                {
                    m_cardGrid[i][j] = number;
                }
            }
        }
    }
}

unsigned int Card::getElement(unsigned int xIndex, unsigned int yIndex) const
{
    return m_cardGrid[xIndex][yIndex];
}

unsigned int Card::getCardSize() const
{
    return m_cardSize;
}

Card::~Card()
{
    for (unsigned int i = 0; i < m_cardSize; i++)
    {
        if (m_cardGrid[i])
        {
            delete[] m_cardGrid[i];
            m_cardGrid[i] = nullptr;
        }
    }

    if (m_cardGrid)
    {
        delete[] m_cardGrid;
        m_cardGrid = nullptr;
    }
}