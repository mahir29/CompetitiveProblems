#include<bits/stdc++.h>
using namespace std;



int main(){
	srand(time(0));
	int T;
	cin>>T;
	while(T--){
		int r;
		for(int i=1;i<=2000;i++){
			cout<<i*i<<endl;
			cin>>r;
			if(r==1)
				break;
		}
	}
	
	return 0;
}
