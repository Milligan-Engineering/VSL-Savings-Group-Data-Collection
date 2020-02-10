//File Name: VSL.cpp
//Author: Zula Coley
//Email Address: zgcoley@my.milligan.edu
//EENG 221 Semester Project
//Description: Program used to track Village Savings and Loans groups' data and organize groups' daily operations.
//Last Changed: February 9, 2020
//Trying Push

#include<iostream>
#include<string>
using namespace std;

int GroupNumber, Member1Savings, Member2Savings, Member3Savings, TotalGroupSavings;
int const GROUP_MAX = 11;
int const NAME_LENGTH = 40;
char member[GROUP_MAX][NAME_LENGTH];
int i = 1, k = 0, j = 0;
string GroupName, CommunityLocation, Member1, Member2, Member3;

int main()
//SetUp: This will guide the group leader in setting up an initial group profile
{
		cout << "What is the name of your VSL group?\n";
		cin >> GroupName;

		cout << "What community is your VSL group from?\n";
		cin >> CommunityLocation;

		cout << "How many members are in your group?\n";
		cin >> GroupNumber;
	
	{
		if (GroupNumber < GROUP_MAX)
			while (i - 1 < GroupNumber)
			{
				cout << "Enter member " << i << "'s name:";
				cin >> member[j];
				cout << "\n" << endl;
				i++;
				j++;
			}
		else
		{
			cout << "Your group is too large. Please enter a number equal to or less than 10.\n";
			cout << "How many members are in your group ?\n";
			cin >> GroupNumber;
			if (GroupNumber < GROUP_MAX)
				while (i - 1 < GroupNumber)
				{
					cout << "Enter member " << i << "'s name:";
					cin >> member[j];
					cout << "\n" << endl;
					i++;
					j++;
				}
			else
			{
				cout << "ERROR: Your group is too large. Please start again.";
				return 0;
			}
		}
		{
		cout << "Your group members are:";
		cout << "\n";
		while (k < GroupNumber)
			{
			cout << k + 1 << ":" << member[k];
			cout << "\n" << endl;
			k++;
			}
			cout << endl;
		}
		
	}
}
