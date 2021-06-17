1. step01_打字遊戲_先利用字串變數 String line來方便之後有變化。再利用 text()畫出字串

void setup(){//設定只做一次
  
}
String line="Hello";//字串
void draw(){//每秒60次
  background(#79A5EA);
  text(line,100,100);//可將字串line畫出來
  text("World",100,150);//也可把字串畫出來
}