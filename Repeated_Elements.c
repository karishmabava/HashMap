#include <stdio.h>
#include <stdlib.h>

int repeatedNTimes(int* A, int ASize) {
    int hash_tab[10000] = {0};
    int num = 0;
    for(int i=0; i<ASize; i++)
    {
        num = A[i];
        if(hash_tab[num] == -1)
            return num;
        else
            hash_tab[num] = -1;
    }
return num;
}



int main(){

	int A[] = {1,2,4,5,3,7,2,8,2,9};
	
	int ASize = sizeof(A)/sizeof(A[0]);
	for (int i =0;i<ASize;i++)
		printf("%d",A[i]);
	printf("\n");
	int repeated_num = repeatedNTimes(A,ASize);  

    printf("The repeated number is: %d\n",repeated_num);

return 0;

}
