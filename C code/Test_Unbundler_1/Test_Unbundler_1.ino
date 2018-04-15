#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
#include <CircularBuffer.h>
using namespace std;
typedef struct LVcluster_String_I32_vectorString{
    String A;
    long LVClusterItem_1;
    vector<String> LVClusterItem_2;
};

void Example_Unbundler_1(){
    LVcluster_String_I32_vectorString wireUID_773_ = wireUID_773_;
    bool wireUID_746_ = false;
    long wireUID_523_ = 0;
    /***** BEGIN CaseStructure ********/
    switch(wireUID_523_){
        case  -1:
        {
            LVcluster_String_I32_vectorString wireUID_399_;
            vector<String> wireUID_402_ = {"B","C","D"};
            String wireUID_405_ = "A";
            LVcluster_String_I32_vectorString wireUID_408_ = {"",0,vector<String>()};
            /***** Bundler ****/
            wireUID_399_.A = wireUID_405_;
            wireUID_399_.LVClusterItem_2 = wireUID_402_;
            /***** End Bundler ****/
             /* C code */
            wireUID_773_ = wireUID_399_; /* output assgn. */
        }
        break;
        case  0 :
        {
            LVcluster_String_I32_vectorString wireUID_499_;
            LVcluster_String_I32_vectorString wireUID_502_ = {"",0,vector<String>()};
            /***** Bundler ****/
            
            /***** End Bundler ****/
             /* C code */
            wireUID_773_ = wireUID_499_; /* output assgn. */
        }
        break;
    }
    /****** END CaseStructure ********/
    /***** BEGIN CaseStructure ********/
    switch(wireUID_746_){
        case false:
        {
            vector<String> wireUID_1226_;
            LVcluster_String_I32_vectorString wireUID_1162_ = wireUID_773_;
            /***** BEGIN  Unbundler *****/
            wireUID_1226_ = (*(vector<String>*) (((void*) &wireUID_1162_) + sizeof(String)+ sizeof(long)));
            /***** END Unbundler *****/
             /* C code */
         /* output assgn. */
        }
        break;
        case true:
        {
            String wireUID_1061_;
            long wireUID_1015_;
            LVcluster_String_I32_vectorString wireUID_804_ = wireUID_773_;
            /***** BEGIN  Unbundler *****/
            wireUID_1061_ = (*(String*) (((void*) &wireUID_804_) ));
            wireUID_1015_ = (*(long*) (((void*) &wireUID_804_) + sizeof(String)));
            /***** END Unbundler *****/
             /* C code */
         /* output assgn. */
        }
        break;
    }
    /****** END CaseStructure ********/
    
}

void setup(){}
void loop(){
    Example_Unbundler_1();
}

