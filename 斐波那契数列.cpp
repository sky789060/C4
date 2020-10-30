#include<bits/stdc++.h>
using namespace std;
int n;
void dg(int i,int j,int k){
	if(k==n){
		cout<<"斐波那契数列第"<<k<<"个数为："<<j<<endl;
		return;
		}
	int *p=new int;
	*p=i+j;
	dg(j,*p,k+1);
	delete p;
	return;
	}
int main(){
	cout<<"请输入n：";
	while(cin>>n&&n>0){
		if(n==1||n==2){
			cout<<"斐波那契数列第"<<n<<"个数为：";
			cout<<1<<endl;
			cout<<"请输入n：";
			continue;
			}
		dg(1,1,2);
		cout<<"请输入n：";
		}
	return 0;
	}
