#include <bits/stdc++.h>
using namespace std;
int res1,res2,n,d,jud,ans[1000001],tot,know[11][100001],cnt=1;
struct res{
	int res1,res2;
}res[1000001];
int main()
{
	scanf("%d %d",&n,&d);
	printf("%d.",res1=n/d);res2=n=n%d;
	if(!res1) cnt++;
	while(res1){
		res1/=10;cnt++;
	}
	while(1)
	{
		while(n&&n<d)
		{
			jud++;if(jud>1){
				if(know[res1=0][res2=n%d]) break;
				know[0][n%d]=1;res[tot].res1=0,res[tot].res2=n%d;ans[tot++]=0;
			}
			n=n*10;
		}
		res1=n/d;res2=n%d;n=res2;jud=0;
		if(know[res1][res2]) break;
		know[res1][res2]=1;res[tot].res1=res1,res[tot].res2=res2;
		//printf("%d",res1);
		ans[tot++]=res1;
		if(!n) break;
	}
	for(int i=0;i<tot;i++)
	{
		if(n&&res1==res[i].res1&&res2==res[i].res2){
			printf("(");cnt++;if(cnt%76==0) printf("\n");
		}
		printf("%d",ans[i]);cnt++;
		if(cnt%76==0) printf("\n");
	}
	if(n){
		printf(")");cnt++;if(cnt%76==0) printf("\n");
	}
	return 0;
}
