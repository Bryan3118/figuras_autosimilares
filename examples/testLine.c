#include "../turtlec.h"

void Tree2(Turtle *t,float len, int level );
void curva(Turtle *t, float len, int level );
void ramas(Turtle *t, float len, int level );
void tree3(Turtle *t, float len, int level);
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
  //Tree2(t, 100.0, 5);
  //curva(t, 200.0, 2);
  //ramas(t, 200.0, 3);
  tree3(t, 100, 3);
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
void Tree ( Turtle * t, float len , int level ) {
 if( level == 0 || len < 5){
 turtleForward(t, len);
 turtleBackward(t, len); 
 return ;
 }
 turtleForward(t, len);
 turtleLeft(t, 30.0);
 Tree(t, len / 2, level - 1);
 turtleRight(t, 60.0);
 Tree(t, len / 2, level - 1);
 turtleLeft(t, 30.0);
 turtleBackward(t, len);
}

void Tree2 ( Turtle * t, float len , int level ) {
 if( level == 0 || len < 5){
 turtleForward(t, len);
 turtleBackward(t, len); 
 return ;
 }
 if (level == 5)
  turtleSetColor ( t, 200.0 , 12.0 , 0.0) ; 
 else
  turtleSetColor ( t, 0.0 , 200.0 , 0.0) ;
 turtleForward(t, len);
 turtleLeft(t, 20.0);
 Tree2(t, len * 0.6, level - 1);
 turtleRight(t, 40.0);
 Tree2(t, len * 0.6, level - 1);
 turtleLeft(t, 20.0);
 turtleBackward(t, len);
 if (level == 4)
  turtleSetColor ( t, 200.0 , 12.0 , 0.0) ;  
}
void curva(Turtle *t, float len, int level){
 if (level == 0){
  turtleForward(t, len);
  return ;
 }
 turtleLeft(t, 45.0);
 curva(t, len / 2, level - 1);
 turtleRight(t, 90.0);
 curva(t, len / 2, level - 1);
 turtleLeft(t, 45.0);
}
void ramas(Turtle *t, float len, int level){
 if( level == 0 || len < 5){
  turtleForward(t, len);
  turtleBackward(t, len);
  return ;
 }
 turtleForward(t, len);
 turtleLeft(t, 30.0);
 int val = 1;
 if (val == 1) 
   ramas(t, len / 2, level - 1);
 turtleRight(t, 60.0);
 val = 2;
 if (val == 2) 
   ramas(t, (len / 2 )+ 20,level - 1);
 turtleLeft(t, 30.0);
 turtleBackward(t, len);
}
void tree3(Turtle *t, float len, int level){
 if (level == 0 || len < 5){
  turtleForward(t , len);
  turtleBackward(t ,len);
  return ;
 }
 turtleForward(t, len);
 turtleLeft(t, 30.0);
 tree3(t, len / 2, level - 1);
 turtleRight(t, 30.0);
 tree3(t, len / 2, level - 1);
 turtleRight(t, 30.0);
 tree3(t, len / 2, level - 1);
 turtleLeft(t, 30.0);
 turtleBackward(t ,len); 
}
