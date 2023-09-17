  #include<iostream>
using namespace std;
int length(char *a){
	int i=0;
	int count=0;
	while(i!='\0'){
		count ++;
		i++;
	}
	return count;
}

void append(char *a,char*b){
	int i=length(a);
	int j=0;
	int blen=length(b);
	while(j<=blen){
		a[i]=b[j];
		i++;
		j++;
	}
}
int main(){
	int a[100],b[100];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	
	return 0;
}