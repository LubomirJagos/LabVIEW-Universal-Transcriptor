#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
#include <CircularBuffer.h>
using namespace std;

CircularBuffer<double,1> shiftRegister_1173;
bool shiftRegisterInitBool_1 = true;

CircularBuffer<String,1> shiftRegister_1326;


void Example_Shift_Register_Loop_1(double numberA, String userString1){
    double wireUID_1011_ = numberA;
    String wireUID_1506_;
    double wireUID_1464_;
    String wireUID_1031_ = userString1;
    /***** BEGIN WhileLoop ********/
    //starts with LoopEndRef.
    bool wireUID_1433_ = false;
    do{
        double wireUID_1192_;
        String wireUID_1322_ = shiftRegister_1326.shift();
        String wireUID_1295_;
        double wireUID_1118_ = shiftRegister_1173.shift();
        double wireUID_1150_ = 4.200000;
        bool wireUID_1116_;
        wireUID_1116_ = (wireUID_1118_ >= wireUID_1150_);
        /***** BEGIN CaseStructure ********/
        String wireUID_1401_ = "Hello world.";
        double wireUID_1266_ = 0.000000;
        String wireUID_1313_ = wireUID_1322_;
        double wireUID_1210_ = wireUID_1118_; //wires declarations
        switch(wireUID_1116_){
            case false:
                
                
                 /* C code */
                wireUID_1192_ = wireUID_1266_;
                wireUID_1295_ = wireUID_1401_; /* output assgn. */
            break;
            case true:
                
                
                 /* C code */
                wireUID_1192_ = wireUID_1210_;
                wireUID_1295_ = wireUID_1313_; /* output assgn. */
            break;
        }
        /****** END CaseStructure ********/
        
         /* C code */
     /* output assgn. */
    }while(!wireUID_1433_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    Example_Shift_Register_Loop_1(4.2, "hello");
}

