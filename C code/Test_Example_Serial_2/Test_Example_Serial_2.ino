#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
using namespace std;

void Example_Serial_2(){
    long wireUID_712_ = 420;
    long wireUID_530_ = 9600;
    Serial.begin(wireUID_530_);
    delay(wireUID_712_);
    /***** BEGIN WhileLoop ********/
    bool wireUID_820_ = false; //LoopEndRef.
    int iteratorUID_756 = 0; //loop iterator
    do{
     //shift register init and get front value
        long wireUID_610_ = 2000;
        long wireUID_463_ = iteratorUID_756 /*Diagram owned wire terminal*/;
        String wireUID_461_;
        wireUID_461_ = String(wireUID_463_);
        Serial.println(wireUID_461_);
        delay(wireUID_610_);
         //C code
        
         //output assgn.
        iteratorUID_756++; //iterator increment
    }while(!wireUID_820_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    Example_Serial_2();
}

