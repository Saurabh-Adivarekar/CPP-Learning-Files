	#include<bits/stdc++.h>
using namespace std;

int main(){

   int t;
   cin>>t;
   cout<<endl;
   while(t--){
   int a,fact=1;
    cin>>a;
    if(a < 100){
    while(a != 0){
        fact = fact * a;
        a--;
    }
    cout<<fact<<endl;
   }}
}



// #include<bits/stdc++.h>

// using namespace std;


// int main(){

//    int a,c,ck=0,n,i,cc,dd,rem=0,rev=0,j=1;
//    cin>>n;
//    for(i=0; i<n; i++){
//     cin>>a;
//     while(a!=0){
//         rem = a%10;
//         rev = rev*10 + rem;
//         a/=10;
//     }
//     cout<<rev<<endl;
//     rev=0;
//    }
// }


	
	// int t;
	// cin>>t;
	// while(t--){
	// 	int a,digit=0,sum=0;
	// 	cin>>a;
	// 	while(a>0){
	// 		digit = a%10;
	// 		sum = sum + digit;
	// 		a = a / 10;
	// 	}
	// 	cout<<sum<<endl;
	// }


	// int b=6;
	// int c=1;
	// cout<<((b>a)||(b>c));
	// if(a%2==0){
	// 	cout<<"number is even";
	// }
	// else{
	// 	cout<<"number is odd";
	// }


	// while(condition){
	// 	iteration
	// }

	// while(i<=10){
	// 	cout<<"hello	" <<i <<endl;
	// 	i++;
	// }

	// for (init ; condition ; operation){}

		// for (int i=1;i<=10;i++){
		// 	cout<<"hello	" << i <<endl;
		// }
	// int t;
	// cin>>t;
	// // for(int test=1;test<=t;++test){
	// 	while(t--){
	// 	int n;
	// 	cin>>n;
	// 	for(int i = 1;i<=n;++i){
	// 		for (int j=1;j<=i;++j){
	// 		cout<<"*";
	// 		}
	// 	cout<<endl;
	// 	}
	// }


// int t;
// cin>>t;
// while(t--){
// 	int n,m;
// 	cin>>n>>m;
// 	cout<<n+m<<endl;
// }}

	// for(int i=1;i<=n;++i){
	// 	for (int j=1;j<=i;++j){
	// 		cout<<"*";
	// 	}
	//  cout<<endl;
	// }
// }
// }
// 

//   int 10^9
// 	 long int 10^12
//   long long int 10^18
