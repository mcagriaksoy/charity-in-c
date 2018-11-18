//Author: Mehmet Cagri Aksoy 

#include <stdio.h>
#include <stdlib.h> 
#define SIZE	10

int arr[SIZE];
int random_num;
int i,x,truth_rate;
 
int main() {
    for(i=0; i<SIZE ;i++){
    		
    		random_num = rand()%10;
            arr[i]=random_num;
            printf("%d\n", arr[i]);    
            }
            
	truth_rate = 0;
		
    for(i=0; i<SIZE ;i++){
	 	printf("Guess %dth number:",i);
	 	scanf("%d", &x);
	 	if(x == arr[i]){
		 	truth_rate++;
		 	}
		 }

	 printf("Game over\nSuccess in game result: %d %%",truth_rate*10);
scanf("%d", &i);	 	 
}

