//
//  main.cpp
//  cpp_to_add_sparse_matrix
//
//  Created by Uby H on 10/07/23.
//

#include <iostream>
using namespace std;
class Element
{
    public:
    int i;
    int j;
    int x;
};
class Sparse
{
    private:
    int m;
    int n;
    int num;
    Element *ele;
    public:
    Sparse(int m,int n, int num)
    {
        this->m=m;
        this->n=n;
        this->num=num;
        ele=new Element[this->num];
    }
    ~Sparse()
    {
        delete [] ele;
    }
    void read()
    {
        cout<<"Enter row number, column number and non-zero elements : "<<endl;
        for(int i=0;i<num;i++)
        {
            cin>>ele[i].i>>ele[i].j>>ele[i].x;
        }
    }
    void display()
    {
        int k=0;
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<num;j++)
            {
                if(ele[k].i==i&&ele[k].j==j)
                    cout<<ele[k++].x<<" ";
                else
                    cout<<"0 ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Sparse s1(5,5,5);
    s1.read();
    s1.display();
    Sparse s2(5,5,5);
    s2.read();
    s2.display();
    return 0;
}
