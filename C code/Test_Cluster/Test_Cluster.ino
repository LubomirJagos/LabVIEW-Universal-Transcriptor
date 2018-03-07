typedef struct myDefinedCluster{
  int item0;
  String item1;
  double item2[5];
};

typedef struct myDefinedClusterSimilar{
  int itemXYZ = 50;
  String anotherString;
  struct{
    double age;  
  }anotherStruct;
  double itemZ[5] = {1,2.2,35,4,7};
};

myDefinedCluster myVariable;
myDefinedCluster *myVariableRef;
myDefinedClusterSimilar myVar2;
myDefinedClusterSimilar *myVar2Ref;

void setup() {
  // put your setup code here, to run once:
  myVariable.item0 = 1042;  
  myVariableRef = new myDefinedCluster();
  myVar2.anotherStruct.age = 42;
}

void loop() {
  // put your main code here, to run repeatedly:
  myVariable.item0--;
  myVar2 = *((myDefinedClusterSimilar*) myVariableRef);
}
