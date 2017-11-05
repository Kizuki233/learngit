#include <bits/stdc++.h>
using namespace std;

void e(int n){
	if(n>0){
		e(--n);
		printf("%d",n);
		e(--n);
	}
}



int main(){
   // int test;
   // int a;
   // a=3;
   // e(a);
   // cout<<endl;
   // char arr[7];
   //arr={'w','e','d','r','e'};
   //arr=<const_cast>"stefre";
   // char* p=arr;
   // <const_ca  st>*p="djfkd";
   char *a[]={"hello","world"};
   printf("%x\n",a[1]);
   // cout<<test<<endl;

   char x=56;
   x=x&5056;
   printf("%d %d\n",x,x );
	return 0;
}
