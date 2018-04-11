#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
#include <CircularBuffer.h>
using namespace std;
typedef struct struct_String_I32_vectorString{String LVClusterItem_0;
long LVClusterItem_1;
vector<String> LVClusterItem_2;
};


void Example_Bundler_1(){
    struct_String_I32_vectorString wireUID_1207_;
    long wireUID_264_ = 0;
    /***** BEGIN CaseStructure ********/
    switch(wireUID_264_){
        case  -1 :
        {
            struct_String_I32_vectorString wireUID_1095_;
            vector<String> wireUID_988_ = {"B","C","D"};
            String wireUID_936_ = "A";
            struct_String_I32_vectorString wireUID_883_ = {"",0,vector<String>()};
            /* Don't know how to translate class "Generic ->GObject ->Node ->GrowableFunction ->Bundler": "Bundle" */
             /* C code */
            wireUID_1207_ = wireUID_1095_; /* output assgn. */
        }
        break;
        case  0 :
        {
            struct_String_I32_vectorString wireUID_1508_;
            struct_String_I32_vectorString wireUID_1506_ = {"",0,vector<String>()};
            /* Don't know how to translate class "Generic ->GObject ->Node ->GrowableFunction ->Bundler": "Bundle" */
             /* C code */
            wireUID_1207_ = wireUID_1508_; /* output assgn. */
        }
        break;
    }
    /****** END CaseStructure ********/
    
}

void setup(){}
void loop(){
    Example_Bundler_1();
}

