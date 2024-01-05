//
//  main.cpp
//  changing_case_of_a_string
//
//  Created by Uby H on 22/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    char str[50];
    cout<<"Enter the string to change all it's characters from uppercase to lowercase or from lowercase to uppercase : "<<endl;
    cin>>str;
    int n;
    cout<<"Enter 1 to change all the characters to lowercase. Enter 2 to change all the characters to uppercase : "<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
            for(int i=0;i<50;i++)
            {
                if(str[i]=='\0')
                    break;
                if(str[i]>=65&&str[i]<=90)
                str[i]=str[i]+32;
            }
            break;
        case 2:
            for(int i=0;i<50;i++)
            {
                if(str[i]=='\0')
                    break;
                if(str[i]>=97&&str[i]<=122)
                str[i]=str[i]-32;
            }
            break;
    }
    cout<<"The modified String would be given by : "<<endl;
    cout<<str<<endl;
    return 0;
}
