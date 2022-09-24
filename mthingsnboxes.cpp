#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int test;
	cin>>test;
	while(test--){
		long long int n,t,b,tb,rb;//t->things,b->box
		cin>>n>>t>>b;
		tb=t/(b+1),rb=t%(b+1);//tb->filling equal no. of a things in a box,rb->remaining things after filling boxes equally
		for(int i=0;i<(b+1);i++){
			if(rb){
				int temp=tb;
				while(temp--)	cout<<"R";
				if(i!=b)	cout<<"RB";
				rb--;
			}
			else{
				int temp=tb;
				while(temp--)	cout<<"R";
				if(i!=b)	cout<<"B";
			}
		}
		cout<<"\n";
	}
	return 0;
}
