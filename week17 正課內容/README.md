#第17週 程式課上課內容

## 1.step01_打字遊戲_先利用字串變數 String line來方便之後有變化。再利用 text()畫出字串

```C
void setup(){//設定只做一次
  
}
String line="Hello";//字串
void draw(){//每秒60次
  background(#79A5EA);
  text(line,100,100);//可將字串line畫出來
  text("World",100,150);//也可把字串畫出來
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week17%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/1.png?raw=true)

## 2.step02_打字遊戲,了解字串可以做+來越接越長, char c是個字母, key也是個字母,也可以+接起來變長

```C
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
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week17%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/2.png?raw=true)


## 3. step03_打字遊戲,利用簡單的if(判斷)來決定 win是0還是1,並秀出對應的畫面

```C
void setup(){
  size(400,200);
 textSize(40); 
}
char c='9';
int win=0;//0:還沒win, 1:win
void draw(){
  background(#79A5EA);
  text("Press:"+c,100,100);
  text("You :"+key,100,150);
  if(c==key) win=1;
  else win=0;
  if(win==1) text("You Win!",100,50);
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week17%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/3.PNG?raw=true)

## 4. step04_如果打字正確,就換下一個字母, 使用 String字串的 charAt(i) 來挑對應的字母

```C
void setup(){
  size(400,200);
 textSize(40); 
}
char c='9';
String ans="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";//Java的字串
int win=0;//0:還沒win, 1:win
void draw(){
  background(#79A5EA);
  text("Press:"+c,100,100);
  text("You :"+key,100,150);
  if(c==key) win=1;
  else win=0;
  if(win==1) {
    text("You Win!",100,50);
    int i=int(random(26+26));
    c=ans.charAt(i);
  }
}
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week17%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/4.png?raw=true)

## 5.step05_第2節課,開新的程式, 利用 void keyPressed() 的時機,看 keyCode值是RIGHT或LEFT來讓方塊的座標可往右、往左移動

```C
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
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week17%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/5.png?raw=true)

## 6. step06_修改step05的程式,讓keyPressed()裡不是直接改x的座標,而是改vx的速度,速度再等速在void draw()裡面移動位置,體驗會更好

```C
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
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week17%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/6.png?raw=true)

## 7. step07_整合第1節課+第2節課,我們利用String line 會在 void keyPressed()時慢慢變長 line = line + key;

```C
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
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week17%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/7.png?raw=true)

## 8. step08_在keyPressed()裡,加上if(判斷)看是小寫、大寫,就會變長 line = line+key; 如果是 BACKSPACE就會把line變短

```C
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
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week17%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/8.png?raw=true)
