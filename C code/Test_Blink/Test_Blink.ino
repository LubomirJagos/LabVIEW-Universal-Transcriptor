#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
#include <CircularBuffer.h>
#include <ArduinoBasicFunctions.h>
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
    do{
     //shift register init
        bool wireUID_761_ = false;
        bool wireUID_642_;
        bool wireUID_446_;
        long wireUID_426_ = 200;
        delay(wireUID_426_); /* by Translator.vi, VI Path: C:\Users\lubo\Documents\LabView\LabVIEW-Universal-Transcriptor\Test\Examples For Parsing\delay.vi */
        if (feedbackNodeInitBool_615){
            feedbackNode_615.push(wireUID_761_);
            feedbackNodeInitBool_615 = false;
        }
        wireUID_642_ = feedbackNode_615.shift();
        /***** BEGIN CaseStructure ********/
        bool wireUID_721_ = true;
        bool wireUID_618_;
        long wireUID_606_ = 2;
        long wireUID_1038_ = 3;
        bool wireUID_1239_;
        bool wireUID_760_ = false;
        long wireUID_1157_ = 2;
        long wireUID_921_ = 3; //wires declarations
        switch(wireUID_642_){
            case false:
                
                wireUID_618_ = !wireUID_721_;
                digitalWrite(wireUID_1038_,wireUID_721_?HIGH:LOW);
                digitalWrite(wireUID_606_,wireUID_618_?HIGH:LOW);
                
                
                 /* C code */
                wireUID_446_ = wireUID_721_; /* output assgn. */
            break;
            case true:
                
                wireUID_1239_ = !wireUID_760_;
                digitalWrite(wireUID_921_,wireUID_760_?HIGH:LOW);
                digitalWrite(wireUID_1157_,wireUID_1239_?HIGH:LOW);
                
                
                 /* C code */
                wireUID_446_ = wireUID_760_; /* output assgn. */
            break;
        }
        /****** END CaseStructure ********/
        /* Don't know how to translate class "Generic ->GObject ->Node ->":  */
        
        feedbackNode_615.push(wireUID_446_);
        
         //C code
        
         //output assgn.
    }while(!wireUID_430_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
    
    
}

void setup(){}
void loop(){
    Blink_4_experimental();
}

