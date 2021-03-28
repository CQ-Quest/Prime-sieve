//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main(){
//	ios::sync_with_stdio(0);
//	ll n,k=0;
//	cin>>n;
//	for(ll i=1;i<=n;i++)
//	for(ll j=1;j<=n;j++)
//	  k+=__gcd(i,j);
//	  cout<<k<<endl;
//	  return 0;
//}

//Å·À­Èû 
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const int maxn=100100;
//int prime[maxn],cnt=0;
//bool cheak[maxn];
//void isP(int n){
//	for(int i=2;i<=n;i++){
//		if(!cheak[i]) prime[++cnt]=i;
//		for(int j=1;j<=cnt&&i*prime[j]<=n;j++){
//			cheak[i*prime[j]]=true;
//			if(i%prime[j]==0) break;
//		}
//	}
//}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=100100;
ll ans;
int cnt=0,n;
int phi[maxn],pri[maxn],vis[maxn];
ll sum[maxn];
void isP(int n){
	phi[1]=1;
	for(int i=2;i<=n;i++){
		if(!vis[i]) {
		pri[++cnt]=i;
		phi[i]=i-1;
	}
	for(int j=1;j<=cnt&&i*pri[j]<=n;j++){
		vis[i*pri[j]]=1;
		if(i%pri[j]==0){
			phi[i*pri[j]]=phi[i]*pri[j];
			break;
		}
		phi[i*pri[j]]=phi[i]*(pri[j]-1);
	}
}
     for(int i=1;i<=n;i++)
     sum[i]=sum[i-1]+phi[i];
}
int main(){
	ios::sync_with_stdio(0);
	cin>>n;
	isP(n);
	for(int i=1;i<=n;i++)
	ans+=(2*sum[n/i]-1)*i;
	cout<<ans<<endl;
	return 0;
}
