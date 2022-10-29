#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
     
long long int bsqrt(long long int x)
{
    if (x == 0 || x == 1)
        return x;
    lli l=1,r=x,mid,ans;
    long long unsigned int sq;
    while (l<r) {
        mid=(l+r+1)/2;
        sq=x/mid;
        if(sq<mid){
       	r=mid-1;
        }
        else if(sq==mid)	return mid;
        else	l=mid;
    }
    return l;
}
int main() {
	lli test,l,r;
	cin>>test;
 	while(test--){
		cin>>l>>r;
		lli suml=0,sumr=0,sl,sr;
		sl=bsqrt(l),sr=bsqrt(r);//sl=sqrt(1.0L*l),sr=sqrt(1.0L*r);
    /*Can use the comment out statement too it helps in returning accurate answer even for 10^18 no.s 
    which normal sqrt(no.) doesn't return*/
		suml=(sl-1)*3+((l-(sl*sl))/sl)+1-(l%sl==0);
  		sumr=(sr-1)*3+((r-(sr*sr))/sr)+1;
   		cout<<sumr-suml<<"\n";
   	}
   	return 0;
}
