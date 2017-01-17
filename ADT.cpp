//
//  main.cpp
//  Final_CH12
//
//  Created by BURAK on 2017-01-01.
//  Copyright © 2017 BURAK. All rights reserved.
//

#include <iostream>
using namespace std;
class ZZ
{
public:
    virtual void draw()=0;
};
class Shape
{
public:
    virtual void draw()=0;
};
class QQ:public Shape,public ZZ
{
public:
    void draw(){
        cout<<"This is qq"<<endl;
    }
};
class WW:public Shape
{
    void draw(){
        cout<<"This is ww"<<endl;
    }
};

int main(int argc, const char * argv[]) {
    Shape *sh=new QQ;
    sh->draw();
    sh= new WW;
    sh->draw();
    
    ZZ *qq= new QQ;
    qq->draw();
    
    Shape *sq=new Shape;
    sq->draw();
    

}
