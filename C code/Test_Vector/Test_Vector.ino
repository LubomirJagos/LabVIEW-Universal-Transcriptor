#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
using namespace std;
vector<String> shiftRegister_438;
bool shiftRegisterInitBool_438 = true;

vector<double> shiftRegister_460;
bool shiftRegisterInitBool_460 = true;


String Example_Shift_Register_Loop_1(String userString1,double numberA){
    double wireUID_1011_;
    String wireUID_1506_;
    double wireUID_1464_;
    String wireUID_1031_;
    /***** BEGIN WhileLoop ********/
    vector<double> shiftRegister_1173;
    bool shiftRegisterInitBool_1173 = true;
    
    vector<String> shiftRegister_1326;
    bool shiftRegisterInitBool_1326 = true;
    
    bool wireUID_333_ = false; //LoopEndRef.
    int iteratorUID_428 = 0; //loop iterator
    do{
        if (shiftRegisterInitBool_438){
            shiftRegister_438.push_back(wireUID_1031_);
            shiftRegisterInitBool_438 = false;
        }
        if (shiftRegisterInitBool_460){
            shiftRegister_460.push_back(wireUID_1011_);
            shiftRegisterInitBool_460 = false;
        } //shift register init
        double wireUID_499_ = shiftRegister_460.front();
        String wireUID_488_;
        double wireUID_477_;
        String wireUID_466_ = shiftRegister_438.front();
        /***** BEGIN WhileLoop ********/
        bool wireUID_1433_ = false; //LoopEndRef.
        int iteratorUID_989 = 0; //loop iterator
        do{
            if (shiftRegisterInitBool_1173){
                shiftRegister_1173.push_back(wireUID_499_);
                shiftRegisterInitBool_1173 = false;
            }
            if (shiftRegisterInitBool_1326){
                shiftRegister_1326.push_back(wireUID_466_);
                shiftRegisterInitBool_1326 = false;
            } //shift register init
            double wireUID_1192_;
            String wireUID_1322_ = shiftRegister_1326.front();
            String wireUID_1295_;
            double wireUID_1118_ = shiftRegister_1173.front();
            double wireUID_1150_ = 4.200000;
            bool wireUID_1116_;
            wireUID_1116_ = (wireUID_1150_ >= wireUID_1118_);
            /***** BEGIN CaseStructure ********/
            switch(wireUID_1116_){
                case true:
                {
                    String wireUID_1313_ = wireUID_1322_;
                    double wireUID_1210_ = wireUID_1118_;
                     /* C code */
                    wireUID_1192_ = wireUID_1210_;
                    wireUID_1295_ = wireUID_1313_; /* output assgn. */
                }
                break;
                case false:
                {
                    String wireUID_1401_ = "Hello world.";
                    double wireUID_1266_ = 0.000000;
                     /* C code */
                    wireUID_1192_ = wireUID_1266_;
                    wireUID_1295_ = wireUID_1401_; /* output assgn. */
                }
                break;
            }
            /****** END CaseStructure ********/
             //C code
            
            shiftRegister_1173.push_back(wireUID_1192_);
            shiftRegister_1326.push_back(wireUID_1295_); //output assgn.
            iteratorUID_989++; //iterator increment
        }while(!wireUID_1433_); //negation because in LabVIEW it is when stop (oposite)
        /****** END WhileLoop */
         //C code
        
        shiftRegister_438.push_back(wireUID_488_);
        shiftRegister_460.push_back(wireUID_477_); //output assgn.
        iteratorUID_428++; //iterator increment
    }while(!wireUID_333_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    Example_Shift_Register_Loop_1("a",42);
}

