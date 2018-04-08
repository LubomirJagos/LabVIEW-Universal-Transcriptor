#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
#include <CircularBuffer.h>
using namespace std;

void Blink_4_experimental(){
    bool wireUID_740_ = true;
    long wireUID_705_ = 3;
    long wireUID_652_ = 2;
    pinMode(wireUID_652_,wireUID_740_?OUTPUT:INPUT);
    pinMode(wireUID_705_,wireUID_740_?OUTPUT:INPUT);
    /***** BEGIN WhileLoop ********/
    CircularBuffer<bool,2> feedbackNode_615;
    bool feedbackNodeInitBool_615 = true;
    
    bool wireUID_430_ = false; //LoopEndRef.
    int iteratorUID_289 = 0; //loop iterator
    do{
     //shift register init
        bool wireUID_317_;
        bool wireUID_642_;
        long wireUID_1157_ = 2;
        long wireUID_921_ = 3;
        bool wireUID_761_ = false;
        long wireUID_426_ = 200;
        delay(wireUID_426_); /* by Translator.vi, VI Path: C:\Users\lubo\Documents\LabView\LabVIEW-Universal-Transcriptor\Test\Examples For Parsing\delay.vi */
        if (feedbackNodeInitBool_615){
            feedbackNode_615.push(wireUID_761_);
            feedbackNodeInitBool_615 = false;
        }
        wireUID_642_ = feedbackNode_615.shift();
        digitalWrite(wireUID_921_,wireUID_642_?HIGH:LOW);
        wireUID_317_ = !wireUID_642_;
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        digitalWrite(wireUID_1157_,wireUID_317_?HIGH:LOW);
        feedbackNode_615.push(wireUID_317_);
         //C code
        
         //output assgn.
        iteratorUID_289++; //iterator increment
    }while(!wireUID_430_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    Blink_4_experimental();
}
