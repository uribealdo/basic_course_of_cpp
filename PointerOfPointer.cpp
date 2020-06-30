#include<iostream>
using namespace std;
//pointer of pointer c++
int main(){
    int **A,**B, **C, m, n;
    int i,j;
    cout<<"Input rows: "; cin>>m;
    A=new int*[m];
    B=new int*[m];
    C=new int*[m];
    cout<<"Inpunt columns: "; cin>>n;
    //Matrix [A]
    for(i=0; i<m; i++){
        A[i]=new int[n];}
    for(i=0;i<m;i++){
        cout<<"A["<<i<<"]["<<i<<"]: ";
        for(j=0;j<n;j++){
            cin>>*(*(A+i)+j);}}
    //Matrix [B]
    for(i=0; i<m; i++){
    B[i]=new int[n];}    
    for(i=0;i<m;i++){
        cout<<"B["<<i<<"]["<<i<<"]: ";
        for(j=0;j<n;j++){
            cin>>*(*(B+i)+j);}}
    //[C]=[B]+[C]
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            *(*(C+i)+j)=*(*(A+i)+j)+*(*(B+i)+j);}}
    //Print [C]
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<*(*(C+i)+j)<<" ";}
            cout<<endl;
    }
    return 0;
}

