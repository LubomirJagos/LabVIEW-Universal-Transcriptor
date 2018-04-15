#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
#include <CircularBuffer.h>
using namespace std;
typedef struct LVcluster_{
    ;
};
typedef struct LVcluster_String_I32_vectorString{
    String A;
    long B;
    vector<String> C;
};


void Example_Bundler_1(){
    LVcluster_String_I32_vectorString wireUID_1207_;
    long wireUID_264_ = 0;
    /***** BEGIN CaseStructure ********/
    switch(wireUID_264_){
        case 0:
        {
            LVcluster_String_I32_vectorString wireUID_883_ = {"",0,vector<String>()};
            LVcluster_String_I32_vectorString wireUID_1095_;
            vector<String> wireUID_988_ = {"B","C","D"};
            String wireUID_936_ = "A";
            /***** Bundler ****/
            wireUID_1095_.A = wireUID_936_;
            wireUID_1095_.C = wireUID_988_;
            /***** End Bundler ****/
             /* C code */
            wireUID_1207_ = wireUID_1095_; /* output assgn. */
        }
        break;
    }
    /****** END CaseStructure ********/
    
}

void setup(){}
void loop(){
    Example_Bundler_1();
}

