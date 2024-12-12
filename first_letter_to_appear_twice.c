// Given a string s consisting of lowercase English letters, return the first letter to appear twice.

// Note:

// A letter a appears twice before another letter b if the second occurrence of a is before the second occurrence of b.
// s will contain at least one letter that appears twice.

// Logic

char repeatedCharacter(char* s) 
{
    int *hash=(int *)malloc(sizeof(int)*27);
    for(int i=0;i<27;i++)
    hash[i]=0;
    int i=0;
    while(s[i]!='\0')
    {
        hash[(int)s[i]-97]++;
        if(hash[(int)s[i]-97]==2)
        {
            return s[i];
        }
        i++;
    }
    return '\0';
}
