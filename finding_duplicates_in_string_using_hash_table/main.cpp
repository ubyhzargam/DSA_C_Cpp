//
//  main.cpp
//  finding_duplicates_in_string_using_hash_table
//
//  Created by Uby H on 26/06/23.
//

#include <iostream>
using namespace std;
int main()
{
    int *H=(int*)malloc(26*sizeof(int));
    for(int i=0;i<26;i++)H[i]=0;
    char str[50];
    cout<<"Enter the string to count the number of duplicates in it. The string contain only lowercase English alphabets. "<<endl;
    cin>>str;
    for(int i=0;str[i]!='\0';i++)
        H[((int)str[i]-97)]++;
           for(int i=0;i<26;i++)
            {
                if(H[i]>1)
                {
                    cout<<"The character "<<(char)(i+97)<<" is repeated "<<(H[i])<<" times"<<endl;
                }
            }
                                             return 0;
}
