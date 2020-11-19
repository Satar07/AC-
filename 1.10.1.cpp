#include<iostream>
#include<algorithm>
using namespace std;

struct node{
	double data;
	int index;
	int no;
};node a[10001];

bool comp1(node x,node y){
	return x.data<y.data;
}

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i].no>>a[i].data,a[i].index=i;
	sort(a+1,a+1+n,comp1);
	cout<<a[m].no<<' '<<a[m].data;
}
