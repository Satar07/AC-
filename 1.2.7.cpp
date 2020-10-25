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
			first=0;           //内存满了，以后不重复的都要删去前面一个 
			time=1;
		}
		
		if(first==0){
			a[ro[time]]=0;     //删除内存中的已经查找过的记录 
		}
		
		if(a[temp]==0){        //判断没有出现过 
			a[temp]=1;
			ro[time]=temp;     //模拟内存 
			cc++;
			time++;
		}
		
	}
	cout<<cc;
}
