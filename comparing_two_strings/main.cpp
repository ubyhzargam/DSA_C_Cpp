//
//  main.cpp
//  comparing_two_strings
//
//  Created by Uby H on 22/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    char str1[50],str2[50];
    cout<<" This code compares two strings and prints whether they are equal or not ";
    cout<<"Enter first string : "<<endl;
    cin>>str1;
    cout<<"Enter second string : "<<endl;
    cin>>str2;
    for(int i=0; i<50;i++)
    {
        if(str1[i]=='\0'&&str2[i]=='\0')
        {
            cout<<"The given strings are equal"<<endl;
            break;
        }
        else if((str1[i]=='\0'&&str2[i]!='\0')||(str1[i]!='\0'&&str2[i]=='\0')||(str1[i]!=str2[i]))
        {
            cout<<"The  given strings are not equal"<<endl;
            break;
        }
    }
    return 0;
}
