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

void Blink_6_shift_refs(){
    unsigned int wireUID_1641_ = 9600;
    unsigned char wireUID_1634_ = 0;
    unsigned char wireUID_1629_ = 1;
    bool wireUID_1576_ = false;
    long wireUID_1507_ = 3;
    long wireUID_1396_ = 2;
    bool wireUID_740_ = true;
    long wireUID_705_ = 3;
    long wireUID_652_ = 2;
    ArduinoLabVIEWcreatedUART_3 = new SoftwareSerial( wireUID_1634_, wireUID_1629_);
    
    ArduinoLabVIEWcreatedUART_3->begin(wireUID_1641_);
    
    pinMode(wireUID_652_,wireUID_740_?OUTPUT:INPUT);
    pinMode(wireUID_705_,wireUID_740_?OUTPUT:INPUT);
    digitalWrite(wireUID_1396_,wireUID_1576_?HIGH:LOW);
    digitalWrite(wireUID_1507_,wireUID_1576_?HIGH:LOW);
    /***** BEGIN WhileLoop ********/
    CircularBuffer<bool,1> shiftRegister_767;
    bool shiftRegisterInitBool_767 = true;
    
    CircularBuffer<bool,1> shiftRegister_1631;
    bool shiftRegisterInitBool_1631 = true;
    
    bool wireUID_1608_ = false; //LoopEndRef.
    do{
     //shift register init
        bool wireUID_1760_B = true;
        bool wireUID_1685_A = true;
        long wireUID_1394_ = 7;
        long wireUID_672_ = 7;
        /**** BEGIN ForLoop *****/
        
        for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_672_; LVHardcodedCnt++){
            if (shiftRegisterInitBool_1631){
                shiftRegister_1631.push(wireUID_1685_A);
                shiftRegisterInitBool_1631 = false;
            } // shift regs
            bool wireUID_1663_;
            bool wireUID_1661_ = shiftRegister_1631.shift();
            long wireUID_426_ = 1000;
            delay(wireUID_426_); /* by Translator.vi, VI Path: C:\Users\lubo\Documents\LabView\LabVIEW-Universal-Transcriptor\Test\Examples For Parsing\delay.vi */
            /***** BEGIN CaseStructure ********/
            String wireUID_2308_ = "A0";
            bool wireUID_721_ = true;
            bool wireUID_618_;
            long wireUID_606_ = 2;
            long wireUID_1038_ = 3;
            String wireUID_2208_ = "A1";
            bool wireUID_1239_;
            bool wireUID_760_ = false;
            long wireUID_1157_ = 2;
            long wireUID_921_ = 3; //wires declarations
            switch(wireUID_1661_){
                case false:
                    
                    wireUID_618_ = !wireUID_721_;
                    digitalWrite(wireUID_1038_,wireUID_721_?HIGH:LOW);
                    digitalWrite(wireUID_606_,wireUID_618_?HIGH:LOW);
                    ArduinoLabVIEWcreatedUART_3->print(wireUID_2308_);
                    
                    
                    
                    
                     /* C code */
                    wireUID_1663_ = wireUID_721_; /* output assgn. */
                break;
                case true:
                    
                    wireUID_1239_ = !wireUID_760_;
                    digitalWrite(wireUID_921_,wireUID_760_?HIGH:LOW);
                    digitalWrite(wireUID_1157_,wireUID_1239_?HIGH:LOW);
                    ArduinoLabVIEWcreatedUART_3->print(wireUID_2208_);
                    
                    
                    
                    
                     /* C code */
                    wireUID_1663_ = wireUID_760_; /* output assgn. */
                break;
            }
            /****** END CaseStructure ********/
            
             /* C code*/
            
            shiftRegister_1631.push(wireUID_1663_); /* output assignements */
        }
        /***** END ForLoop ******/
        /**** BEGIN ForLoop *****/
        
        for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_1394_; LVHardcodedCnt++){
            if (shiftRegisterInitBool_767){
                shiftRegister_767.push(wireUID_1760_B);
                shiftRegisterInitBool_767 = false;
            } // shift regs
            bool wireUID_1738_;
            bool wireUID_1736_ = shiftRegister_767.shift();
            long wireUID_1349_ = 1000;
            delay(wireUID_1349_); /* by Translator.vi, VI Path: C:\Users\lubo\Documents\LabView\LabVIEW-Universal-Transcriptor\Test\Examples For Parsing\delay.vi */
            /***** BEGIN CaseStructure ********/
            String wireUID_3039_ = "B0";
            bool wireUID_1121_ = true;
            long wireUID_1140_ = 2;
            long wireUID_1156_ = 3;
            String wireUID_2896_ = "B1";
            bool wireUID_1298_ = false;
            long wireUID_1308_ = 2;
            long wireUID_1312_ = 3; //wires declarations
            switch(wireUID_1736_){
                case false:
                    
                    digitalWrite(wireUID_1156_,wireUID_1121_?HIGH:LOW);
                    digitalWrite(wireUID_1140_,wireUID_1121_?HIGH:LOW);
                    ArduinoLabVIEWcreatedUART_3->print(wireUID_3039_);
                    
                    
                    
                     /* C code */
                    wireUID_1738_ = wireUID_1121_; /* output assgn. */
                break;
                case true:
                    
                    digitalWrite(wireUID_1312_,wireUID_1298_?HIGH:LOW);
                    digitalWrite(wireUID_1308_,wireUID_1298_?HIGH:LOW);
                    ArduinoLabVIEWcreatedUART_3->print(wireUID_2896_);
                    
                    
                    
                     /* C code */
                    wireUID_1738_ = wireUID_1298_; /* output assgn. */
                break;
            }
            /****** END CaseStructure ********/
            
             /* C code*/
            
            shiftRegister_767.push(wireUID_1738_); /* output assignements */
        }
        /***** END ForLoop ******/
        
         //C code
        
         //output assgn.
    }while(!wireUID_1608_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
    
    
    
    
    
    
}

void setup(){}
void loop(){
    Blink_6_shift_refs();
}

