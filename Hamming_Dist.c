#include <stdio.h>
#include <stdlib.h>


int hammingDistance(int x, int y) {
    int count =0;
    int n = x ^ y;
    
    while(n!=0){
        n = n&(n-1);
        count +=1;
    }
    return count;
}


int main(){

	int x = 2;
	int y = 4;

	printf("The input numbers are: x = %d and y = %d\n",x,y);

	int dist = hammingDistance(x,y);

	printf("The Hamming Distance is %d\n",dist);

return 0;

}
