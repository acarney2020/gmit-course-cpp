#include <iostream>

using namespace std;
#include "function.h"


int main()

{


const int ARRAYSIZE=6;
int x[ARRAYSIZE];
int i=0;

int index=0;
std::cout<<"/************************"<<std::endl;
std::cout<<"* Enter 6 numbers   /"<<std::endl;
while(index<ARRAYSIZE){

    int temp;
    std::cin>>temp;
    //check value
    if((temp>0)&&(temp<100)){
        x[index]=temp;
        index++;
    }else{
        std::cout<<"The user has entered wrong value"<<temp<<"<0 or >100at index "<<index<<std::endl;

    }
}
for(i=0;i<ARRAYSIZE;++i){
    std::cout<<x[i]<<" "<<std::endl;
memlocate(&x[i]);
passbyvalue(x[i]);
    std::cout<<&x[i]<<" = This is the Memory location"<<std::endl;
    std::cout<<x[i]<<" = This is the Value"<<std::endl;
}

{
int Scalar;
cout<< "Please enter a scalar value"<<endl;
cin>>Scalar;


int y[ARRAYSIZE];

memlocate(&x[i]);
Passbyref(&y[i]);
Passbyref2(&Scalar);




for(int i=0;i<ARRAYSIZE;++i){
y[i]=x[i] * Scalar;

    std::cout<<y[i]<<" equals the new scale value"<<std::endl;
    std::cout<<&y[i]<<" equals the memory location "<<std::endl;
}


}

char february_xmas_tree[1][2] = {{'X','O'}};

    cout<< "     "<<february_xmas_tree[0][0]<<endl;
    cout<< "    "<<february_xmas_tree[0][0]<<february_xmas_tree[0][0]<<february_xmas_tree[0][0]<<endl;
    cout<< "   "<<february_xmas_tree[0][0]<<february_xmas_tree[0][1]<<february_xmas_tree[0][0]<<february_xmas_tree[0][0]<<february_xmas_tree[0][0]<<endl;
    cout<< "  "<<february_xmas_tree[0][0]<<february_xmas_tree[0][1]<<february_xmas_tree[0][0]<<february_xmas_tree[0][0]<<february_xmas_tree[0][1]<<february_xmas_tree[0][0]<<february_xmas_tree[0][0]<<endl;
    cout<< " "<<february_xmas_tree[0][0]<<february_xmas_tree[0][0]<<february_xmas_tree[0][0]<<february_xmas_tree[0][0]<<february_xmas_tree[0][0]<<february_xmas_tree[0][0]<<february_xmas_tree[0][0]<<february_xmas_tree[0][0]<<february_xmas_tree[0][0]<<endl;
    cout<< "     "<<february_xmas_tree[0][0]<<endl;
    cout<< "     "<<february_xmas_tree[0][0]<<endl;



}

