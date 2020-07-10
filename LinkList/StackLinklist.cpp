#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*link;

};
struct Node*top = NULL;
void push(int x){
           struct Node*temp = (struct Node*)malloc(sizeof(struct Node));
           temp->data = x;
           temp->link = top;
           top = temp;
}
void display(){



}
int main()
{
    printf("1. push ");
    printf("2. pop ");
    printf("3. display ");
    printf("4. exit ");
    cout<<"Enter your choice"<<endl;
    int n;
    cin>>n;
    if(n == 1){
            int k;
            cout<<" how many "<<endl;
              cin>>k;
            for(int i = 1;i<k;i++){
                push(i);
            }

    }
    else if(n == 2){
        pop();
    }else if(n == 3){
          display();
    }
    else{
        exit();
    }
}
