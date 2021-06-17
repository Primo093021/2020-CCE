5.step05_第2節課,開新的程式, 利用 void keyPressed() 的時機,看 keyCode值是RIGHT或LEFT來讓方塊的座標可往右、往左移動

void setup(){
  size(400,200);
  textSize(40);
}
int x=100,y=100;
void draw(){
  background(#79A5EA);
  rect(x,y,50,50);//畫方塊
}//Q:需求，左鍵、右鍵
void keyPressed(){
  if(keyCode==LEFT) x-=10;
  if(keyCode==RIGHT) x+=10;
}