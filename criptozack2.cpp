#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main();
class data {
    string s;
public:
    void setdata() {
        cout<<"enter the your data="<<endl;
        cin>>s;
    }
    void showdata()
    {
        cout<<s<<endl;
    }

};
static data d;
void boss()
{
    string a2;
    cout<<"password is right"<<endl;
    cout<<"enter any command $ ";
    cin>>a2;
    if(a2=="setdata")
    {
        cout<<"     |~CRIPTO_ZACK |"<<endl;
        d.setdata();
        cout<<"your data is saved"<<endl;
        clrscr();
        boss();
    }
    if(a2=="showdata")
    {
        cout<<"     |~CRIPTO_ZACK |"<<endl;
        cout<<"this your saved data"<<endl;
        d.showdata();
        boss();
    }
    if(a2=="clear")
    {
     clrscr();
     boss();
    }
    if(a2=="back")
    {
    clrscr();
    main();
    }

    else {
        clrscr();
        main();
    }

    main();
}


int jack() {
    static int a=0;
    a++;
    return a;
}
int main()
{
    string s;
    cout<<"|---------------------------------|"<<endl;
    cout<<"|  |---------------------------|  |"<<endl;
    cout<<"|  |     [ ~CRIPTO_ZACK~ ]     |  |"<<endl;
    cout<<"|  |---------------------------|  |"<<endl;
    cout<<"|---------------------------------|"<<endl;
    cout<<endl<<endl;
    cout<<"you have 3 attempt"<<endl;
    cout<<"enter the passowd=>"<<endl;
    cin>>s;
    if(s=="jack")
    {
       boss();
    
    }

    else {
        clrscr();
        int k=jack();
        cout<<"   worng attempt password=> ["<<k<<"]"<<endl;
        if(k==3) {
            cout<<"attempt over"<<endl;
            return 0;
        }
        main();
    }
    return 0;
}