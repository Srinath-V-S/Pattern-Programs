/*
Program to check if matrix is lower triangular
Given a square matrix and the task is to check the matrix is in lower triangular form or not. 
A square matrix is called lower triangular if all the entries above the main diagonal are zero.

*/



#include<bits/stdc++.h>
using namespace std;
#define N 4

bool isLowerTriangularMatrix(int mat[N][N]){
	
		for(int i=0;i<N;i++){
			for(int j=i+1;j<N;j++){
				if(mat[i][j]!=0)
					return false;
			}
		}
		
		return true;
}


int main(){
	
	
	int mat[4][4] = {	
		{1,0,0,0},
		{9,3,0,0},
		{9,9,5,0},
		{9,9,0,0}};
		
		
		
		bool isLowerTriangular = isLowerTriangularMatrix(mat);
		if(isLowerTriangular){
			cout << "Given Matrix is Lower Triangular Matrix";
		}
		else{
			cout << "Given Matrix is not an Lower Triangular Matrix";
		}
		
		
		return 0;
}
