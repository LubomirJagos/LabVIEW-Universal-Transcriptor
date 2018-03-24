#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
using namespace std;

typedef struct UserDefined_StructType{String LuboString;
int NumInsideUserCluter;
double Double_insideCluster;
};


void Example_NamedBundler_1(){
    int wireUID_264_ = 0;
    /***** BEGIN CaseStructure ********/
    int wireUID_1137_ = 0;
    String wireUID_1112_;
    UserDefined_StructType wireUID_450_A = {"LuboJe King",0,0.000000};
    int wireUID_1187_ = 0;
    String wireUID_1162_;
    UserDefined_StructType wireUID_273_C;
    double wireUID_515_ = 4.200000;
    int wireUID_491_ = 42;
    String wireUID_467_ = "4.2.0";
    UserDefined_StructType wireUID_416_B = {"LuboJe King",0,0.000000};
    int wireUID_1087_;
    String wireUID_1058_;
    UserDefined_StructType wireUID_950_D = {"LuboJe King",0,0.000000}; //wires declarations
    switch(wireUID_264_){
        case  0 :
            
             /* C code */
         /* output assgn. */
        break;
        case  2 :
            
            wireUID_273_C = {.LuboString = wireUID_467_,.NumInsideUserCluter = wireUID_491_,.Double_insideCluster = wireUID_515_}; //Bundler gen. /* C code */
         /* output assgn. */
        break;
        case  3 :
            
            wireUID_1058_ = wireUID_950_D.LuboString; //unbundle gen.
            wireUID_1087_ = wireUID_950_D.NumInsideUserCluter; //unbundle gen.
             /* C code */
         /* output assgn. */
        break;
    }
    /****** END CaseStructure ********/
    
    
}

void setup(){}
void loop(){
    Example_NamedBundler_1();
}

