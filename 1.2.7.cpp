#include<iostream>
#include<cstdio>
using namespace std;

int a[2000],ro[100000];   //room


int main(){
	int m,n,time=1,cc=0,first=1;
	cin>>m>>n;
	int temp;
	for(int i=1;i<=n;i++){
		cin>>temp;
		
		if(time==m+1){
			first=0;           //�ڴ����ˣ��Ժ��ظ��Ķ�Ҫɾȥǰ��һ�� 
			time=1;
		}
		
		if(first==0){
			a[ro[time]]=0;     //ɾ���ڴ��е��Ѿ����ҹ��ļ�¼ 
		}
		
		if(a[temp]==0){        //�ж�û�г��ֹ� 
			a[temp]=1;
			ro[time]=temp;     //ģ���ڴ� 
			cc++;
			time++;
		}
		
	}
	cout<<cc;
}
