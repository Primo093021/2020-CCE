2. step02_打字遊戲,了解字串可以做+來越接越長, char c是個字母, key也是個字母,也可以+接起來變長

void setup(){//設定只做一次
  size(400,200);
  textSize(40);
}
String line="Hello";//字串
char c='9';
void draw(){//每秒60次
  background(#79A5EA);
  text(line+c+100,100,100);//可將字串line畫出來
  text("World:"+key,100,150);//也可把字串畫出來
}//在這裡我們發現，字串的+ 其實是越接越長!!
//key 會對應你最後按下的鍵盤的鍵(字母、數、符號)
