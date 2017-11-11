#include <iostream>
using namespace std;
long long int LPF(long long int n){
	long long int lar,d=2;
	while(n!=1){
		if(n%d==0){
			lar=d;
			while(n%d==0)
				n/=d;
		}
		d++;
	}
	return lar;
}
int main() {
	long long int n;
	cin>>n;
	long long int larPrimeFactor=LPF(n);
	cout<<larPrimeFactor<<endl;
	return 0;
}

