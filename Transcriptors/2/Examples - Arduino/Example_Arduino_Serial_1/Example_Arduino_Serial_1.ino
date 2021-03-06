#include <ArduinoSTL.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
using namespace std;
typedef struct LVcluster_String_String{
    String LVClusterItem_0;
    String LVClusterItem_1;
};
/*
typedef struct LVcluster_String_String{
    String LVClusterItem_0;
    String LVClusterItem_1;
};
typedef struct LVcluster_String_String{
    String LVClusterItem_0;
    String LVClusterItem_1;
};
*/

vector<long> shiftRegister_898;
bool shiftRegisterInitBool_898 = true;


void Example_Arduino_Serial_1(){
    long wireUID_696_ = 9600;
    long wireUID_892_ = 0;
    vector<LVcluster_String_String> wireUID_845_;
    LVcluster_String_String wireUID_809_ = {"three","plum"};
    LVcluster_String_String wireUID_803_ = {"two","orange"};
    LVcluster_String_String wireUID_792_ = {"one","apple"};
    wireUID_845_.push_back(wireUID_792_);
    wireUID_845_.push_back(wireUID_803_);
    wireUID_845_.push_back(wireUID_809_);
    Serial.begin(wireUID_696_);
    /***** BEGIN WhileLoop ********/
    bool wireUID_2067_ = false; //LoopEndRef.
    int iteratorUID_180 = 0; //loop iterator
    do{
        if (shiftRegisterInitBool_898){
            shiftRegister_898.push_back(wireUID_892_);
            shiftRegisterInitBool_898 = false;
        } //shift register init and get front value
        String wireUID_837_;
        String wireUID_1778_;
        String wireUID_1696_;
        String wireUID_821_ = " - ";
        long wireUID_383_ = 2000;
        LVcluster_String_String wireUID_1674_;
        vector<LVcluster_String_String> wireUID_1363_ = wireUID_845_;
        long wireUID_1081_;
        long wireUID_1019_ = shiftRegister_898.front(); shiftRegister_898.erase(shiftRegister_898.begin());;
        long wireUID_1048_ = 3;
        bool wireUID_1007_;
        long wireUID_936_;
        wireUID_1007_ = wireUID_1048_ == wireUID_1019_;
        /***** BEGIN CaseStructure ********/
        switch(wireUID_1007_){
            case false:
            {
                long wireUID_1110_ = wireUID_1019_;
                 /* C code */
                wireUID_1081_ = wireUID_1110_; /* output assgn. */
            }
            break;
            case true:
            {
                long wireUID_1133_ = 0;
                 /* C code */
                wireUID_1081_ = wireUID_1133_; /* output assgn. */
            }
            break;
        }
        /****** END CaseStructure ********/
        wireUID_936_ = wireUID_1081_ + 1;
        wireUID_1674_ = wireUID_1363_[wireUID_1081_];
        /***** BEGIN  Unbundler *****/
        wireUID_1696_ = (*(String*) (((void*) &wireUID_1674_) ));
        wireUID_1778_ = (*(String*) (((void*) &wireUID_1674_) + sizeof(String)));
        /***** END Unbundler *****/
        wireUID_837_ = wireUID_1696_ + wireUID_821_ + wireUID_1778_;
        Serial.println(wireUID_837_);
        delay(wireUID_383_);
         //C code
        
        shiftRegister_898.push_back(wireUID_936_); //output assgn.
        iteratorUID_180++; //iterator increment
    }while(!wireUID_2067_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    Example_Arduino_Serial_1();
}

