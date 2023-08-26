#include<Stepper.h>
#define step_rev 200
Stepper st(step_rev,8,9,10,11);

void setup() {
 st.setSpeed(60);

}

void loop() {
st.step(step_rev);

delay(500);

st.step(step_rev);
delay(1000);

}
