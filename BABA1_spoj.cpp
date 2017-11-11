#include<bits/stdc++.h>
using namespace std;
bool isRightAngleTriangle(double h,double b1,double b2){
	if(abs(h - sqrt(b1*b1 + b2*b2))<0.00001)
		return true;
	else
		return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long double hy,base,height,area;
		cin>>hy>>area;
		base=(sqrt(hy*hy+4*area) + sqrt(hy*hy-4*area))/2;
		height=(sqrt(hy*hy+4*area) - sqrt(hy*hy-4*area))/2;
		//cout<<base<<" "<<height<<endl;
		bool flag=isRightAngleTriangle(hy,base,height);
		//cout<<flag<<endl;
		if(flag){
			if(base>height)
				swap(base,height);
			// cout<<base<<" "<<height<<" "<<hy<<endl;
			printf("%.6Lf %.6Lf %.6Lf\n",base,height,hy);
		}
		else
			cout<<"-1"<<endl;
	}
	return 0;
}