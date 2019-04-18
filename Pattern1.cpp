/*

Print the Pattern 3 4 33 34 43 44 333 334.....

works for every pair of single digit adjacent numbers

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int pattern[10000],i,index = 1;
	
	int n;
	pattern[0] = 3;  
	pattern[1] = 4;
	cout << "Enter n";
	cin >> n;
	for(i=0;i<n;i++){
		pattern[++index] = (pattern[i] * 10) + 3; // 33 = 3 * 10 + 3 ,43 = 4*10 + 3, 333 = 33 * 10 + 3, .....
		pattern[++index] = (pattern[i] * 10) + 4; // 34 = 3 * 10 + 4, 44 = 4*10 + 4, 334 = 33 * 10 + 4 .....
	}
	
	
	cout << pattern[0] << "\n" << pattern[1] << "\n";
	
	for(int j=2;j<n;j++){
		cout << pattern[j] << "\n";
	}
	
	return 0;
	
}
