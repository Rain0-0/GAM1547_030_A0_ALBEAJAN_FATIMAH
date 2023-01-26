#pragma once
#include <iostream>

class Invitory
{
public:
         void printInv();
         bool takeItem(Item* pItem);
private:
    static const int invMax = 2;
    Item* m_pInvItem[invMax]{ nullptr, nullptr };

};