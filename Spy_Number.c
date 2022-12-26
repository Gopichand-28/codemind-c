#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	int l=0;
	int u=1;
	while (a>0){
		int k=a%10;
		 l=k+l;
		 u=u*k;
		 a=a/10;
	}
	if (l==u){
		cout<<"Spy Number"<<endl;
	}
	else if(l!=u){
		cout<<"Not Spy Number"<<endl;
	}
}