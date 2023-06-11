//#include <Mouse.h>

#define one_leftSw 0; // 1번 좌측 매인 스위치
#define one_rightSw 0; // 1번 우측 매인 스위치

#define two_leftSw 0; // 2번 좌측 서브 스위치
#define two_rightSw 0; // 2번 우측 서브 스위치

#define threes_leftSw 0; // 3번 좌측 서브 스위치
#define threes_rightSw 0; // 3번 우측 서브 스위치

#define joystickSW 0; // 조이스틱 매인 스위치

#define joystick_X A0; // 조이스틱 X Pin
#define joystick_Y A1; // 조이스틱 Y Pin

bool buttonActive = false;
int buttonActiveNumber = 0, buttonTime = 10;

void setup() {
  Serial.begin(9600);
  Mouse.begin();

  // 1번 서브 스위치
  pinMode(one_leftSw, INPUT);
  pinMode(one_rightSw, INPUT);

  // 2번 서브 스위치
  pinMode(two_leftSw, INPUT);
  pinMode(two_rightSw, INPUT);

      
  // 3번 서브 스위치
  pinMode(threes_leftSw, INPUT);
  pinMode(threes_rightSw, INPUT);

  // 조이스틱 매인 스위치 Input
  pinMode(joystickSW, INPUT_PULLUP);

  pinMode(joystick_X, INPUT);  // X축 Input
  pinMode(joystick_Y, INPUT);  // Y축 Input
}

void loop() {
  Mouse.move(joystick_X, joystick_Y);
}
