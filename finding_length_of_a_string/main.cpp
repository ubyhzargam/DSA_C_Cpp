//
//  main.cpp
//  finding_length_of_a_string
//
//  Created by Uby H on 22/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    char str[50];
    int l=0;
    cout<<"Enter the String to count the number of letters or to know the length of the string : "<<endl;
    cin>>str;
    for(int i=0;i<50;i++)
    {
        if(str[i]=='\0')
            break;
        l++;
    }
    cout<<"The number of letters or the length of the String is : "<<l<<endl;
    return 0;
}
