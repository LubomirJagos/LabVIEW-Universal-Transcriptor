#include "ArduinoBasicFunctions.h"
void LVSubVI_Some_VI_4(){
    
    Waveform wireUID_701_ = 42;
    
} //SubVI not locked auto-generated call
void LVSubVI_Some_VI_3(){
    
    Waveform wireUID_959_Some_VI3_sig_out_2_wire;
    int wireUID_622_some_VI_3_name;
    LVSubVI_Some_VI_4();
    /***** BEGIN WhileLoop ********/
    bool wireUID_677_; //LoopEndRef.Wire
    do{
        
        bool wireUID_677_ = true;
        int wireUID_657_;
        LVSubVI_Some_VI_4(); /* C code */
        wireUID_959_Some_VI3_sig_out_2_wire = wireUID_657_; /* output assgn. */
    }while(wireUID_677_);
    /****** END WhileLoop */
    LVSubVI_Some_VI_4();
} //SubVI not locked auto-generated call

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
        Delay(wireUID_246_); /* by Translator.vi, VI Path: C:\Users\lubo\Documents\LabView\LabVIEW-Universal-Transcriptor\Test\Examples For Parsing\Delay.vi */
        Toggle_LED();
        LVSubVI_Some_VI_3(); /* C code */
        wireUID_340_ = wireUID_307_;
        wireUID_382_ = wireUID_470_; /* output assgn. */
    }while(wireUID_529_);
    /****** END WhileLoop */}

void setup(){}
void loop(){
    Blink();
}

