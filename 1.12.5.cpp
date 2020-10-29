#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

char exmp[300],txt[300];

int main(){
	int cc=0,fir=1,firnum,i=0;
	cin>>exmp;
	cin.get();
	strlwr(exmp);
	do{
		cin>>txt;
		strlwr(txt);
		if(strcmp(exmp,txt)==0){
			cc++;
			if(fir==1)firnum=i,fir=0;
		}
		i++;
	}while(getchar()!='\n');
	if(cc!=0)cout<<cc<<' '<<firnum;
	else cout<<-1;
}
