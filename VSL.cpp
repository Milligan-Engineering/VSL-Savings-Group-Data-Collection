#include<iostream>
#include<string>
using namespace std;

int Member1Savings, Member2Savings, Member3Savings, TotalGroupSavings;
string GroupName, CommunityLocation, Member1, Member2, Member3;

int main()
{
	cout << "What is the name of your VSL group?\n";
	cin >> GroupName;
	cout << "What community is your VSL group from?\n";
	cin >> CommunityLocation;
	string name;
	cout << "What are your group members' names? (enter 3 names)\n" << flush;
	cin >> Member1;
	cin >> Member2;
	cin >> Member3;
	cout << "What is " << Member1
		<< "'s contribution?\n";
	cin >> Member1Savings;
	cout << "What is " << Member2
		<< "'s contribution?\n";
	cin >> Member2Savings;
	cout << "What is " << Member3
		<<"'s contribution?\n";
	cin >> Member3Savings;
	TotalGroupSavings = Member1Savings + Member2Savings + Member3Savings;
	cout << "Your group's total savings amount is " << TotalGroupSavings;
}