8. step08_在keyPressed()裡,加上if(判斷)看是小寫、大寫,就會變長 line = line+key; 如果是 BACKSPACE就會把line變短

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
  int len=line.length();//原字的長度
  if(key>='a' && key<='z') line=line+key;//小寫鍵
  if(key>='A' && key<='Z') line=line+key;//大寫鍵
  if(key==ENTER){   }//比對字是否正確
  if(key==BACKSPACE && len>0) line=line.substring(0,len-1);//倒退刪掉!!
}//Q:如何把打錯的字，倒退刪掉? A:判斷BACKSPACE時，要把line變短