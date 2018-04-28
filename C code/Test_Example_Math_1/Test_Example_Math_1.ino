#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
#include <Arduino.h>
#include <math.h>
using namespace std;

void Example_Math_1(){
    long wireUID_497_ = 2;
    bool wireUID_465_ = true;
    long wireUID_712_ = 420;
    long wireUID_530_ = 9600;
    pinMode(wireUID_497_,wireUID_465_?OUTPUT:INPUT);
    Serial.begin(wireUID_530_);
    delay(wireUID_712_);
    /***** BEGIN WhileLoop ********/
    vector<bool> feedbackNode_744;
    bool feedbackNodeInitBool_744 = true;
    
    bool wireUID_820_ = false; //LoopEndRef.
    int iteratorUID_756 = 0; //loop iterator
    do{
     //shift register init and get front value
        String wireUID_1065_ = "pow(2.71) = ";
        String wireUID_1023_;
        String wireUID_1019_;
        float wireUID_987_;
        float wireUID_779_ = 2.710000;
        bool wireUID_848_;
        long wireUID_463_ = iteratorUID_756 /*Diagram owned wire terminal*/;
        long wireUID_940_ = 2;
        bool wireUID_783_;
        bool wireUID_831_ = false;
        long wireUID_610_ = 1000;
        String wireUID_461_;
        wireUID_461_ = String(wireUID_463_);
        if (feedbackNodeInitBool_744){
            feedbackNode_744.push_back(wireUID_831_);
            feedbackNodeInitBool_744 = false;
        }
        wireUID_783_ = feedbackNode_744.front(); feedbackNode_744.erase(feedbackNode_744.begin());
        Serial.println(wireUID_461_);
        wireUID_848_ = !wireUID_783_;
        delay(wireUID_610_);
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        digitalWrite(wireUID_940_,wireUID_783_?HIGH:LOW);
        wireUID_987_ = square(wireUID_779_);
        wireUID_1023_ = String(wireUID_987_);
        wireUID_1019_ = wireUID_1065_ + wireUID_1023_;
        Serial.println(wireUID_1019_);
        feedbackNode_744.push_back(wireUID_848_);
         //C code
        
         //output assgn.
        iteratorUID_756++; //iterator increment
    }while(!wireUID_820_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    Example_Math_1();
}
