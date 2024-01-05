//
//  main.cpp
//  reversing_a_string
//
//  Created by Uby H on 22/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter a string to reverse it : "<<endl;
    char str[100];
    char c;
    int h;
    int l=0;
    gets(str);
    for(int i=0;i<100;i++)
    {
        if(str[i]=='\0')
            break;
        l++;
    }
    h=l-1;
    for(int i=0;i<(l-1)/2;i++) 
    {
        c=str[i];
        str[i]=str[h];
        str[h]=c;
        h--;
    }
    cout<<"The reversed string is given by : "<<endl;
    puts(str);
    return 0;
}
