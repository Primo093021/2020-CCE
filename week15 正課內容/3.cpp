3.要安裝Processing的Sound函式庫,再寫程式,並把 tada.mp3 拉到Processing的PDE視窗,就可以聲音

import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player=new SoundFile(this,"tada.mp3");
}
void draw(){
  background(#4C83AF);
}
void mousePressed(){
  player.play();
}