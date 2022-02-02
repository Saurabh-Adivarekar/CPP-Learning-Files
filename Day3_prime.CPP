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
	
// 	use of continue statement is that continue just skip only  ongoing iteration and just to next iteration 
// 	use of break statement is that break statement stop the execution of whole for loop and jump to the next line of the code
}
