#include <iostream>

using namespace std;

int main(){
    int soma=0;
    int m[5][5];
    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"\n MI["<<i<<"]["<<j<<"]= ";
            cin>>m[i][j];
        }
    }
    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        soma=soma+m[i][j];
    }
    }
    cout<<soma;
    return 0;
}
