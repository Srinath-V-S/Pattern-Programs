/*
Program to check if matrix is upper triangular
Given a square matrix and the task is to check the matrix is in upper triangular form or not. 
A square matrix is called upper triangular if all the entries below the main diagonal are zero.

*/



#include<bits/stdc++.h>
using namespace std;
#define N 4

bool isUpperTriangularMatrix(int mat[N][N]){
	
		for(int i=1;i<N;i++){
			for(int j=0;j<i;j++){
				if(mat[i][j]!=0)
					return false;
			}
		}
		
		return true;
}


int main(){
	
	
	int mat[4][4] = {	
		{1,2,3,4},
		{0,3,4,5},
		{0,0,5,5},
		{0,0,0,9}};
		
		
		
		bool isUpperTriangular = isUpperTriangularMatrix(mat);
		if(isUpperTriangular){
			cout << "Given Matrix is Upper Triangular Matrix";
		}
		else{
			cout << "Given Matrix is not an Upper Triangular Matrix";
		}
		
		
		return 0;
}
