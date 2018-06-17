#include <vector>
#include <empty.h>
/*including header file for ESP target */
#define WIFI_LIB_ESP_TARGET
#include <ESP8266WiFi.h>

#include <empty.h>
WiFiServer* _ESP8266WifiServer;

#include <empty.h>
WiFiClient _ESP8266WifiClient;

using namespace std;
unsigned short LVSubVI_ESP8266_WiFi_Wrapper__lvlib__WiFi_Start(unsigned short WiFi_Mode,String Password,String SSID){
    bool wireUID_1377_ = true;
    unsigned char wireUID_1366_ = 2;
    unsigned short wireUID_746_ = 2;
    String wireUID_197_;
    String wireUID_193_;
    /* WiFi.mode(...) function is only in ESP8266 WiFi lib. */
    #ifdef WIFI_LIB_ESP_TARGET
    WiFi.mode((WiFiMode) 2);
    #endif

    
    wireUID_1377_ = wireUID_1366_ == wireUID_746_;
    /***** BEGIN CaseStructure ********/
    switch(true){
        case true:
        {
            String wireUID_1473_ = wireUID_197_;
            String wireUID_1456_ = wireUID_193_;
            char _ESP8266WiFiWrapper_wifi_ssid[wireUID_1456_.length()+1]; wireUID_1456_.toCharArray(_ESP8266WiFiWrapper_wifi_ssid, sizeof(_ESP8266WiFiWrapper_wifi_ssid));char _ESP8266WiFiWrapper_wifi_password[wireUID_1473_.length()+1]; wireUID_1473_.toCharArray( _ESP8266WiFiWrapper_wifi_password, sizeof(_ESP8266WiFiWrapper_wifi_password));/* ESP8266 wifi lib is using for AP command softAP, normal wifi lib for arduino doesn't have this command. */

            WiFi.softAP("ESP8266Thing", "12345678");
            
             /* C code */
         /* output assgn. */
        }
        break;
        case false:
        {
            String wireUID_1080_ = wireUID_197_;
            String wireUID_1068_ = wireUID_193_;
            char _ESP8266WiFiWrapper_wifi_ssid[wireUID_1068_.length()+1]; wireUID_1068_.toCharArray(_ESP8266WiFiWrapper_wifi_ssid, sizeof(_ESP8266WiFiWrapper_wifi_ssid));char _ESP8266WiFiWrapper_wifi_password[wireUID_1080_.length()+1]; wireUID_1080_.toCharArray( _ESP8266WiFiWrapper_wifi_password, sizeof(_ESP8266WiFiWrapper_wifi_password));WiFi.begin(_ESP8266WiFiWrapper_wifi_ssid, _ESP8266WiFiWrapper_wifi_password);
             /* C code */
         /* output assgn. */
        }
        break;
    }
    /****** END CaseStructure ********/
    return 0;
} //SubVI not locked auto-generated call
unsigned short LVSubVI_ESP8266_WiFi_Wrapper__lvlib__Serial_Print_Target_IP(unsigned short WiFi_Mode){
    bool wireUID_456_;
    unsigned char wireUID_453_ = 2;
    unsigned short wireUID_450_;
    /* WiFi.mode(...) function is only in ESP8266 WiFi lib. */
    #ifdef WIFI_LIB_ESP_TARGET
    WiFi.mode((WiFiMode) wireUID_450_);
    #endif
    
    wireUID_456_ = wireUID_453_ == wireUID_450_;
    /***** BEGIN CaseStructure ********/
    switch(wireUID_456_){
        case true:
        {
            #ifdef WIFI_LIB_ESP_TARGET
            Serial.println( WiFi.softAPIP());
            #endif
            
            #ifdef WIFI_LIB_ARDUINO_TARGET
            Serial.println( WiFi.localIP());
            #endif
             /* C code */
         /* output assgn. */
        }
        break;
        case false:
        {
            Serial.println( WiFi.localIP());
             /* C code */
         /* output assgn. */
        }
        break;
    }
    /****** END CaseStructure ********/
    return 0;
} //SubVI not locked auto-generated call
vector<char> shiftRegister_768;
bool shiftRegisterInitBool_768 = true;


void Simple_Web_Server(){
    vector<unsigned char> wireUID_2533_ = {192,168,0,42};
    vector<unsigned char> wireUID_2527_ = {192,168,0,1};
    vector<unsigned char> wireUID_2530_ = {255,255,255,0};
    vector<unsigned char> wireUID_2524_ = {1,2,3,4};
    String wireUID_2509_ = "Settings done.";
    long wireUID_2484_ = 9600;
    unsigned short wireUID_2548_ = 2;
    String wireUID_2539_ = "ESP8266 Thing";
    String wireUID_2536_ = "12345678";
    char wireUID_2494_ = -1;
    unsigned char wireUID_2491_ = 80;
    /* Debug -> Target device changed to ESP, including ESP8266WiFi.h file, look at beginning of file. */
    
    Serial.begin(wireUID_2484_);
    _ESP8266WifiServer = new WiFiServer(80);
    

  WiFi.mode(WIFI_AP);
  WiFi.softAP("ESPKing", "12345678");

    /*definition of WiFi Client created. */
    _ESP8266WifiServer->begin();

  IPAddress _ip(192,168,0,5);
  IPAddress _gateway(192,168,0,1);
  IPAddress _subnet(255,255,255,0);
  WiFi.softAPConfig(_ip, _gateway, _subnet);

    
    /***** BEGIN WhileLoop ********/
    bool wireUID_2437_ = false; //LoopEndRef.
    int iteratorUID_792 = 0; //loop iterator
    do{
        if (shiftRegisterInitBool_768){
            shiftRegister_768.push_back(wireUID_2494_);
            shiftRegisterInitBool_768 = false;
        } //shift register init and get front value
        char wireUID_2425_;
        char wireUID_2428_ = shiftRegister_768.front(); shiftRegister_768.erase(shiftRegister_768.begin());;
        bool wireUID_2434_;
        _ESP8266WifiClient = _ESP8266WifiServer->available();
        wireUID_2434_ = (_ESP8266WifiClient ? true : false);
        /***** BEGIN CaseStructure ********/
        switch(wireUID_2434_){
            case false:
            {
                char wireUID_2191_ = wireUID_2428_;
                 /* C code */
                wireUID_2425_ = wireUID_2191_; /* output assgn. */
            }
            break;
            case true:
            {
                String wireUID_2115_ = "Client disconnected.";
                String wireUID_2112_ = "\n";
                String wireUID_2087_;
                String wireUID_2945_;
                String wireUID_2097_ = "Request:";
                String wireUID_2100_;
                String wireUID_2103_ = "\n";
                char wireUID_2130_ = wireUID_2130_;
                char wireUID_2136_ = wireUID_2136_;
                char wireUID_2139_ = wireUID_2428_;
                String wireUID_2145_ = "/world";
                char wireUID_2148_;
                bool wireUID_2151_;
                char wireUID_2154_ = -1;
                char wireUID_2163_ = -1;
                bool wireUID_2166_;
                char wireUID_2169_;
                String wireUID_2172_ = "/hello";
                String wireUID_2178_ = "";
                wireUID_2100_ = _ESP8266WifiClient.readStringUntil( wireUID_2178_.charAt(0));
                wireUID_2945_ = wireUID_2097_ + wireUID_2100_ + wireUID_2103_;
                Serial.println(wireUID_2945_);
                _ESP8266WifiClient.flush();
                wireUID_2169_ = wireUID_2100_.indexOf(wireUID_2172_);
                wireUID_2166_ = (wireUID_2163_ != wireUID_2169_);
                /***** BEGIN CaseStructure ********/
                switch(wireUID_2166_){
                    case true:
                    {
                        String wireUID_3054_ = "1. enter";
                        char wireUID_1206_ = 1;
                        Serial.println(wireUID_3054_);
                         /* C code */
                        wireUID_2136_ = wireUID_1206_; /* output assgn. */
                    }
                    break;
                    case false:
                    {
                        char wireUID_1107_ = wireUID_2139_;
                         /* C code */
                        wireUID_2136_ = wireUID_1107_; /* output assgn. */
                    }
                    break;
                }
                /****** END CaseStructure ********/
                wireUID_2148_ = wireUID_2100_.indexOf(wireUID_2145_);
                wireUID_2151_ = (wireUID_2154_ != wireUID_2148_);
                /***** BEGIN CaseStructure ********/
                switch(wireUID_2151_){
                    case true:
                    {
                        char wireUID_1319_ = 2;
                         /* C code */
                        wireUID_2130_ = wireUID_1319_; /* output assgn. */
                    }
                    break;
                    case false:
                    {
                        char wireUID_1295_ = wireUID_2136_;
                         /* C code */
                        wireUID_2130_ = wireUID_1295_; /* output assgn. */
                    }
                    break;
                }
                /****** END CaseStructure ********/
                _ESP8266WifiClient.flush();
                /***** BEGIN CaseStructure ********/
                switch(wireUID_2130_){
                    case 2:
                    {
                        String wireUID_1839_;
                        String wireUID_1842_ = "\n";
                        String wireUID_1845_ = "<i>World is such a small place.!</i></html>";
                        String wireUID_1848_ = "<!DOCTYPE HTML><html>";
                        String wireUID_1851_ = "Content-Type: text/html";
                        String wireUID_1854_ = "HTTP/1.1 200 OK";
                        wireUID_1839_ = wireUID_1854_ + wireUID_1842_ + wireUID_1851_ + wireUID_1842_ + wireUID_1842_ + wireUID_1848_ + wireUID_1842_ + wireUID_1845_ + wireUID_1842_;
                        _ESP8266WifiClient.print(wireUID_1839_);
                         /* C code */
                        wireUID_2087_ = wireUID_1839_; /* output assgn. */
                    }
                    break;
                    case 1:
                    {
                        String wireUID_1682_ = "\n";
                        String wireUID_1685_;
                        String wireUID_1691_ = "<!DOCTYPE HTML><html><head></head><body><i>Hello world from ESP8266 WiFi Server Example!</i></body></html>";
                        String wireUID_1694_ = "Content-Type: text/html";
                        String wireUID_1697_ = "HTTP/1.1 200 OK";
                        wireUID_1685_ = wireUID_1697_ + wireUID_1682_ + wireUID_1694_ + wireUID_1682_ + wireUID_1682_ + wireUID_1691_ + wireUID_1682_;
                        _ESP8266WifiClient.print(wireUID_1685_);
                         /* C code */
                        wireUID_2087_ = wireUID_1685_; /* output assgn. */
                    }
                    break;
                    default:
                    {
                        String wireUID_1540_;
                        String wireUID_1543_ = "HTTP/1.1 200 OK";
                        String wireUID_1546_ = "Content-Type: text/html";
                        String wireUID_1549_ = "<!DOCTYPE HTML><html>";
                        String wireUID_1552_ = "<b>Invalid request, try /hello or /world!</b></html>";
                        String wireUID_1555_ = "\n";
                        wireUID_1540_ = wireUID_1543_ + wireUID_1555_ + wireUID_1546_ + wireUID_1555_ + wireUID_1555_ + wireUID_1549_ + wireUID_1555_ + wireUID_1552_ + wireUID_1555_;
                        _ESP8266WifiClient.print(wireUID_1540_);
                         /* C code */
                        wireUID_2087_ = wireUID_1540_; /* output assgn. */
                    }
                    break;
                }
                /****** END CaseStructure ********/
                Serial.println(wireUID_2087_);
                Serial.println(wireUID_2115_);
                Serial.println(wireUID_2112_);
                 /* C code */
                wireUID_2425_ = wireUID_2130_; /* output assgn. */
            }
            break;
        }
        /****** END CaseStructure ********/
         //C code
        
        shiftRegister_768.push_back(wireUID_2425_); //output assgn.
        iteratorUID_792++; //iterator increment
    }while(!wireUID_2437_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    Simple_Web_Server();
}

