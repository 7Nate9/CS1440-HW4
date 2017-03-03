//
// Created by Nate on 3/2/2017.
//

#include "CardTester.h"
#include <iostream>

void CardTester::testConstructorAndGetters()
{
    std::cout << "Card Testing:" << std::endl << std::endl;

    std::cout << "Test Case 1: Minimum values" << std::endl;
    testConstructorAndGettersCase(3,18);
    std::cout << std::endl;

    std::cout << "Test Case 2: Maximum values" << std::endl;
    testConstructorAndGettersCase(15,900);
    std::cout << std::endl;

    std::cout << "Test Case 3: Medium values" << std::endl;
    testConstructorAndGettersCase(9,243);
    std::cout << std::endl;

    std::cout << std::endl;
}

void CardTester::testConstructorAndGettersCase(unsigned int cardSize, unsigned int maxBingoNumber)
{
    Card card(cardSize, maxBingoNumber);

    if (card.getCardSize() == cardSize)
    {
        std::cout << "Card Size successfully initiated." << std::endl;
    }
    else
    {
        std::cout << "Card Size initiation failed. Expected: " << cardSize << ". Result: " << card.getCardSize() << "." << std::endl;
    }

    if (card.m_cardGrid.size() == cardSize)
    {
        std::cout << "X Dimension successfully initiated." << std::endl;
    }
    else
    {
        std::cout << "X Dimension initiation failed. Expected: " << cardSize << ". Result: " << card.m_cardGrid.size() << "." << std::endl;
    }

    unsigned int actualY = cardSize;

    for (unsigned int i = 0; i < card.m_cardGrid.size(); i++)
    {
        if (card.m_cardGrid[i].size() != cardSize)
        {
            actualY = card.m_cardGrid[i].size();
            break;
        }
    }

    if (actualY == cardSize)
    {
        std::cout << "Y Dimension successfully initiated." << std::endl;
    }
    else
    {
        std::cout << "Y Dimension initiation failed. Expected: " << cardSize << ". Result: " << card.m_cardGrid.size() << "." << std::endl;
    }

    unsigned int actualMax = maxBingoNumber;

    for (unsigned int i = 0; i < card.m_cardGrid.size(); i++)
    {
        for (unsigned int j = 0; j < card.m_cardGrid[i].size(); j++)
        {
            if (card.m_cardGrid[i][j] > maxBingoNumber)
            {
                actualMax = card.m_cardGrid[i][j];
                break;
            }
        }
    }

    if (actualMax == maxBingoNumber)
    {
        std::cout << "Max Number successfully initiated." << std::endl;
    }
    else
    {
        std::cout << "Max Number initiation failed. Expected: " << maxBingoNumber << ". Result: " << actualMax << "." << std::endl;
    }
}