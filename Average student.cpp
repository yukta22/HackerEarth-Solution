#include<bits/stdc++.h>
#include<iostream>
#define lli               long long int
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
const int MAX_CHAR = 26;
const long long mod=1e9+7;
using namespace std;

// int gcd(lli a, lli b){

//     if(b == 0){
//         return a;
//     }

//     gcd(b,a%b);
// }
int divisiors[1000005];

void div(){
	for(int i = 1 ; i < 1000005 ; i++){
		for(int j = i ; j < 1000005 ; j+=i){
			divisiors[j]++;
		}
	}
}

 
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	div();
	int n;
	cin>>n;
	int count = 0 ;
	

	for (int i = 1; i <= n; ++i)	{
		int m ; 
		cin>>m;
		if(divisiors[m]==1)count--;

		else if(divisiors[m]==2)count++;

		else if(divisiors[m]==3)count++;

		else if(divisiors[m]==4)count--;

	}

	cout<<count;

	return 0;
}
