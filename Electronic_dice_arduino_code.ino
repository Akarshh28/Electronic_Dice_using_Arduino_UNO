const int A = 7; 
const int B = 6; 
const int C = 4; 
const int D = 3; 
const int E = 2; 
const int F = 8; 
const int G = 9; 
const int buzzer = 10; // Buzzer connected to pin 10 
const int leds[6] = {A0, A1, A2, A3, 11, 13}; 
int random_int = 0; 
void setup() { 
pinMode(A, OUTPUT); 
pinMode(B, OUTPUT); 
pinMode(C, OUTPUT); 
pinMode(D, OUTPUT); 
pinMode(E, OUTPUT); 
pinMode(F, OUTPUT); 
pinMode(G, OUTPUT); 
pinMode(12, INPUT_PULLUP); 
pinMode(buzzer, OUTPUT); // Buzzer output pin 
for (int i = 0; i < 6; i++) { 
pinMode(leds[i], OUTPUT); 
} 
} 
void lightLEDs(int count) { 
for(int i = 0; i < 6; i++) { 
if (i < count) { 
digitalWrite(leds[i], HIGH); 
} else { 
digitalWrite(leds[i], LOW); 
} 
} 
} 
void loop() { 
int pusshed = digitalRead(12); 
if (pusshed == LOW) { 
//digitalWrite(buzzer, HIGH); // Buzzer ON 
//delay(100); 
//digitalWrite(buzzer, LOW);  // Buzzer OFF 
for (int i = 0; i < 8; i++) { 
int freq = random(300, 1000); // random pitch 
tone(buzzer, freq, 50);       
delay(60);                    
// play tone for 50 ms 
// small pause 
} 
noTone(buzzer); // stop sound 
random_int = random(1, 7); // Random number from 1 to 6 
lightLEDs(random_int); 
one(); delay(20); 
two(); delay(20); 
three(); delay(20); 
four(); delay(20); 
five(); delay(20); 
six(); delay(20); 
} 
else { 
switch(random_int) { 
case 1: one(); break; 
case 2: two(); break; 
case 3: three(); break; 
case 4: four(); break; 
case 5: five(); break;  
case 6: six(); break; 
} 
lightLEDs(random_int); // keep LEDs lit 
delay(200); 
} 
} 
void one(){ 
digitalWrite(A, LOW); 
digitalWrite(B, HIGH); 
digitalWrite(C, HIGH); 
digitalWrite(D, LOW); 
digitalWrite(E, LOW); 
digitalWrite(F, LOW); 
digitalWrite(G, LOW); 
} 
void two(){ 
digitalWrite(A, HIGH); 
digitalWrite(B, HIGH); 
digitalWrite(C, LOW); 
digitalWrite(D, HIGH); 
digitalWrite(E, HIGH); 
digitalWrite(F, LOW); 
digitalWrite(G, HIGH); 
} 
void three(){ 
digitalWrite(A, HIGH); 
digitalWrite(B, HIGH); 
digitalWrite(C, HIGH); 
digitalWrite(D, HIGH); 
digitalWrite(E, LOW); 
digitalWrite(F, LOW); 
digitalWrite(G, HIGH); 
} 
void four(){ 
digitalWrite(A, LOW); 
digitalWrite(B, HIGH); 
digitalWrite(C, HIGH); 
digitalWrite(D, LOW); 
digitalWrite(E, LOW); 
digitalWrite(F, HIGH); 
digitalWrite(G, HIGH); 
} 
void five(){ 
digitalWrite(A, HIGH); 
digitalWrite(B, LOW); 
digitalWrite(C, HIGH); 
digitalWrite(D, HIGH); 
digitalWrite(E, LOW); 
digitalWrite(F, HIGH); 
digitalWrite(G, HIGH); 
} 
void six(){ 
digitalWrite(A, HIGH); 
digitalWrite(B, LOW); 
digitalWrite(C, HIGH); 
digitalWrite(D, HIGH); 
digitalWrite(E, HIGH); 
digitalWrite(F, HIGH); 
digitalWrite(G, HIGH); 
}