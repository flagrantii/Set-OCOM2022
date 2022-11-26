#include<bits/stdc++.h>
using namespace std;

main(){
	int n,m;
	cin>>n;
	vector<int> vn(n);
	for(int i=0;i<n;i++){
		cin>>vn[i];
	}
	
	cin>>m;
	vector<int> vm(m);
	for(int i=0;i<m;i++){
		cin>>vm[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(vn[i]==vm[j]){
				cout<<vn[i]<<" ";
				break;		
			}
		}
	}
	cout<<"\n";
	
	/*for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(){
					
			}else break; 
		}
	}*/
	
	cout<<"\n";
	
	int i=0,j=0;
	while(i<n && j<m){
			if(vn[i]<vm[j]){
				cout<<vn[i++]<<" ";
			}
			else if(vm[j]<vn[i]){
				cout<<vm[j++]<<" ";
			}else{
				cout<<vm[j++]<<" ";
				i++;
			}
	}
	
}
