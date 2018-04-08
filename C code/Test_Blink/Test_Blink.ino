#include <StandardCplusplus.h>
#include <vector>
#include <ArduinoBasicFunctions.h>
#include <CircularBuffer.h>
using namespace std;
typedef struct{long Person_Age;
String Person_name;
};


void Example_Cluster_2(){
    struct{long Person_Age;
    String Person_name;
    } wireUID_924_;
    String wireUID_843_ = "Mario Supersonic";
    long wireUID_806_ = 42;
    struct{long Person_Age;
    String Person_name;
    } wireUID_760_ = {0,};
    wireUID_924_ = {.Person_Age = wireUID_806_,.Person_name = wireUID_843_}; //Bundler gen.
    
}

void setup(){}
void loop(){
    Example_Cluster_2();
}

