#include <iostream>
#define MAX 250

using namespace std;
void factorial(short);
int main() {
    short t,n;
    cin>>t;
    for(short i=0;i<t;i++){
        cin>>n;
        factorial(n);
    }
	return 0;
}

void factorial(short num){
short data[MAX];
short dataSize=1;
short carry;
data[0]=1;
for(short i=2;i<=num;i++){
    carry=0;
    for(short j=0;j<dataSize;j++){
        short prod=i*data[j]+carry ;
            data[j]=prod%10;
            carry=prod/10;
    }
    while(carry){
        data[dataSize]=carry%10;
        carry=carry/10;
        dataSize++;
    }
}
for(short k=dataSize-1;k>=0;k--)
{
    cout<< data[k];
}
cout<<endl;
}
