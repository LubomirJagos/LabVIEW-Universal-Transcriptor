#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
#include <ArduinoBasicFunctions.h>
using namespace std;

#define FEEDBACK_REGISTER_SIZE_787 2
template<typename FEEDBACKNODE_TYPE> static FEEDBACKNODE_TYPE feedbackNode_787(FEEDBACKNODE_TYPE value){
    static FEEDBACKNODE_TYPE internalBuffer[FEEDBACK_REGISTER_SIZE_787];
    static int internalHead = 0;
    static int internalTail = FEEDBACK_REGISTER_SIZE_787 - 1;
    internalBuffer[internalHead] = value;
    internalHead += 1;
    internalTail += 1;
    if (internalHead == FEEDBACK_REGISTER_SIZE_787) internalHead = 0;
    if (internalTail == FEEDBACK_REGISTER_SIZE_787) internalTail = 0;
    return internalBuffer[internalHead];
}


void Blink_4_experimental(){
    bool wireUID_740_ = true;
    int wireUID_705_ = 3;
    int wireUID_652_ = 2;
    pinMode(wireUID_652_,wireUID_740_?OUTPUT:INPUT);
    pinMode(wireUID_705_,wireUID_740_?OUTPUT:INPUT);
    /***** BEGIN WhileLoop ********/
    //starts with LoopEndRef.
    bool wireUID_430_ = false;
    do{
        bool wireUID_761_ = false;
        bool wireUID_642_;
        bool wireUID_446_;
        int wireUID_426_ = 200;
        delay(wireUID_426_); /* by Translator.vi, VI Path: C:\Users\lubo\Documents\LabView\LabVIEW-Universal-Transcriptor\Test\Examples For Parsing\delay.vi */
        wireUID_642_ = feedbackNode_787(wireUID_446_);
        /***** BEGIN CaseStructure ********/
        bool wireUID_721_ = true;
        bool wireUID_618_;
        int wireUID_606_ = 2;
        int wireUID_1038_ = 3;
        bool wireUID_1239_;
        bool wireUID_760_ = false;
        int wireUID_1157_ = 2;
        int wireUID_921_ = 3; //wires declarations
        switch(wireUID_642_){
            case false:
                
                wireUID_618_ = !wireUID_721_;
                digitalWrite(wireUID_1038_,wireUID_721_?HIGH:LOW);
                digitalWrite(wireUID_606_,wireUID_618_?HIGH:LOW); /* C code */
                wireUID_446_ = wireUID_721_; /* output assgn. */
            break;
            case true:
                
                wireUID_1239_ = !wireUID_760_;
                digitalWrite(wireUID_921_,wireUID_760_?HIGH:LOW);
                digitalWrite(wireUID_1157_,wireUID_1239_?HIGH:LOW); /* C code */
                wireUID_446_ = wireUID_760_; /* output assgn. */
            break;
        }
        /****** END CaseStructure ********/
        /* Don't know how to translate class "Generic ->GObject ->Node ->":  */ /* C code */
     /* output assgn. */
    }while(!wireUID_430_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
    
}

void setup(){}
void loop(){
    Blink_4_experimental();
}

