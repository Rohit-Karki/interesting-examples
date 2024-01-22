// void setup() {
//   Serial.begin(9600); //initialize serial COM at 9600 baudrate
//   pinMode(LED_BUILTIN, OUTPUT); //make the LED pin (13) as output
//   digitalWrite (LED_BUILTIN, LOW);
// }

// void loop() {
// while (Serial.available()){
//    Serial.read();
// }

// if (Serial.read() == '1')
// digitalWrite (LED_BUILTIN, HIGH);


// else if (Serial.read() == '0')
// digitalWrite (LED_BUILTIN, LOW);

// delay(100);
// }

// #include <VarSpeedServo.h>

// int servoPin = 9;
// int servoPos = 180;
// VarSpeedServo servo;

// String inputString = "";         // a string to hold incoming data
// unsigned int cont=0;

// void setup() 
// {
//   servo.attach(servoPin);

//   Serial.begin(9600);
//   Serial.println("Ready");
// }

// void loop(){
//   // myServo.write(servoPos);


//   signed int vel;
//   unsigned int pos;
  
//   if (Serial.available()) 
//   {
//     inputString = Serial.readStringUntil('!');
//     vel = inputString.toInt();   

//     if(inputString.endsWith("x"))
//     {
//       if (vel > 2)
//         servo.write(180, vel, false);    
//         // servo.write(180);    
//       else if (vel < -2)
//         servo.write(0, -vel, false);    
//         // servo.write(0);    
//       else
//       {
//         pos = servo.read();
//         servo.write(pos, 255, false);       
//         // servo.write(pos);       
//       } 
//     }
//     // else if(inputString.endsWith("y"))
//     // {
//     //   if (vel > 2)
//     //     servo2.write(180, vel, false);    
//     //   else if (vel < -2)
//     //     servo2.write(0, -vel, false);    
//     //   else
//     //   {
//     //     pos = servo2.read();
//     //     servo2.write(pos, 255, false);       
//     //   } 
//     // }
//     else if(inputString.endsWith("o"))
//     {
//       cont++;
//       if (cont >= 100)
//       {
//         pos = servo.read();
//         servo.write(90, 20, true);        
//         // servo.write(90);        
//         // pos = servo2.read();
//         // servo2.write(70 , 20, true);
//         cont = 0;
 
//       }
//       else
//       {
//         pos = servo.read();
//         servo.write(pos, 255, false);        
//         // servo.write(pos);        
//         // pos = servo2.read();
//         // servo2.write(pos, 255, false);
//       }                
//     }
//     inputString = "";
//   }
// }


