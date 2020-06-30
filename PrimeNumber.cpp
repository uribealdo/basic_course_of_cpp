#include<iostream>
using namespace std;

main(){
    int numero, s=0;

    cout<<"Input number: "; cin>>numero;
    for(int i=1; i<numero+1;i++){
        if(numero%i==0){
            s+=1;
        }
    }
    if(s>2){
        cout<<"The number "<<numero<<" is not Prime"<<endl;
    }
    else{
        cout<<"The number "<<numero<<" is Prime"<<endl;
    }
    return 0;
}