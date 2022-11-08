#include <iostream>
using namespace std;

int main() {
	int n,t;
	cin>>n>>t;
	int arr[n+1];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	arr[n]=t;//this is added so that at exiting the loop the program will check one last time if its possible to have this as answer.
	int i=0,j=0,sum=0,ans=0;
	while(i<n+1){
		if((sum+arr[i])<=t){
			sum+=arr[i];
			i++;
		}
		else{
			ans=max(ans,i-j);
			sum-=arr[j];
			j++;
		}
	}
	cout<<ans;
	return 0;
}
