#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[20];
    int n,x,v;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>x;
    a[i]=x;
}
for(int u=n-1;u>0;u--){
    for(int j=0;j<u;j++){
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }

}
        for(int v=0;v<n;v++){

        cout<<a[v];
    }


return 0;
}



