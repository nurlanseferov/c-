#include <iostream>
using namespace std;

int main() {
  cout<<"ededive uygun supriz herfleri  tap\n ";
  int a,b,i;
   cout<<"ededivi daxil et\n";
  cin>>a;
  if(a>100){
  	for(i=1;i<6;i++){
  		cout<<"C\n";
	  }
  }
  else{
  	cout<<"\n";
  }
  if(a<100&&a>50){
  	for(i=1;i<5;i++){
  		cout<<"b\n";
	  }
  }
  else{
  	cout<<"\n";
  }
  if(a<50){
  	for(i=1;i<4;i++){
  		cout<<"a\n";
	  }
  }
  else{
  	cout<<"\n";
  }
}
