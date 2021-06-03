#第15週 程式課上課內容

## 1.倒數計時,先能得到second()秒鐘,用奇偶數調背景色

```C
void setup(){//設定只做1次
  size(400,200);
}
void draw(){//畫圖，每秒60frame
  int s=second();//0..59秒
  if(s%2==0) background(#4C83AF);
  else background(#4FC4AD);
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week15%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/1.png?raw=true)

## 2.倒數計時_利用秒數、餘數、減法,做出10到0的倒數計時

```C
void setup(){
  size(400,200);
  textSize(40);//大字
}
void draw(){
  int s=second();//s會增加 0...59
  background(#4C83AF);
  //text(59-s,100,100);//59...0減少
  text(10-s%11,100,100);
}//       0...10=>10...0
//10,9,8,7...3,2,1,0 共11個數字
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week15%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/2.png?raw=true)

## 3.要安裝Processing的Sound函式庫,再寫程式,並把 tada.mp3 拉到Processing的PDE視窗,就可以聲音

```C
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
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week15%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/3.png?raw=true)

## 4.我們可用 player的isPlaying()來決定stop()或play()

```C
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
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week15%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/4.png?raw=true)

## 5.整合step01倒數計時10秒 及 step02 發出聲音,並用 isPlaying()保護一下,每10秒叫一聲tada

```C
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);//大字
  player=new SoundFile(this,"tada.mp3");
}
void draw(){
  int s=second();//s會增加 0...59
  background(#4C83AF);
  //text(59-s,100,100);//59...0減少
  text(10-s%11,100,100);
  if(10-s%11==0 && !player.isPlaying()){
    player.play();//如果有一個在播，其他不要搶進
}
}//       0...10=>10...0
//10,9,8,7...3,2,1,0 共11個數字
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week15%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/5.png?raw=true)

## 6.有同學想把程式放上網給朋友玩,要先裝p5 js 模式,再用converter轉成JavaScript,貼上即可,小心if()的大括號要補

```C
//請用Ctrl-N開新的Processing PDE介面
//再按右上角，把Java換成p5.js
//會得到空白的function setup(){...}
//再利用 processing to p5.js converter來轉
//如下，小心，if後面 一定要加大括號
//再按三角形 執行Ctrl-R
function setup(){//設定只做1次
  createCanvas(400,200);
}
function draw(){//畫圖，每秒60frame
  let s=second();//0..59秒
  if(s%2==0){
    background(76,131,175);
  }else{ 
    background(79,196,173);
  }
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week15%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/6.png?raw=true)
