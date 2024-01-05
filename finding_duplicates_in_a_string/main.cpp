//
//  main.cpp
//  finding_duplicates_in_a_string
//
//  Created by Uby H on 22/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    int l=0,c=0;
    cout<<"Enter a string to find duplicates in it : "<<endl;
    char str[50];
    cin>>str;
    for(int i=0;str[i]!='\0';i++)l++;
    for(int i=0;i<l;i++)
    {
        for(int j=i+1;j<=l;j++)
        {
            if(str[i]==str[j])
                c++;
        }
        if(c>0)
            cout<<"The character "<< str[i] <<" is repeated "<<c<<" times. "<<endl;
        c=0;
    }
    return 0;
}
