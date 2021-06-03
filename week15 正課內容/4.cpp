4.我們可用 player的isPlaying()來決定stop()或play()

import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player=new SoundFile(this,"bell.mp3");
}
void draw(){
  background(#4C83AF);
}
void mousePressed(){
  if(player.isPlaying()){
  player.stop();
}else{
  player.play();
}
}