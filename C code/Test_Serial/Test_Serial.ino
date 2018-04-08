#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
#include <CircularBuffer.h>
#include <Arduino.h>
#include <SoftwareSerial.h>
#include <empty.h>
SoftwareSerial* ArduinoLabVIEWcreatedUART_3;

#include <empty.h>


#include <ArduinoBasicFunctions.h>
using namespace std;

CircularBuffer<long,1> shiftRegister_497;
bool shiftRegisterInitBool_497 = true;

CircularBuffer<bool,1> shiftRegister_506;
bool shiftRegisterInitBool_506 = true;

CircularBuffer<long,1> shiftRegister_2756;
bool shiftRegisterInitBool_2756 = true;


void Array_2(){
    vector<vector<String>> wireUID_836_ = {{"hello","world","13","14"},{"21","22","this","is"},{"nice","32","matrix","34"},{"41","42",":D","finish"}};
    long wireUID_2750_ = 0;
    bool wireUID_1741_ = true;
    long wireUID_1738_ = 0;
    unsigned int wireUID_1694_ = 9600;
    unsigned char wireUID_1686_ = 0;
    unsigned char wireUID_1675_ = 1;
    bool wireUID_1671_ = false;
    long wireUID_1642_ = 2;
    bool wireUID_1632_ = true;
    long wireUID_1622_ = 2;
    ArduinoLabVIEWcreatedUART_3 = new SoftwareSerial( wireUID_1686_, wireUID_1675_);
    
    ArduinoLabVIEWcreatedUART_3->begin(wireUID_1694_);
    
    pinMode(wireUID_1622_,wireUID_1632_?OUTPUT:INPUT);
    digitalWrite(wireUID_1642_,wireUID_1671_?HIGH:LOW);
    /***** BEGIN WhileLoop ********/
    bool wireUID_1210_ = false; //LoopEndRef.
    int iteratorUID_522 = 0; //loop iterator
    do{
        if (shiftRegisterInitBool_497){
            shiftRegister_497.push(wireUID_1738_);
            shiftRegisterInitBool_497 = false;
        }
        if (shiftRegisterInitBool_506){
            shiftRegister_506.push(wireUID_1741_);
            shiftRegisterInitBool_506 = false;
        }
        if (shiftRegisterInitBool_2756){
            shiftRegister_2756.push(wireUID_2750_);
            shiftRegisterInitBool_2756 = false;
        } //shift register init
        vector<vector<String>> wireUID_877_ = wireUID_836_;
        String wireUID_1095_;
        long wireUID_2830_column = shiftRegister_497.shift();
        long wireUID_3480_row = shiftRegister_2756.shift();
        long wireUID_2569_ = 2;
        long wireUID_3724_;
        long wireUID_3445_;
        long wireUID_2957_ = 3;
        bool wireUID_2934_;
        bool wireUID_1178_ = shiftRegister_506.shift();
        bool wireUID_1181_;
        long wireUID_1206_ = 1000;
        wireUID_1181_ = !wireUID_1178_;
        wireUID_2934_ = wireUID_2830_column < wireUID_2957_;
        digitalWrite(wireUID_2569_,wireUID_1178_?HIGH:LOW);
        wireUID_1095_ = wireUID_877_[wireUID_3480_row][wireUID_2830_column];
        /***** BEGIN CaseStructure ********/
        long wireUID_3719_;
        long wireUID_3551_ = wireUID_3480_row;
        bool wireUID_3591_;
        long wireUID_3547_ = 3;
        long wireUID_3440_ = 0;
        long wireUID_3746_ = wireUID_3480_row;
        long wireUID_3402_;
        long wireUID_3369_ = wireUID_2830_column; //wires declarations
                long wireUID_145_ = 0;
                long wireUID_3696_;
                long wireUID_3667_ = wireUID_3551_; //wires declarations
        switch(wireUID_2934_){
            case false:
                
                wireUID_3591_ = wireUID_3551_ < wireUID_3547_;
                /***** BEGIN CaseStructure ********/
                switch(wireUID_3591_){
                    case false:
                        
                        
                         /* C code */
                        wireUID_3719_ = wireUID_145_; /* output assgn. */
                    break;
                    case true:
                        
                        wireUID_3696_ = wireUID_3667_ + 1;
                         /* C code */
                        wireUID_3719_ = wireUID_3696_; /* output assgn. */
                    break;
                }
                /****** END CaseStructure ********/
                
                 /* C code */
                wireUID_3445_ = wireUID_3440_;
                wireUID_3724_ = wireUID_3719_; /* output assgn. */
            break;
            case true:
                
                wireUID_3402_ = wireUID_3369_ + 1;
                 /* C code */
                wireUID_3445_ = wireUID_3402_;
                wireUID_3724_ = wireUID_3746_; /* output assgn. */
            break;
        }
        /****** END CaseStructure ********/
        ArduinoLabVIEWcreatedUART_3->print(wireUID_1095_);
        
        delay(wireUID_1206_); /* by Translator.vi, VI Path: C:\Users\lubo\Documents\LabView\LabVIEW-Universal-Transcriptor\Test\Examples For Parsing\delay.vi */
        
        
        
        
        
        
         //C code
        
        shiftRegister_497.push(wireUID_3445_);
        shiftRegister_506.push(wireUID_1181_);
        shiftRegister_2756.push(wireUID_3724_); //output assgn.
        iteratorUID_522++; //iterator increment
    }while(!wireUID_1210_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
    
    
    
    
}

void setup(){}
void loop(){
    Array_2();
}
