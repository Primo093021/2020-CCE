6. step06_修改step05的程式,讓keyPressed()裡不是直接改x的座標,而是改vx的速度,速度再等速在void draw()裡面移動位置,體驗會更好

void setup(){
  size(400,200);
  textSize(40);
}
float x=100,y=100,vx=0,vy=0;
void draw(){//每秒60次，等速、順
  background(#79A5EA);
  rect(x,y,50,50);//畫方塊
  x+=vx;//每秒60次，等速、順
}//Q:需求，左鍵、右鍵
void keyPressed(){
  if(keyCode==LEFT) vx=-1;
  if(keyCode==RIGHT) vx=+1;
}
void keyReleased(){
  vx=0;
}