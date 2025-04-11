//
//  Greedy.cpp
//  greedy
//
//  Created by 张木林 on 4/11/25.
//

#include "Greedy.hpp"
using namespace std;
int maxProfit(const vector<int>&prices)
{
    int profit = 0;
    for(int i = 1;i<prices.size();i++)
    {
        if(prices[i]>prices[i-1])
        {
            profit += prices[i] - prices[i-1];
        }
    }
    return profit;
}



