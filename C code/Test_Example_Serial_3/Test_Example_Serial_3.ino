#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
using namespace std;

void Example_Serial_3(){
    long wireUID_497_ = 2;
    bool wireUID_465_ = true;
    long wireUID_712_ = 420;
    long wireUID_530_ = 9600;
    pinMode(wireUID_497_,wireUID_465_?OUTPUT:INPUT);
    Serial.begin(wireUID_530_);
    delay(wireUID_712_);
    /***** BEGIN WhileLoop ********/
    vector<bool> feedbackNode_744;
    bool feedbackNodeInitBool_744 = true;
    
    bool wireUID_820_ = false; //LoopEndRef.
    int iteratorUID_756 = 0; //loop iterator
    do{
     //shift register init and get front value
        String wireUID_1272_;
        double wireUID_1233_ = 3.000000;
        double wireUID_1200_ = 1.000000;
        String wireUID_1136_ = "Division: 1/3 = ";
        long wireUID_463_ = iteratorUID_756 /*Diagram owned wire terminal*/;
        double wireUID_1058_;
        String wireUID_1039_;
        long wireUID_940_ = 2;
        bool wireUID_848_;
        bool wireUID_783_;
        bool wireUID_831_ = false;
        long wireUID_610_ = 1000;
        String wireUID_461_;
        wireUID_461_ = String(wireUID_463_);
        if (feedbackNodeInitBool_744){
            feedbackNode_744.push_back(wireUID_831_);
            feedbackNodeInitBool_744 = false;
        }
        wireUID_783_ = feedbackNode_744.front(); feedbackNode_744.erase(feedbackNode_744.begin());
        wireUID_1058_ = wireUID_1200_ / wireUID_1233_;
        Serial.println(wireUID_461_);
        wireUID_848_ = !wireUID_783_;
        wireUID_1039_ = String(wireUID_1058_);
        delay(wireUID_610_);
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        wireUID_1272_ = wireUID_1136_ + wireUID_1039_;
        digitalWrite(wireUID_940_,wireUID_783_?HIGH:LOW);
        Serial.println(wireUID_1272_);
        feedbackNode_744.push_back(wireUID_848_);
         //C code
        
         //output assgn.
        iteratorUID_756++; //iterator increment
    }while(!wireUID_820_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    Example_Serial_3();
}

