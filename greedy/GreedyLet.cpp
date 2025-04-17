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
	return n <= 0;//ȫ�������ˣ�����true�����򷵻�false
}



//�ֱ���letcode455
int findContentChildren(vector<int>& g, vector<int>& s)
{
	sort(g.begin(), g.end());//����θ�ڴ�С����
	sort(s.begin(), s.end());//���ɳߴ��С����

	int child = 0, cookie = 0;

	while (child < g.size() && cookie < s.size())
	{
		if (s[cookie] >= g[child])
		{
			child++;
		}
		cookie++; //ÿ�ζ��õ�һ������
	}
	return child;

}