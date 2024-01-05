//
//  main.cpp
//  validating_a_string
//
//  Created by Uby H on 22/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    char str[50];
    int c=0;
    cout<<"Enter a string to validate it : "<<endl;
    cin>>str;
    for(int i=0;i<50;i++)
    {
        if(str[i]=='\0')
            break;
        if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)||(str[i]>=48&&str[i]<=57))
            continue;
        else
        {
            c++;
            break;
        }
    }
    if(c>0)
        cout<<"The string given is not valid "<<endl;
    else
        cout<<"The given string is valid "<<endl;
    return 0;
}
