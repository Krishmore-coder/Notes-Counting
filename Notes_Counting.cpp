#include<iostream>
using namespace std;
class Notes
{
    public:
    int ten(int amt);
    int fifty(int amt);
    int twenty(int amt);
    int hundred(int amt);
    int two_hundred(int amt);
    int five_hundred(int amt);
    int two_thousand(int amt);
};
int Notes :: ten(int amt)
{
    return amt/10;
}
int Notes :: fifty(int amt)
{
    return amt/50;
}
int Notes :: twenty(int amt)
{
    return amt/20;
}
int Notes :: hundred(int amt)
{
    return amt/100;
}
int Notes :: two_hundred(int amt)
{
    return amt/200;
}
int Notes :: five_hundred(int amt)
{
    return amt/500;
}
int Notes :: two_thousand(int amt)
{
    return amt/2000;
}
int main()
{
    Notes rs;
    int amt,type,no;
    while(1)
    {
        cout<<"Enter Amount: ";
        cin>>amt;
        cout<<"Enter type of notes: ";
        cin>>type;
        if(type == 10)
        no = rs.ten(amt);
        else
        if(type == 20)
        no = rs.twenty(amt);
        else
        if(type == 50)
        no = rs.fifty(amt);
        else
        if(type == 100)
        no = rs.hundred(amt);
        else
        if(type == 200)
        no = rs.two_hundred(amt);
        else
        if(type == 500)
        no = rs.five_hundred(amt);
        else
        if(type == 2000)
        no = rs.two_thousand(amt);
        cout<<"Number of Notes of "<<type<<" is "<<no<<endl;
    }
}