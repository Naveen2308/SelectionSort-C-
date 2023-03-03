#include<iostream>
using namespace std;
void swap(int a[],int x,int y){
    int temp;
    temp=a[x];
    a[x]=a[y];
    a[y]=temp;
}
void selsort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        swap(a,i,min);
        
    }
}
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
int main(){
    int n;
    int a[100];
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"your array is"<<endl;
    display(a,n);
    
    selsort(a,n);
    cout<<"your array after sorted  is"<<endl;
    display(a,n);

}