#include <stdio.h>

int print_times_table(int n);
int main(){

    print_times_table(15);

    return 0;

}


int print_times_table(int n){

    if(n<=15 && n>=0){

    	for (int col=0; col<=n; col++){

    		// INITIAL COLUMN

    		for (int row=0; row<=n; row++) {

    			printf("%d \t", col*row);

    			if(row==n){

    				printf("\n");

    			}

    		}	

    	}

    }

    

    return 0;

}

