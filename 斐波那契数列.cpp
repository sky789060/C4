#include<bits/stdc++.h>
using namespace std;
int n;
void dg(int i,int j,int k){
	if(k==n){
		cout<<"쳲��������е�"<<k<<"����Ϊ��"<<j<<endl;
		return;
		}
	int *p=new int;
	*p=i+j;
	dg(j,*p,k+1);
	delete p;
	return;
	}
int main(){
	cout<<"������n��";
	while(cin>>n&&n>0){
		if(n==1||n==2){
			cout<<"쳲��������е�"<<n<<"����Ϊ��";
			cout<<1<<endl;
			cout<<"������n��";
			continue;
			}
		dg(1,1,2);
		cout<<"������n��";
		}
	return 0;
	}
