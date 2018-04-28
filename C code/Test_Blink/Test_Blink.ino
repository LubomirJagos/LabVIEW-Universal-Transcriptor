#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
#include <Arduino.h>
#include <SoftwareSerial.h>
#include <empty.h>
SoftwareSerial* ArduinoLabVIEWcreatedUART_3;

#include <empty.h>


using namespace std;

void Blink_5(){
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
    bool wireUID_1608_ = false; //LoopEndRef.
    int iteratorUID_1541 = 0; //loop iterator
    do{
     //shift register init and get front value
        long wireUID_1394_ = 7;
        long wireUID_672_ = 7;
        /**** BEGIN ForLoop *****/
        vector<bool> feedbackNode_615;
        bool feedbackNodeInitBool_615 = true;
        
        
        int iteratorUID_289 = 0; //loop iterator
        for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_672_; LVHardcodedCnt++){
         // shift regs
            bool wireUID_1415_ = true;
            bool wireUID_642_;
            bool wireUID_446_;
            long wireUID_426_ = 1000;
            delay(wireUID_426_);
            if (feedbackNodeInitBool_615){
                feedbackNode_615.push_back(wireUID_1415_);
                feedbackNodeInitBool_615 = false;
            }
            wireUID_642_ = feedbackNode_615.front(); feedbackNode_615.erase(feedbackNode_615.begin());
            /***** BEGIN CaseStructure ********/
            switch(wireUID_642_){
                case true:
                {
                    String wireUID_2208_ = "A1";
                    bool wireUID_1239_;
                    bool wireUID_760_ = false;
                    long wireUID_1157_ = 2;
                    long wireUID_921_ = 3;
                    wireUID_1239_ = !wireUID_760_;
                    digitalWrite(wireUID_921_,wireUID_760_?HIGH:LOW);
                    digitalWrite(wireUID_1157_,wireUID_1239_?HIGH:LOW);
                    ArduinoLabVIEWcreatedUART_3->print(wireUID_2208_);
                    
                     /* C code */
                    wireUID_446_ = wireUID_760_; /* output assgn. */
                }
                break;
                case false:
                {
                    String wireUID_2308_ = "A0";
                    bool wireUID_721_ = true;
                    bool wireUID_618_;
                    long wireUID_606_ = 2;
                    long wireUID_1038_ = 3;
                    wireUID_618_ = !wireUID_721_;
                    digitalWrite(wireUID_1038_,wireUID_721_?HIGH:LOW);
                    digitalWrite(wireUID_606_,wireUID_618_?HIGH:LOW);
                    ArduinoLabVIEWcreatedUART_3->print(wireUID_2308_);
                    
                     /* C code */
                    wireUID_446_ = wireUID_721_; /* output assgn. */
                }
                break;
            }
            /****** END CaseStructure ********/
            /* Don't know how to translate class "Generic ->GObject ->Node": "" */
            feedbackNode_615.push_back(wireUID_446_);
             /* C code*/
            
             /* output assignements */
            iteratorUID_289++; //iterator increment
        }
        /***** END ForLoop ******/
        /**** BEGIN ForLoop *****/
        vector<bool> feedbackNode_1321;
        bool feedbackNodeInitBool_1321 = true;
        
        
        int iteratorUID_843 = 0; //loop iterator
        for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_1394_; LVHardcodedCnt++){
         // shift regs
            bool wireUID_1336_ = true;
            bool wireUID_1339_;
            bool wireUID_1342_;
            long wireUID_1349_ = 1000;
            if (feedbackNodeInitBool_1321){
                feedbackNode_1321.push_back(wireUID_1336_);
                feedbackNodeInitBool_1321 = false;
            }
            wireUID_1339_ = feedbackNode_1321.front(); feedbackNode_1321.erase(feedbackNode_1321.begin());
            delay(wireUID_1349_);
            /***** BEGIN CaseStructure ********/
            switch(wireUID_1339_){
                case true:
                {
                    String wireUID_2896_ = "B1";
                    bool wireUID_1298_ = false;
                    long wireUID_1308_ = 2;
                    long wireUID_1312_ = 3;
                    digitalWrite(wireUID_1312_,wireUID_1298_?HIGH:LOW);
                    digitalWrite(wireUID_1308_,wireUID_1298_?HIGH:LOW);
                    ArduinoLabVIEWcreatedUART_3->print(wireUID_2896_);
                    
                     /* C code */
                    wireUID_1342_ = wireUID_1298_; /* output assgn. */
                }
                break;
                case false:
                {
                    String wireUID_3039_ = "B0";
                    bool wireUID_1121_ = true;
                    long wireUID_1140_ = 2;
                    long wireUID_1156_ = 3;
                    digitalWrite(wireUID_1156_,wireUID_1121_?HIGH:LOW);
                    digitalWrite(wireUID_1140_,wireUID_1121_?HIGH:LOW);
                    ArduinoLabVIEWcreatedUART_3->print(wireUID_3039_);
                    
                     /* C code */
                    wireUID_1342_ = wireUID_1121_; /* output assgn. */
                }
                break;
            }
            /****** END CaseStructure ********/
            /* Don't know how to translate class "Generic ->GObject ->Node": "" */
            feedbackNode_1321.push_back(wireUID_1342_);
             /* C code*/
            
             /* output assignements */
            iteratorUID_843++; //iterator increment
        }
        /***** END ForLoop ******/
         //C code
        
         //output assgn.
        iteratorUID_1541++; //iterator increment
    }while(!wireUID_1608_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    Blink_5();
}
