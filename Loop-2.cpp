//
//  main.cpp
//  HW1_Q6_A
//
//  Created by BURAK on 2016-11-13.
//  Copyright © 2016 BURAK. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int output = 0, number = 0, choice=1;
        for( ; ; ){
        if(choice==1)
            {
                cout << "Enter a number:";
                cin >> output;
                if (output<1000) {
                    for (number=0; number<=output; number+=2)
                    {
                        cout << number << " ";
                    }
                    cout<<"\n Do you wanna continue ? [1] or [0]";
                    
                }
                else
                {
                    cout << "Invalid number, try again"<<endl;
                    cout << "Do you wanna continue ? [1] or [0]";
                    
                }
                
               cin>>choice;
            }
            else
                return 0;
        }
    
}


