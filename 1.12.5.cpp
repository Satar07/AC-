#include<iostream>
#include<cstdio>
using namespace std;

char a[500],ep[100],c;

int main(){
	int first=1,time=0,cc=0,fir_time=0;
	cin>>ep;
	strlwr(ep);
	getchar();
	do{
		cin>>a;
		strlwr(a);
		if(strcmp(ep,a)==0){
			if(first){
				first=0;
				fir_time=time;
			}
			cc++;
		}
		time++;
		c=getchar();
	}while(c!='\n');
	if(cc!=0)cout<<cc<<" "<<fir_time;
	else cout<<"-1";
}
