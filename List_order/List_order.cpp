// List_order.cpp : This program Reverse's list order .

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>


int main()
{
	std::vector<std::string> Test{ "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten" };
	std::vector<std::string> RTest;
	std::string temp;

	for (int i = 1; i <= Test.size(); i++)
	{
		temp = Test[Test.size() - i];
		RTest.push_back(temp);

		std::cout << RTest[i-1] << "\n";
	}
	return 0;
}

