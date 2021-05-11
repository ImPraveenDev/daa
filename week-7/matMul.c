#include <stdio.h>
#include <limits.h>
int matCMul(int p[], int i, int j){
    if (i == j)
        return 0;
    int k;
    int min = INT_MAX;
    int count=0;
	for (k = i; k < j; k++){
        	count = matCMul(p, i, k)+ matCMul(p, k + 1, j)+ p[i - 1] * p[k] * p[j];
        	if (count < min)
            		min = count;
    	}
 return min;
}

int main(){
	printf("Enter the number ::");
	int n;	scanf("%d",&n);	
	int a[n];
	printf("Enter the sequence of matrices ::");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Minimum number of multiplications is %d ",matCMul(a, 1, n - 1));
        return 0;
}
