//
//  main.cpp
//  counting_number_of_words
//
//  Created by Uby H on 22/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    int w=0;
    cout<<"Enter the string to count the number of words in it : "<<endl;
    char str[50];
    gets(str);
    for(int i=0;i< 50;i++)
    {
        if(str[i]=='\0')
            break;
        if(str[i]==' ')
        w++;
    }
    cout<<"The number of words in the string are : "<<w+1<<endl;
    return 0;
}

