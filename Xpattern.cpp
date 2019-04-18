/*

Given a string of odd length, print the string X format.
Input: 12345
Output:
1       5
  2   4
    3
  2   4
1       5 	

*/


#include<bits/stdc++.h>
using namespace std;


int main(){
	
int i,j;
string str = "Samples";
int len = str.length();

for(int i=0,j=len-1;i<=len,j>=0;i++,j--){
	
	
	if(i<j){	
		// print i spaces
		for(int x = 0; x<i;x++){
			cout << " ";
		}
		// print ith character
		
		cout << str[i];
		
		// print j-i-1 spaces
		for(int x = 0 ; x < j-i-1; x++){
			cout << " ";
		}
		// print jth character
		cout << str[j] <<endl;
		
	}	
	
	
	if(i==j){
		
		// print i spaces
		for(int x = 0; x<i;x++){
			cout << " ";
		}
		// print middle characrter
		cout<<str[i] << endl;
		
	}
	
	
	if(i>j){
		// print j spaces
		
		for(int x = j-1; x>=0;x--){
			cout << " ";
		}
		
		// print jth character
		
		cout << str[j];
		
		// print i-j-1 spaces
		
		for(int x = 0; x<i-j-1;x++){
			cout << " ";
		}
		
		// print ith character
		
		cout << str[i] << endl;
		
		
	
	}	

}

	return 0;
	
}
