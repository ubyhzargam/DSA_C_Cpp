//
//  main.cpp
//  palindrome_string
//
//  Created by Uby H on 22/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    char str[50];
    cout<<"Enter a string to find out whether it is palindrome or not : "<<endl;
    cin>>str;
    int l=0,i;
    for(i=0;i<50;i++)
    {
        if(str[i]=='\0')
            break;
        l++;
    }
    int h=l-1;
    for( i=0;i<(l)/2;i++)
    {
        if(str[i]==str[h])
        {
            h--;
            continue;
        }
        else
        {
            cout<<"The given string is not palindrome in nature"<<endl;
            break;
        }

    }
    if(i==(l)/2)
        cout<<"The given string is Palindrome in nature"<<endl;
    return 0;
}
