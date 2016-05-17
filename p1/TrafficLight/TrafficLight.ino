/*
  TrafficLight
  Models traffic light work.
 */

#define RED_PIN 8
#define YELLOW_PIN 10
#define GREEN_PIN 12

int red_on = 3000;
int red_yellow_on = 1000;
int green_on = 3000;
int green_blink = 500;
int yellow_on = 1000;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins as an output.
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(RED_PIN, HIGH);      // turn the red on
  delay(red_on);                    // wait 3 sec while red is on
  digitalWrite(YELLOW_PIN, HIGH);   // turn the yellow on
  delay(red_yellow_on);             // wait 1 sec while yellow is on

  digitalWrite(RED_PIN, LOW);       // turn off the red and yello
  digitalWrite(YELLOW_PIN, LOW);

  digitalWrite(GREEN_PIN, HIGH);    // turn the green on 
  delay(green_on);                      // wait for 3 seconds
  digitalWrite(GREEN_PIN, LOW);     // turn the green off


  for(int i=0; i < 3; i++)
  {
    delay(green_blink);              // green flashes 3 times
    digitalWrite(GREEN_PIN, HIGH);
    delay(green_blink);
    digitalWrite(GREEN_PIN, LOW);
  }

  digitalWrite(YELLOW_PIN, HIGH); // yellow is on
  delay(yellow_on);
  digitalWrite(YELLOW_PIN, LOW);
}
