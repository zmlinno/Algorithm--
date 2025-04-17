#define _CRT_SECURE_NO_WARNINGS
#include"GreedyLet.h"
#include<iostream>
#include<algorithm>
using namespace std;
bool canPlaceFlowers(vector<int>& flowerbed, int n)
{
	int size = flowerbed.size();

	for (int i = 0; i < size; i++)
	{
		if (flowerbed[i] == 0
			&& (i == 0 || flowerbed[i - 1] == 0)
			&& (i == size - 1 || flowerbed[i + 1 == 0])
			)
		{
			flowerbed[i] = 1;
			n--;
			if (n == 0)return true;
		}
	}
	return n <= 0;//全部种完了，返回true，否则返回false
}



//分饼干letcode455
int findContentChildren(vector<int>& g, vector<int>& s)
{
	sort(g.begin(), g.end());//孩子胃口从小到大
	sort(s.begin(), s.end());//饼干尺寸从小到大

	int child = 0, cookie = 0;

	while (child < g.size() && cookie < s.size())
	{
		if (s[cookie] >= g[child])
		{
			child++;
		}
		cookie++; //每次都用掉一个饼干
	}
	return child;

}