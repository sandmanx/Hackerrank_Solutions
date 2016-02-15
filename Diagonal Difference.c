#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d",&n);
	int i,j,k,l;
	long long int sum1=0,sum2=0,ans;
	long long int arr[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%lld",&arr[i][j]);
	for(i=0;i<n;i++)
		sum1 = sum1 + arr[i][i];
	for(i=(n-1);i>=0;i--)
		sum2 = sum2 + arr[i][n-1-i];
	if(sum1>sum2)
		ans = sum1-sum2;
	else
		ans = sum2-sum1;
	printf("%lld\n",ans);
	return 0;
}
