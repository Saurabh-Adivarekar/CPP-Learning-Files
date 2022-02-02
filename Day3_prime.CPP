//  this code gives prime numbers from users range
#include<bits/stdc++.h>
using namespace std;
int main(){
 
 	int a,b,num;
 	cin>>a>>b;
 	for(int num=a;num<=b;num++){
 		int i;
 		for(i=2;i<num;i++ ){
 			if(num%i==0){
 				break;
	 		}
	 	}
 		if(i==num)
 			{
 				cout<<num<<endl;

 			}
 	}
}
