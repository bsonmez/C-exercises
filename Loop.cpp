//
//  main.cpp
//  HW1_Q6
//
//  Created by BURAK on 2016-11-10.
//  Copyright © 2016 BURAK. All rights reserved.
//

#include <iostream>
using namespace std;
    int main() {
        int choice;
        do {
        start:
            int output = 0, number = 0;
            cout << "Enter a number:";
            cin >> output;
            bool conversion = output < 0? false:true;
            if (output < 1000) {
                switch (conversion) {
                    case true: while
                        (number <= output) {
                            cout << number << " ";
                            number += 2;
                        }
                        break;
                    case false: cout << "Invalid number, try again";
                        goto start;
                }
            } else {
                cout <<"Error: Number must be below 1000";
                return -1;
            }
            cout <<"\n Do you want to continue [1] or [0]";
            do {
                cin >> choice;
                if (choice != 1 && choice != 0)
                    cout <<"Invalid Input: Only input 1 or 0!";
            } while ((choice != 1) && (choice != 0)) ;
        } while (choice == 1);
    }
