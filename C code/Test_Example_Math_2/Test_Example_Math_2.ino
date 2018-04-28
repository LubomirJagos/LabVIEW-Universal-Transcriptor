#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
#include <Arduino.h>
#include "complex.h"
#include <empty.h>
Complex _ComplexNumberLibAux;
using namespace std;

void Example_Math_2(){
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
        unsigned long wireUID_2412_;
        unsigned long wireUID_1915_;
        String wireUID_2517_;
        String wireUID_2409_;
        String wireUID_2405_ = "sin(c) =  ";
        String wireUID_2088_;
        String wireUID_2071_ = "Original complex number: ";
        String wireUID_2042_;
        double wireUID_1870_ = 3.300000;
        double wireUID_1845_ = 4.200000;
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
        wireUID_1915_ = (unsigned long int) new Complex(wireUID_1870_, wireUID_1845_);
        _ComplexNumberLibAux = *(Complex*) wireUID_1915_;
        wireUID_2042_ = String( _ComplexNumberLibAux.real()) + String(" i*") + String( _ComplexNumberLibAux.imag());
        wireUID_2088_ = wireUID_2071_ + wireUID_2042_;
        Serial.println(wireUID_2088_);
        wireUID_2412_ = (unsigned long int) new Complex( ((Complex*)wireUID_1915_)->c_sin());
        _ComplexNumberLibAux = *(Complex*) wireUID_2412_;
        wireUID_2409_ = String( _ComplexNumberLibAux.real()) + String(" i*") + String( _ComplexNumberLibAux.imag());
        wireUID_2517_ = wireUID_2405_ + wireUID_2409_;
        Serial.println(wireUID_2517_);
        delete (Complex*)wireUID_1915_;
        delete (Complex*)wireUID_2412_;
        feedbackNode_744.push_back(wireUID_848_);
         //C code
        
         //output assgn.
        iteratorUID_756++; //iterator increment
    }while(!wireUID_820_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    Example_Math_2();
}

