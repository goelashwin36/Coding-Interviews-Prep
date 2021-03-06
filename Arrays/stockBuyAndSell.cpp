/*
 * Author: Ashwin Goel
 */

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    if (prices.size() <= 1)
      return 0;
    int profit = 0;
    int maxProfit = 0;

    for (int i = 0; i < prices.size() - 1; i++)
    {
      if (profit + prices[i + 1] - prices[i] > 0)
      {
        profit += prices[i + 1] - prices[i];
        maxProfit = max(maxProfit, profit);
      }
      else
        profit = 0;
    }
    return maxProfit;
  }
};
