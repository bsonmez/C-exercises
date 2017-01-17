//
//  main.cpp
//  Final_CH11ADT
//
//  Created by BURAK on 2017-01-01.
//  Copyright © 2017 BURAK. All rights reserved.
//
#define EBADPTR 0
#include <iostream>
using namespace std;

template<class T>
class SafeBox{
private:
    T *element;
public:
    SafeBox(T *arg){
            element=arg;
        }
    SafeBox(){
            element=NULL;
        }
    T *remove() throw (int)
        {
            if(element == NULL)
            {
                throw EBADPTR;
            }
            T *val=element;
            element=NULL;
            return val;
        }
    void add(T *arg)
        {
            element=arg;
        }
    
};

class Money
{
private:
    string currency;
    int amount;
public:
    Money(string c)
    {
        currency=c;
    }
    string getCurrency()
    {
        return currency;
    }
};

class Gold
{
private:
    int grade;
public:
    Gold(int c)
    {
        grade=c;
    }
    int getGrade()
    {
        return grade;
    }
};

class Bond
{
private:
    double amount;
public:
    Bond(double a)
    {
        amount=a;
    }
    double getAmount()
    {
        return amount;
    }
};

int main(int argc, const char * argv[]) {
    
    Money *m = new Money("$");
    SafeBox<Money> myMoney(m);
    Money *m1=myMoney.remove();
    try {
        m1=myMoney.remove();
    } catch (int) {
        cout<<"There is no product"<<endl;
    }
    cout<< m1->getCurrency()<<endl;
    
    Gold *g= new Gold(18);
    SafeBox<Gold> myGold(g);
    Gold *g1=myGold.remove();
    cout<< g1->getGrade()<<endl;
    
    Bond *b=new Bond(2.6);
    SafeBox<Bond> myBond(b);
    Bond *b1 = myBond.remove();
    cout<< b1->getAmount();
    
    return 0;
}
