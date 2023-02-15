#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int num[]={10,2,15,20,35,46,85};

    int value,pos=-1,i;
    cout<<"Enter the value you want to search :";
    cin>>value;

    for (i=0;i<7;i++)
    {
        if(value==num[i])
        {
            pos= i+1;
            break;
        }
    }
    if(pos==-1)
    {
        cout<<"Item is not found";

    }else{
      cout<<"the value is found that position"<<pos;
    }

}
