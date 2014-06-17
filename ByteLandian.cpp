/**
* This is my first problem statement from the medium category of problem statements .
* This seems to have some  application of dynamic programming .
* Well Let's see .
**/
#include<iostream>/**For the basic stdin and stdout functions .*/

using namespace std ;

int Sum = 0 ;/**Now this variable will store the answer to the PS.This reason of making it global is very crucial to the functioning of the program .*/

void Profit(int n)/**The main function which is called recursively for its very functioning .*/
{
	if(n < 12)
	{
		Sum = Sum + n ;
	}
	else
	{
		Profit(n/2) ;
		Profit(n/3) ;
		Profit(n/4) ;
	}
}

int main()
{
	int n ;/**The variable to store the denominations initially present in the hand .*/
	cout << "Please enter the denominations you have .\n" ;
	cin >> n ;
	Profit(n) ;
	cout << Sum <<endl ;/**Displaying the result .*/
}
