#include<iostream>
using namespace std;

struct node{
	char no[11];
	int age;
};
node a[1000];
bool cmp(int a,int b){
	if(a<60 and b>=60)return true;
	else if(a>=60 and b>=60)return a<b;
	else return false;
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i].no>>a[i].age;
	for(int i=n;i>=1;i--)
		for(int j=n-1;j>=1+(n-i);j--){
			if(cmp(a[j].age,a[j+1].age))swap(a[j],a[j+1]);
		}
	for(int i=1;i<=n;i++)
		cout<<a[i].no<<endl;
}
