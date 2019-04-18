/*
Print the pattern


Input :
N=4 
Output :
4444444 
4333334 
4322234 
4321234 
4322234 
4333334
4444444

*/

#include<bits/stdc++.h>

using namespace std;

int findMax(int a,int b){
	return a>b?a:b;
}

int main(){
	
	int n,m;
	
	printf("Enter n : ");
	scanf("%d",&n);
	m = (2*n) - 1; 
	
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			printf("%d",1+findMax(abs(n-1-i),abs(n-1-j)));
						
			
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
