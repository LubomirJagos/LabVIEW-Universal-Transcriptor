#include "ArduinoBasicFunctions.h"

void Blink(){        
        int wireUID_382_;
        int wireUID_340_;
        int wireUID_285_ = 42;
        /***** BEGIN WhileLoop ********/
        bool wireUID_529_; //LoopEndRef.Wire
        do{
                
                int wireUID_470_ = 43;
                int wireUID_307_ = 42;
                int wireUID_246_ = wireUID_285_;
                double wireUID_569_ = 7.000000;
                int wireUID_540_;
                bool wireUID_529_;
                /* Don't know how to translate class "Generic ->GObject ->Node ->Function ->Comparison ->" */
                Delay(wireUID_246_); /* by Translator.vi, VI Path: C:\Users\ljagos\Documents\LabVIEW\LabVIEW-Universal-Transcriptor\Test\Examples For Parsing\Delay.vi */
                Toggle_LED(); /* C code */
        wireUID_340_ = wireUID_307_;
        wireUID_382_ = wireUID_470_; /* output assgn. */
        }while(wireUID_529_);
        /****** END WhileLoop */}

void setup(){}
void loop(){
  Blink();
}
