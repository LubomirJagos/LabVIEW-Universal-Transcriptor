#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
using namespace std;

#define FEEDBACK_REGISTER_SIZE_417 8
template<typename FEEDBACKNODE_TYPE> static FEEDBACKNODE_TYPE feedbackNode_417(FEEDBACKNODE_TYPE value){
    static FEEDBACKNODE_TYPE internalBuffer[FEEDBACK_REGISTER_SIZE_417];
    static int internalHead = 0;
    static int internalTail = FEEDBACK_REGISTER_SIZE_417 - 1;
    internalBuffer[internalHead] = value;
    internalHead += 1;
    internalTail += 1;
    if (internalHead == FEEDBACK_REGISTER_SIZE_417) internalHead = 0;
    if (internalTail == FEEDBACK_REGISTER_SIZE_417) internalTail = 0;
    return internalBuffer[internalHead];
}

#define FEEDBACK_REGISTER_SIZE_36 2
template<typename FEEDBACKNODE_TYPE> static FEEDBACKNODE_TYPE feedbackNode_36(FEEDBACKNODE_TYPE value){
    static FEEDBACKNODE_TYPE internalBuffer[FEEDBACK_REGISTER_SIZE_36];
    static int internalHead = 0;
    static int internalTail = FEEDBACK_REGISTER_SIZE_36 - 1;
    internalBuffer[internalHead] = value;
    internalHead += 1;
    internalTail += 1;
    if (internalHead == FEEDBACK_REGISTER_SIZE_36) internalHead = 0;
    if (internalTail == FEEDBACK_REGISTER_SIZE_36) internalTail = 0;
    return internalBuffer[internalHead];
}


void Example_Feedbacknode_1(){
    
    /***** BEGIN WhileLoop ********/
    bool wireUID_962_; //LoopEndRef.Wire
    do{
        float wireUID_1095_;
        String wireUID_289_;
        String wireUID_232_;
        String wireUID_202_;
        float wireUID_1207_;
        float wireUID_1147_ = -4.200000;
        float wireUID_1071_ = 0.000000;
        double wireUID_806_ = 4.700000;
        double wireUID_781_ = -2.200000;
        bool wireUID_729_;
        wireUID_729_ = wireUID_806_ > wireUID_781_;
        wireUID_1207_ = feedbackNode_417(wireUID_1095_);
        wireUID_232_ = feedbackNode_36(wireUID_202_);
        /***** BEGIN CaseStructure ********/
        
        String wireUID_249_ = wireUID_232_;
        float wireUID_1256_ = wireUID_1207_;
        
        String wireUID_238_ = wireUID_232_;
        float wireUID_1039_ = wireUID_1071_; //wires declarations
        switch(wireUID_729_){
            case false:
                
                 /* C code */
                wireUID_1095_ = wireUID_1256_;
                wireUID_202_ = wireUID_249_; /* output assgn. */
            break;
            case true:
                
                 /* C code */
                wireUID_1095_ = wireUID_1039_;
                wireUID_202_ = wireUID_238_; /* output assgn. */
            break;
        }
        /****** END CaseStructure
        /* Don't know how to translate class "Generic ->GObject ->Node ->":  */
        wireUID_962_ = (wireUID_1095_ > 0);
        /* Don't know how to translate class "Generic ->GObject ->Node ->":  */ /* C code */
     /* output assgn. */
    }while(wireUID_962_);
    /****** END WhileLoop */
    
    
}

void setup(){}
void loop(){
    Example_Feedbacknode_1();
}

