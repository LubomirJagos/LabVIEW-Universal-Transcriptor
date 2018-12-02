#include <msp430.h>				
#include <vector>

using namespace std;

/**
 * THIS FILE MUST HAVE EXTENSION .CPP TO BE COMPILED AS C++ NOT C!
 * blink.cpp
 */

vector<bool> feedbackNode_615;
bool feedbackNodeInitBool_615 = true;

int someExampleFunction(int a){
    return a+ 42;
}

void main(void){
    WDTCTL = WDTPW | WDTHOLD;       // stop watchdog timer
    P1DIR |= 0x01;                  // configure P1.0 as output

    bool wireUID_424_ = true;
    bool wireUID_740_ = true;
    /***** BEGIN WhileLoop ********/
    vector<bool> feedbackNode_615;
    bool feedbackNodeInitBool_615 = true;

    bool wireUID_430_ = false; //LoopEndRef.
    int iteratorUID_289 = 0; //loop iterator
    do{
     //shift register init and get front value
        bool wireUID_317_;
        bool wireUID_642_;
        long wireUID_1157_ = 2;
        long wireUID_921_ = 3;
        long wireUID_426_ = 220;
        if (feedbackNodeInitBool_615){
            feedbackNode_615.push_back(wireUID_424_);
            feedbackNodeInitBool_615 = false;
        }
        wireUID_642_ = feedbackNode_615.front(); feedbackNode_615.erase(feedbackNode_615.begin());
        wireUID_317_ = !wireUID_642_;

        for(int i = 0; i < 3e3; i++);  //barbaristic delay :D
        P1OUT ^= 0x01;              // toggle P1.0


        int a = someExampleFunction(15);
        feedbackNode_615.push_back(wireUID_317_);
         //C code

         //output assgn.
        iteratorUID_289++; //iterator increment
    }while(!wireUID_430_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */

}
