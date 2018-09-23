using namespace std;
int main()
 {
    int a,b,t;
    string n1,n2;
    cin>>t;
    for(int i=0;i<t;i++){
       cin>>n1;
       cin>>n2;
        a=n1[n1.size()-1]-'0';
        b=n2[n2.size()-1]-'0';
        if((a&1)!=(b&1)){
            cout<<((a&1)^(b&1))<<endl;
            }
        else{
             cout<< !((a*b)&1)<<endl;   
            }
    }
    return 0;
}
