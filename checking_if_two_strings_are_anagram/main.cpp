//
//  main.cpp
//  checking_if_two_strings_are_anagram
//
//  Created by Uby H on 30/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    int H[26]={0};
    int i=0;
    char ch1[50],ch2[50];
    cout<<"Enter two lower case strings to check whether they are anagram or not : "<<endl;
    cin>>ch1;
    cin>>ch2;
    for(i=0;ch1[i]!=0;i++)
    {
        H[ch1[i]-97]+=1;
    }
    for(i=0;ch2[i]!=0;i++)
    {
        H[ch2[i]-97]-=1;
        if((H[ch2[i]-97])<0)
        {
            break;
        }
    }
    if(ch2[i]=='\0'&&ch1[i]=='\0')
        cout<<"The given strings are anagram in nature"<<endl;
    else
        cout<<"The given strings are not anagram in nature"<<endl;
    return 0;
}
