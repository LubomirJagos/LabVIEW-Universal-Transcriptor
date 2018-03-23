#include <StandardCplusplus.h>
#include <vector>
#include "ArduinoBasicFunctions.h"
using namespace std;
struct UserDefined_StructType{String LuboString;
int NumInsideUserCluter;
double Double_insideCluster;
};



vector<bool> Blink_3_simple_and_correct_one(){
    UserDefined_StructType wireUID_813_ = {"LuboJe King",0,0.000000};
    vector<bool> wireUID_770_;
    vector<bool> wireUID_675_ = {true,true,false};
    /***** BEGIN WhileLoop ********/
    bool wireUID_529_; //LoopEndRef.Wire
    do{
        UserDefined_StructType wireUID_682_ = wireUID_813_;
        UserDefined_StructType wireUID_634_;
        vector<bool> wireUID_729_ = wireUID_675_;
        vector<bool> wireUID_701_;
        int wireUID_426_ = 42;
        double wireUID_569_ = 7.000000;
        int wireUID_540_;
        Delay(wireUID_426_); /* by Translator.vi, VI Path: C:\Users\lubo\Documents\LabView\LabVIEW-Universal-Transcriptor\Test\Examples For Parsing\Delay.vi */
        wireUID_529_ = wireUID_569_ > wireUID_540_;
        /***** BEGIN CaseStructure ********/
        
        UserDefined_StructType wireUID_828_ = wireUID_682_;
        vector<bool> wireUID_820_ = wireUID_729_;
        int wireUID_575_ = -42;
        
        UserDefined_StructType wireUID_670_ = wireUID_682_;
        vector<bool> wireUID_720_ = wireUID_729_;
        int wireUID_953_ = -99; //wires declarations
        switch(wireUID_529_){
            case false:
                
                Delay(wireUID_575_); /* by Translator.vi, VI Path: C:\Users\lubo\Documents\LabView\LabVIEW-Universal-Transcriptor\Test\Examples For Parsing\Delay.vi */ /* C code */
                wireUID_701_ = wireUID_820_;
                wireUID_634_ = wireUID_828_; /* output assgn. */
            break;
            case true:
                
                Delay(wireUID_953_); /* by Translator.vi, VI Path: C:\Users\lubo\Documents\LabView\LabVIEW-Universal-Transcriptor\Test\Examples For Parsing\Delay.vi */
                Toggle_LED(); /* C code */
                wireUID_701_ = wireUID_720_;
                wireUID_634_ = wireUID_670_; /* output assgn. */
            break;
        }
        /****** END CaseStructure /* C code */
        wireUID_770_ = wireUID_701_;
//         = wireUID_634_; /* output assgn. */
    }while(wireUID_529_);
    /****** END WhileLoop */
    vector<bool> BoolArrayIndicator1 = wireUID_770_;
    
    return BoolArrayIndicator1;
}

void setup(){}
void loop(){
    Blink_3_simple_and_correct_one();
}

