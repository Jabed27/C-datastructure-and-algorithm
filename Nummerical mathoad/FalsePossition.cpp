#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
double func(double x){  //false pos
  return x*x-4*x-10;
}
double err = 0.001;
double c;
int i = 0;
void falseposition(double a,double b){
 if(func(a)*func(b)>0){
    printf("Incorrect a and b");
    return;
 }///c = a -(func(a)*(b-a))/(func(b)-func(a))
 c = a;
  printf("Iteration \t\t C \t\t a \t\t b \t\t f(a) \t\t f(b) \t\t f(c)\n",i,c,a,b,func(a),func(b),func(c));
  while((b-a)>=err){
        i++;
    c = a -(func(a)*(b-a))/(func(b)-func(a));
    if(func(c)==0.0){
            cout<<i<<"\t\t"<<c<<"\t\t"<<a<<"\t\t"<<b<<"\t\t"<<func(a)<<"\t\t"<<func(b)<<"\t\t"<<func(c)<<endl;
        break;
    }
    else if(func(a)*func(c)>0){
      a = c;
        cout<<i<<"\t\t"<<c<<"\t\t"<<a<<"\t\t"<<b<<"\t\t"<<func(a)<<"\t\t"<<func(b)<<"\t\t"<<func(c)<<endl;
    }else{
       b=c;
       cout<<i<<"\t\t"<<c<<"\t\t"<<a<<"\t\t"<<b<<"\t\t"<<func(a)<<"\t\t"<<func(b)<<"\t\t"<<func(c)<<endl;
    }
  }

}
int main(){
  double a,b;
  cin>>a;
  cin>>b;
  printf("a = %lf\n",a);
  printf("b = %lf\n",b);

  falseposition(a,b);
  printf("The final correct root is = %lf ",c);

 return 0 ;
}
