#include "main.h"

/**
* print_times_table - Entry point
* @n: input
* Return: Always 0 (Success)
*/
int main()
{
	print_times_table(15);
	return 0;
}

int print_times_table(int n){
	if(n<=15 && n>=0){
		for (int col=0; col<=n; col++){
			for  (int row=0; row<=n; row++) {
			print("% \t", col*row);
			if(row==n){
				printf("\n");
			}
		}
	}
}
return 0;
}
