#include "../turtlec.h"

void ajedrez(Turtle *t,int len, int count );
int main(void){
  TurtleApp *app = turtleAppCreate(400, 300, "Test Line");

  if(app == NULL)
    return 1;

  Turtle *t = turtleAppGetTurtle(app);

  turtlePenUp(t);
  turtleGoTo(t, 50.0f, 200.0f);
  turtlePenDown(t);

  turtleSetColor(t, 255, 100, 0);
  turtleSetSpeed(t, 5.0f);
  //turtleForward(t, 300.0f);
  ajedrez(t, 200.0, 4);
  turtleAppRun(app);
  turtleAppDestroy(app);
  return 0;
}
void line(Turtle *t, int len, int count){
 if(count == 0){
  turtleForward(t, len);
  return ;
 }
 line(t, len / 2.0, count - 1);
 turtleLeft(t, 60.0);
 line(t, len / 2.0, count - 1);
 turtleRight(t, 60.0);
}
void funcion(Turtle *t, int len, int count){
 if( count == 0){
  turtleForward(t, len);
  return ;
 }
    turtleForward(t, len / 2.0);
    turtleLeft(t, 45.0);
    turtleForward(t, len / 2.0);
    funcion(t, len / 2.0, count - 1);
}
void problema(Turtle *t, int len){

    if(len <= 0){
        return;
    }

    turtleForward(t, len);

    turtleLeft(t, 90.0);

    problema(t, len - 10);
}
void serpiente(Turtle *t, int len ,int count){
 if (count == 0){
  return ;
 }
 turtleForward(t, len);
 turtleLeft(t, 45.0);
 turtleForward(t, len);
 turtleRight(t, 90.0);
 serpiente( t, len - 10, count - 1);

}
void ajedrez(Turtle *t,int len, int count){
 if (count == 0) {
  turtleForward(t, len);
  return;
 }
 ajedrez(t, len, count - 1);
 turtleRight(t, 90.0);
}
