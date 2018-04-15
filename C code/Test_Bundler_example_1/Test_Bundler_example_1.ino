typedef struct myDefStruct{
  int A = 3;
  float B = 4.2;
  String C = "Hello world!";  
  int D = 8;
};

typedef struct myDefStruct2{
  int _1;
  float _2;
  String _3;
  int _4;
};

myDefStruct structA;
void* ptrA;

void setup(){
  Serial.begin(9600);
}

void loop(){
/* t+his code run normally as expected, print values of struct items
  Serial.print(structA.A);
  Serial.print(" - ");
  Serial.print(structA.B);
  Serial.print(" - ");
  Serial.print(structA.C);
  Serial.print(" - ");
  Serial.print(structA.D);
  Serial.println();
  delay(1000);
*/
/*
  ptrA = &structA;
  Serial.print(*((int*) ptrA));
  Serial.print(" - ");
  Serial.print(*((float*) (ptrA + sizeof(int))));
  Serial.print(" - ");
  Serial.print(*((String*) (ptrA + sizeof(int) + sizeof(float))));
  Serial.print(" - ");
  Serial.print(*((int*) (ptrA + sizeof(int) + sizeof(float) + sizeof(String))));
  Serial.println();
  delay(1000);
*/
  Serial.print(*((int*) ((void*) &structA)));
  Serial.print(" - ");
  Serial.print(*((float*) (((void*) &structA) + sizeof(int))));
  Serial.print(" - ");
  Serial.print(*((String*) (((void*) &structA) + sizeof(int) + sizeof(float))));
  Serial.print(" - ");
  Serial.print(*((int*) (((void*) &structA) + sizeof(int) + sizeof(float) + sizeof(String))));
  Serial.println();
  delay(1000);
}

