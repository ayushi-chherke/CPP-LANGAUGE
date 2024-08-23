/*  SUBSTRACTION OF TWO NUMBERS!
#include <iostream>
using namespace std;
class demo{
    private:
    int a,b;
    public:
    void getdata();
    friend int subtract(demo);
};
void demo :: getdata()
{
    cout<<"Enter two numbers ";
    cin>>a>>b;
}
int  subtract(demo aa)
{
    return(aa.a-aa.b);
}
int main()
{
    demo aa;
    aa.getdata();
    cout<<"Substraction = "<<subtract(aa);
    return 0;
}
*/

//MAXIMUN &MINIMUM B/W TWO NUMBERS
#include <iostream>
using namespace std;
class B;
class A{
    private:
    int a;
    public:
    void input(){
    {
    cout<<"Enter a no. for a ";
    cin>>a;
    }
    }
    friend void maxmin(A,B);
};
class B{
private:
int b;
public:
void getdata(){
    cout<<"Enter a no. for b ";
    cin>>b;
}
friend void maxmin(A,B);
};
void maxmin(A aa ,B bb)
{
    if (aa.a>bb.b)
    {
        cout<<"\n Max num is= "<<aa.a<<endl;
        cout<<"\n Min num is= "<<bb.b; 
    }
    else{
        cout<<"\n Max num is="<<bb.b;
         cout<<"\n Min num is= "<<aa.a; 
    }
}
int main()
{
    A aa;
    B bb;
    aa.input();
    bb.getdata();
    maxmin(aa,bb);
    return 0;
}