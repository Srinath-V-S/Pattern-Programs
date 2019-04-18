/*
Given a 2D array, print it in spiral form. See the following examples.
Input:
        1    2   3   4
        5    6   7   8
        9   10  11  12
        13  14  15  16
Output: 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
10 11 7 6 5 9 13 14 15 16 12 8 4 3 2 1 => reverse the spiral form to get reverse spiral output



Input:
        1   2   3   4  5   6
        7   8   9  10  11  12
        13  14  15 16  17  18
Output: 
1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11

*/

#include<bits/stdc++.h>
using namespace std;
#define R 3
#define C 3

void spiralOrder(int m,int n, int a[R][C]){
	
	int k=0,l=0,i;
	/* k - row starting index 
	 l - row starting index
	 m - row ending index
	 n - col ending index
	 i - iterator
	*/
	/* print first row then last column the last row and first column and iterate...*/
	
	while( k<m && l<n){
		
		// print first row
		for(i=l;i<n;i++){
			cout << a[k][i] << " ";
		}
		// go to next row
		k++;
		
		for(i=k;i<m;i++){
			cout<< a[i][n-1] << " ";  // n-1 to obtain last column
		}
		n--; // to use last but before column
		
		
		if(k<m){
			//print last row
			for(i=n-1;i>=l;i--){
				cout << a[m-1][i] << " ";
			}
			m--;
		}
		
		if(l<n){
			//print first column
			
			for(i=m-1;i>=k;i--){
				cout << a[i][l] << " ";
			}
			l++;
		}
	}
	
	
}


int main(){
	
	
	int mat[R][C] = { {1,2,3},
					   {7,8,9},
					   {16,17,18}
	};
	
	
	spiralOrder(R,C,mat);
}
