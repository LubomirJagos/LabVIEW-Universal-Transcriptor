#include "ArduinoBasicFunctions.h"


void Blink_3_simple_and_correct_one(){    
    /***** BEGIN WhileLoop ********/
    bool wireUID_529_; //LoopEndRef.Wire
    do{
        bool wireUID_529_;
        int wireUID_426_ = 42;
        double wireUID_569_ = 7.000000;
        int wireUID_540_;
        Delay(wireUID_426_); /* by Translator.vi, VI Path: C:\Users\lubo\Documents\LabView\LabVIEW-Universal-Transcriptor\Test\Examples For Parsing\Delay.vi */
        /* Don't know how to translate class "Generic ->GObject ->Node ->Function ->Comparison ->" */
        /***** BEGIN CaseStructure ********/
        
        int wireUID_575_ = -42;
        
        int wireUID_953_ = -99; //wires declarations
        switch(wireUID_529_){
            case false:
                
                Delay(wireUID_575_); /* by Translator.vi, VI Path: C:\Users\lubo\Documents\LabView\LabVIEW-Universal-Transcriptor\Test\Examples For Parsing\Delay.vi */ /* C code */
             /* output assgn. */
            break;
            case true:
                
                Delay(wireUID_953_); /* by Translator.vi, VI Path: C:\Users\lubo\Documents\LabView\LabVIEW-Universal-Transcriptor\Test\Examples For Parsing\Delay.vi */
                Toggle_LED(); /* C code */
             /* output assgn. */
            break;
        }
        /****** END CaseStructure /* C code */
     /* output assgn. */
    }while(wireUID_529_);
    /****** END WhileLoop */
    
    return ;}

void setup(){}
void loop(){
    Blink_3_simple_and_correct_one();
}

