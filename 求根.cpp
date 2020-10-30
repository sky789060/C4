#include<bits/stdc++.h>
using namespace std;
double ans;
double a,b,c;
double delta;
double calculate(double x){
    return a*x*x*x+b*x+c;
	}
void solve(double l,double r,int x){
    double mid=(l+r)/2;
    double cnt=calculate(mid);
    if((x==1&&a>0)||(x==2&&a<0)){
		if(fabs(cnt)<=1e-6) {
	        ans=mid;
	        printf("%.6lf\n",ans);
	        return ;
	    	}
		if(cnt<0)
			solve(l,mid,x);
	    else
			solve(mid,r,x);
		}
    if((x==2&&a>0)||(x==1&&a<0)){
		if(fabs(cnt)<=1e-6) {
	        ans=mid;
	        printf("%.6lf\n",ans);
	        return ;
	    	}
		if(cnt>0)
			solve(l,mid,x);
	    else
			solve(mid,r,x);
		}
	}
int main(){
	cin>>a>>b>>c;
	delta=b*b-4*a*c;
	if(delta<0){
		cout<<""<<endl;
		return 0;
		}
	if(delta==0){
		ans=(0-b)/2*a;
		printf("%.6lf\n",ans);
		return 0;
		}
    if(delta>0){
		solve((0-b-sqrt(delta))/2*a-0.000001,(0-b-sqrt(delta))/2*a+0.000001,1);
		solve((0-b+sqrt(delta))/2*a-0.000001,(0-b+sqrt(delta))/2*a+0.000001,2);
		return 0;
		}
    return 0;
	} 
