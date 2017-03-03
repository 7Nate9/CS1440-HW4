//
// Created by Nate on 3/2/2017.
//

#include <iostream>
#include "DeckTester.h"

void DeckTester::testConstructorAndGetters()
{
    std::cout << "Deck Testing:" << std::endl << std::endl;

    std::cout << "Test Case 1: Minimum values" << std::endl;
    testConstructorAndGettersCase(3,3,18);
    std::cout << std::endl;

    std::cout << "Test Case 2: Maximum values" << std::endl;
    testConstructorAndGettersCase(15,10000,900);
    std::cout << std::endl;

    std::cout << "Test Case 3: Medium values" << std::endl;
    testConstructorAndGettersCase(9,5000,243);
    std::cout << std::endl;

    std::cout << std::endl;
}

void DeckTester::testConstructorAndGettersCase(unsigned int cardSize, unsigned int cardCount, unsigned int maxNumber)
{
    Deck deck(cardSize, cardCount, maxNumber);

    if (deck.getMaxNumber() == maxNumber)
    {
        std::cout << "Max Number successfully initiated." << std::endl;
    }
    else
    {
        std::cout << "Max Number initiation failed. Expected: " << maxNumber << ". Result: " << deck.getMaxNumber() << "." << std::endl;
    }

    if (deck.getDeckSize() == cardCount)
    {
        std::cout << "Deck Size successfully initiated." << std::endl;
    }
    else
    {
        std::cout << "Deck Size initiation failed. Expected: " << cardCount << ". Result: " << deck.getDeckSize() << "." << std::endl;
    }

    if (deck.getCardDeck().size() == cardCount)
    {
        std::cout << "Card Deck successfully initiated." << std::endl;
    }
    else
    {
        std::cout << "Card Deck initiation failed. Expected: size " << cardCount << ". Result: size " << deck.getCardDeck().size() << "." << std::endl;
    }
}