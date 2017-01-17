//
//  main.cpp
//  Final_CH11
//
//  Created by BURAK on 2017-01-01.
//  Copyright © 2017 BURAK. All rights reserved.
//

#include <iostream>
using namespace std;

class Speed{
private:
    int speed;
public:
    void changeMPH(double newspeed)
    {
        cout<<"Your new speed is "<<(1.3*newspeed)<<endl;
    }

    int get(){
        return speed;
    }
    void set(int newspeed)
    {
        try{
            if (newspeed)
            {
                if(newspeed<0){
                    throw 0;
                }
                else {
                    speed=newspeed;
                    changeMPH(speed);
                }
               
            }
            else{
                throw 'a';
            }
            
        }
        catch(int)
        {
            cout<<"Speed suppose to be upper than 0"<<endl;
        }
        catch(char)
        {
            cout<<"NO CHAR"<<endl;

        }
    }
};


int main(int argc, const char * argv[]) {
    Speed S;
    int x;
    
    cin>>x;
    S.set(x);
}
