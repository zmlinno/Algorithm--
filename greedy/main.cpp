//
//  main.cpp
//  greedy
//
//  Created by 张木林 on 4/11/25.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include"Greedy.hpp"



int main()
{
    //测试股票
    vector<int>prices = {7,1,5,3,6,4};
    int profit = maxProfit(prices);
    cout<<"最大利润: "<<profit<<endl;
    return 0;
}

//int greedyExample(vector<int>&nums)
//{
//    //1.排序
//    sort(nums.begin(),nums.end());
//    
//    int result = 0;
//    
//    //2.遍历+贪心选择
//    for(int i = 0;i<nums.size();i++)
//    {
//        //根据当前局部最优的策略决定是否选择
//        if(nums[i] % 2 == 0)
//        {
//            //做出选择-贪心
//            result += nums[i];
//        }
//    }
//    
//    //3.返回最终全局结果
//    return result;
//}
//
//int main()
//{
//    vector<int>example = {5,1,3,7,4};
//    
//    int ans = greedyExample(example);
//    cout<<"贪心算法结果: "<<ans<<endl;
//    return 0;
//}
