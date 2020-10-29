#include<iostream>
using namespace std;

int room[200],dict[1010];
int M,N,look;

bool if_found(int word){             //查找是否已经出现在内存中
	if(dict[word]==1)return true;
	return false;
}

int turn(int Fword,int Bword){       //检测是否内存已经满了；满了就换，没有就在dictionary里面对应位置改ture
	if(look<=M-1){
		dict[Bword]=1;
	}
	else if(look>=M){
		dict[Fword]=0;
		dict[Bword]=1;
	}
	look++;
	return 1;
	
}

int main(){
	cin>>M>>N;
	int j=1,now,temp;
	for(int i=1;i<=N;i++){
		j=(j==M+1)?1:j;     //j的值在1到M里面循环
		cin>>now;
		if (if_found(now)) continue;
		else{
			temp=room[j];
			room[j]=now;
			turn(temp,room[j]);
			j++;        //注意语句在循环体里面
		}
	}
	cout<<look;
}
