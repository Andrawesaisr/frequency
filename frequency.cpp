// frequency.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include<string>
#include <cmath>
#include<algorithm>
#include<vector>
#include<deque>
#include<set>
#include<map>
#include<bitset>
using namespace std;
int main()
{
	string s;
	cin >> s;
	vector<int>fre(123, 0);
	for (int i = 0; i < s.size(); i++) {
		int x = s[i];//s[i]=a then x=a and fre[a] =1   
		//a b c d e
	 //  {1,0,0,0,0}
		fre[x]++;
	}
	for (int i = 0; i < 123; i++) {
		if (fre[i]) {
			cout << char(i) << " " << fre[i] << endl;
		}

	}
}
