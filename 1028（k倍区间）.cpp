#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,a[100001],sum[100001],know[100001]={1},ans;
int main()
{	
	while(~scanf("%lld",&n)){
		ans=0;memset(know,0,sizeof(know));know[0]=1;
		for(int i=0;i<n;i++) scanf("%lld",&a[i]);
		scanf("%lld",&k);
		for(int i=0;i<n;i++){
			if(i) sum[i]=sum[i-1]+a[i];
			else sum[i]=a[i];
		}
		for(int i=0;i<n;i++){
			ans+=know[sum[i]%k]++;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
