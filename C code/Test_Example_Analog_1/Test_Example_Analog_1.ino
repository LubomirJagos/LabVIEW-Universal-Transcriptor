#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
using namespace std;
vector<long> shiftRegister_319;
bool shiftRegisterInitBool_319 = true;


void Example_Analog_1(){
    long wireUID_422_ = 0;
    bool wireUID_327_ = true;
    long wireUID_893_ = 9;
    pinMode(wireUID_893_,wireUID_327_?OUTPUT:INPUT);
    /***** BEGIN WhileLoop ********/
    bool wireUID_1169_ = false; //LoopEndRef.
    int iteratorUID_1055 = 0; //loop iterator
    do{
        if (shiftRegisterInitBool_319){
            shiftRegister_319.push_back(wireUID_422_);
            shiftRegisterInitBool_319 = false;
        } //shift register init and get front value
        long wireUID_1150_ = 13;
        long wireUID_806_;
        long wireUID_1107_;
        long wireUID_569_ = shiftRegister_319.front(); shiftRegister_319.erase(shiftRegister_319.begin());;
        long wireUID_630_ = 15;
        bool wireUID_539_;
        long wireUID_456_;
        long wireUID_1020_ = 120;
        long wireUID_717_ = 9;
        wireUID_539_ = wireUID_630_ == wireUID_569_;
        /***** BEGIN CaseStructure ********/
        switch(wireUID_539_){
            case true:
            {
                long wireUID_885_ = 0;
                 /* C code */
                wireUID_806_ = wireUID_885_; /* output assgn. */
            }
            break;
            case false:
            {
                long wireUID_855_ = wireUID_569_;
                 /* C code */
                wireUID_806_ = wireUID_855_; /* output assgn. */
            }
            break;
        }
        /****** END CaseStructure ********/
        wireUID_456_ = wireUID_806_ + 1;
        wireUID_1107_ = wireUID_1150_ * wireUID_806_;
        analogWrite(wireUID_717_, wireUID_1107_);
        delay(wireUID_1020_);
         //C code
        
        shiftRegister_319.push_back(wireUID_456_); //output assgn.
        iteratorUID_1055++; //iterator increment
    }while(!wireUID_1169_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    Example_Analog_1();
}

