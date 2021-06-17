7. step07_整合第1節課+第2節課,我們利用String line 會在 void keyPressed()時慢慢變長 line = line + key;

String A="mother";
String line="";
void setup(){
  size(400,300);
  textSize(40);
}
void draw(){//每秒60次，等速、順
  background(0);
  text(A,100,100);
  text(line+"|",100,150);
}
void keyPressed(){
  line=line+key;
}