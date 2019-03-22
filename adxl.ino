//program to check the working of a acclerometer.
//define the three direction pins of acclerometer with arduino board analog pins
#define xp A0
#define yp A1
#define zp A2

void setup()                // put your setup code here, to run once:
{
Serial.begin(9600);
pinMode(A0, INPUT);
pinMode(A1, INPUT);
pinMode(A2, INPUT);
}

void loop()                      // put your main code here, to run repeatedly:
{   
  //reading the values of x,y,z directions.
  int x= analogRead(xp);       
  delay(100);
  int y= analogRead(yp);
  delay(100);
  int z= analogRead(zp);
  delay(100);
  //printing the readed values on serial monitor.
  Serial.print("x distance");
  Serial.print(x);
  Serial.print("\n");
  Serial.print("y distance");
  Serial.print(y);
  Serial.print("\n");
  Serial.print("z distance");
  Serial.print(z);
  Serial.print("\n");

}
