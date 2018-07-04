using namespace std;
typedef struct LVcluster_String_I32_Double_Float{
    String LuboString;
    long NumInsideUserCluter;
    double Double_insideCluster;
};


void Example_NamedBundler_2(){
    double wireUID_1394_;
    String wireUID_1307_;
    LVcluster_String_I32_Double_Float wireUID_1240_;
    long wireUID_264_ = 0;
    /***** BEGIN CaseStructure ********/
    switch(wireUID_264_){
        case 2:
        {
            LVcluster_String_I32_Double_Float wireUID_1208_ = {"4.2.0",42,4.200000};
             /* C code */
            wireUID_1240_ = wireUID_1208_; /* output assgn. */
        }
        break;
        default:
        {
            LVcluster_String_I32_Double_Float wireUID_1213_ = {"4.2.0",42,4.200000};
             /* C code */
            wireUID_1240_ = wireUID_1213_; /* output assgn. */
        }
        break;
    }
    /****** END CaseStructure ********/
    wireUID_1307_ = *(String*) ((void*) &wireUID_1240_ + 0);
    wireUID_1394_ = *(double*) ((void*) &wireUID_1240_ + sizeof(String) + sizeof(long));
    
    
}

void setup(){}
void loop(){
    Example_NamedBundler_2();
}

