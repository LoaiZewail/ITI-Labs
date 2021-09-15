#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;


int chessboard[10];
 int n;



int chess(int row, int col){

	 for(int i = 0; i <n; i++){
		if((chessboard[i] == col) || (abs(row - i) == abs(col - chessboard[i])))
			return 0;
	}
	return 1;
}

void print(){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(chessboard[i] != j)
				cout<<'.'<<" ";
			else
				cout<<'#'<<" ";
		}
		cout<<endl;
	}
	for(int j = 0; j < n; j++)
		cout<<chessboard[j]<<" ";
	cout<<"-------------------------------------"<<endl;
}


void Queen(){
	int i = 0;
	int j = 0;
	int count_num = 0;

	while(i < n){

		while(j < n){
			if(chess(i, j)){
				chessboard[i] = j;
				j = 0;
				 break;
			}
			else
				j++;
		}

		if(chessboard[i] == INT_MAX){
			if(i == 0)
				 break;
			else{

				i--;
				j = chessboard[i] + 1;
				chessboard[i] = INT_MAX;
				continue;
			}
		}

		if(i == n - 1){
			print();
			count_num++;
			j = chessboard[i] + 1;
			chessboard[i] = INT_MAX;
			continue;
		}
		i++;
	}
	cout<<count_num<<endl;
}


void init(){
	int *p;
	for(p = chessboard; p < chessboard + n; p++)
		*p = INT_MAX;
}

int main(){
    scanf("%d", &n);
    init();

    Queen();
    return 0;
}
