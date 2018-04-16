#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
#include <CircularBuffer.h>
#include <Arduino.h>
#include <SoftwareSerial.h>
#include <empty.h>
SoftwareSerial* ArduinoLabVIEWcreatedUART_3;

#include <empty.h>


using namespace std;
typedef struct LVcluster_I32_String{
    long senseOfLife;
    String partOfBookText;
};

void Example_Bundler_Unbundler_1(){
    LVcluster_I32_String wireUID_3016_;
    LVcluster_I32_String wireUID_2999_;
    LVcluster_I32_String wireUID_2978_;
    LVcluster_I32_String wireUID_1231_ = {0,""};
    String wireUID_1820_ = "Aldous Huxley, Brave New World";
    long wireUID_1814_ = 2;
    long wireUID_1708_ = 1;
    String wireUID_1700_ = "1984 George Orwell";
    String wireUID_1326_ = "Hitchhiker's guide through the galaxy.";
    long wireUID_1315_ = 0;
    unsigned int wireUID_763_ = 9600;
    unsigned char wireUID_717_ = 0;
    unsigned char wireUID_692_ = 1;
    ArduinoLabVIEWcreatedUART_3 = new SoftwareSerial( wireUID_717_, wireUID_692_);
    
    /***** Bundler ****/
    wireUID_2978_.senseOfLife = wireUID_1315_;
    wireUID_2978_.partOfBookText = wireUID_1326_;
    /***** End Bundler ****/
    /***** Bundler ****/
    wireUID_2999_.senseOfLife = wireUID_1708_;
    wireUID_2999_.partOfBookText = wireUID_1700_;
    /***** End Bundler ****/
    /***** Bundler ****/
    wireUID_3016_.senseOfLife = wireUID_1814_;
    wireUID_3016_.partOfBookText = wireUID_1820_;
    /***** End Bundler ****/
    ArduinoLabVIEWcreatedUART_3->begin(wireUID_763_);
    
    /***** BEGIN WhileLoop ********/
    CircularBuffer<long,2> feedbackNode_2002;
    bool feedbackNodeInitBool_2002 = true;
    
    bool wireUID_2127_ = false; //LoopEndRef.
    int iteratorUID_494 = 0; //loop iterator
    do{
     //shift register init
        unsigned char wireUID_1007_;
        String wireUID_972_ = "";
        long wireUID_2673_ = wireUID_2673_;
        LVcluster_I32_String wireUID_740_ = wireUID_3016_;
        LVcluster_I32_String wireUID_725_ = wireUID_2999_;
        LVcluster_I32_String wireUID_714_ = wireUID_2978_;
        long wireUID_2588_;
        long wireUID_2660_ = -1;
        bool wireUID_2599_;
        long wireUID_2577_ = 2;
        long wireUID_565_ = 1000;
        String wireUID_1870_ = " - ";
        if (feedbackNodeInitBool_2002){
            feedbackNode_2002.push(wireUID_2660_);
            feedbackNodeInitBool_2002 = false;
        }
        wireUID_2588_ = feedbackNode_2002.shift();
        wireUID_2599_ = wireUID_2577_ == wireUID_2588_;
        /***** BEGIN CaseStructure ********/
        switch(wireUID_2599_){
            case false:
            {
                long wireUID_2755_;
                long wireUID_2702_ = wireUID_2588_;
                wireUID_2755_ = wireUID_2702_ + 1;
                 /* C code */
                wireUID_2673_ = wireUID_2755_; /* output assgn. */
            }
            break;
            case true:
            {
                long wireUID_2697_ = 0;
                 /* C code */
                wireUID_2673_ = wireUID_2697_; /* output assgn. */
            }
            break;
        }
        /****** END CaseStructure ********/
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        /***** BEGIN CaseStructure ********/
        switch(wireUID_2673_){
            case  1 :
            {
                String wireUID_1567_ = "one";
                ArduinoLabVIEWcreatedUART_3->print(wireUID_1567_);
                
                 /* C code */
             /* output assgn. */
            }
            break;
            case  2 :
            {
                String wireUID_1141_ = "two";
                ArduinoLabVIEWcreatedUART_3->print(wireUID_1141_);
                
                 /* C code */
             /* output assgn. */
            }
            break;
            case  0:
            {
                String wireUID_1757_ = "zero";
                ArduinoLabVIEWcreatedUART_3->print(wireUID_1757_);
                
                 /* C code */
             /* output assgn. */
            }
            break;
        }
        /****** END CaseStructure ********/
        ArduinoLabVIEWcreatedUART_3->print(wireUID_1870_);
        
        /***** BEGIN CaseStructure ********/
        switch(wireUID_2673_){
            case  0:
            {
                String wireUID_848_;
                LVcluster_I32_String wireUID_819_ = wireUID_714_;
                /***** BEGIN  Unbundler *****/
                wireUID_848_ = (*(String*) (((void*) &wireUID_819_) + sizeof(long)));
                /***** END Unbundler *****/
                ArduinoLabVIEWcreatedUART_3->print(wireUID_848_);
                
                 /* C code */
             /* output assgn. */
            }
            break;
            case  1 :
            {
                String wireUID_1057_;
                LVcluster_I32_String wireUID_973_ = wireUID_725_;
                /***** BEGIN  Unbundler *****/
                wireUID_1057_ = (*(String*) (((void*) &wireUID_973_) + sizeof(long)));
                /***** END Unbundler *****/
                ArduinoLabVIEWcreatedUART_3->print(wireUID_1057_);
                
                 /* C code */
             /* output assgn. */
            }
            break;
            case  2 :
            {
                LVcluster_I32_String wireUID_439_ = wireUID_740_;
                String wireUID_1230_;
                /***** BEGIN  Unbundler *****/
                wireUID_1230_ = (*(String*) (((void*) &wireUID_439_) + sizeof(long)));
                /***** END Unbundler *****/
                ArduinoLabVIEWcreatedUART_3->print(wireUID_1230_);
                
                 /* C code */
             /* output assgn. */
            }
            break;
        }
        /****** END CaseStructure ********/
        wireUID_1007_ = ArduinoLabVIEWcreatedUART_3->println();
        
        delay(wireUID_565_); /* by Translator.vi, VI Path: C:\Users\ljagos\Documents\LabVIEW\LabVIEW-Universal-Transcriptor\Test\Examples For Parsing\delay.vi */
        feedbackNode_2002.push(wireUID_2673_);
         //C code
        
         //output assgn.
        iteratorUID_494++; //iterator increment
    }while(!wireUID_2127_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    Example_Bundler_Unbundler_1();
}

