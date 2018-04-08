#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
#include <CircularBuffer.h>
using namespace std;


void Example_Feedbacknode_1(){
    
    /***** BEGIN WhileLoop ********/
    CircularBuffer<String,2> feedbackNode_143;
    bool feedbackNodeInitBool_143 = true;
    
    CircularBuffer<float,8> feedbackNode_870;
    bool feedbackNodeInitBool_870 = true;
    
    bool wireUID_962_; //LoopEndRef.
    do{
     //shift register init
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
        wireUID_729_ = wireUID_781_ > wireUID_806_;
        if (feedbackNodeInitBool_870){
            feedbackNode_870.push(wireUID_1147_);
            feedbackNode_870.push(wireUID_1147_);
            feedbackNode_870.push(wireUID_1147_);
            feedbackNode_870.push(wireUID_1147_);
            feedbackNode_870.push(wireUID_1147_);
            feedbackNode_870.push(wireUID_1147_);
            feedbackNode_870.push(wireUID_1147_);
            feedbackNodeInitBool_870 = false;
        }
        wireUID_1207_ = feedbackNode_870.shift();
        if (feedbackNodeInitBool_143){
            feedbackNode_143.push(wireUID_289_);
            feedbackNodeInitBool_143 = false;
        }
        wireUID_232_ = feedbackNode_143.shift();
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
        /****** END CaseStructure ********/
        /* Don't know how to translate class "Generic ->GObject ->Node ->":  */
        wireUID_962_ = (wireUID_1095_ > 0);
        /* Don't know how to translate class "Generic ->GObject ->Node ->":  */
        
        feedbackNode_870.push(wireUID_1095_);
        feedbackNode_143.push(wireUID_202_);
        
        
        
         //C code
        
         //output assgn.
    }while(!wireUID_962_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    Example_Feedbacknode_1();
}

