//
//  main.cpp
//  counting_number_of_vowels
//
//  Created by Uby H on 22/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    int v=0;
    cout<<"Enter the string to count the number of vowels in it : "<<endl;
    char str[50];
    gets(str);
    for(int i=0;i< 50;i++)
    {
        if(str[i]=='\0')
            break;
        if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
        v++;
    }
    cout<<"The number of vowels in the string are : "<<v<<endl;
    return 0;
}
