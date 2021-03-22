#include<bits/stdc++.h>
using namespace std;



int main(){
	int T;
	cin>>T;
	while(T--){
		int n,x;
		cin>>n;
		int j=0,k=n-1;
		vector<int> v;
		for(int i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
		}
		for(int i=0;i<n;i++){
			if(i%2==0){
				cout<<v[j]<<" ";
				j++;
			}
			else{
				cout<<v[k]<<" ";
				k--;
			}
		}
		cout<<endl;
	}
	
	return 0;
}
