#第16週 程式課上課內容

## 1.step01-1_畫出圓盤,用ellipse(圓心x,y, 寬,高) 配合void setup()及void draw()還有background()

```C
void setup(){//設定，只做1次
  size(400,200);
}
void draw(){
  background(#6880B2);
  ellipse(50,50,80,80);
//        圓心  寬 高
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week16%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/1.png?raw=true)

## 2.step01-2_畫出圓弧arc,參與很像ellipse()的圓心、寬高,但多了2個不明參數,我們利用fill()不同色彩來看結果,並利用mouseX來算出一個magic number

```C
void setup(){//設定，只做1次
  size(400,200);
}
void draw(){//畫，每秒畫60次
  background(#6880B2);
  fill(255);
  ellipse(50,50,80,80);
//        圓心  寬 高
  fill(255,0,0);
  float stop=mouseX/50.0;
  text(stop,100,100);//畫出字
  arc(50,50, 80,80,   0,   stop);//畫出 圓弧
  //  圓心    寬高   開始 結束
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week16%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/2.png?raw=true)

## 3. step01-3_嘗試arc()的參數,重點在了解 start 的意思,它可以讓圓弧轉動

```C
void setup(){//設定，只做1次
  size(400,200);
}
void draw(){//畫，每秒畫60次
  background(#6880B2);
  fill(255);
  ellipse(50,50,80,80);
//        圓心  寬 高
  fill(255,0,0);
  float start=mouseX/50.0;
  textSize(40);
  text(start,100,100);//畫出字
  arc(50,50, 80,80,   0+start,0.1+start);//畫出 圓弧
  //  圓心    寬高      開始     結束
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week16%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/3.png?raw=true)

## 4.step02-1_利用for迴圈,來畫出24片細細的小片,換算出角度,換算出shift位移量,再利用餘數來決定色彩,完成會轉動的大轉盤.zip

```C
void setup(){//設定，只做1次
  size(400,200);
}
void draw(){//畫，每秒畫60次
  background(#6880B2);
  fill(255);
  ellipse(100,100,180,180);
//          圓心  寬 高
  fill(255,0,0);
  float start=mouseX/50.0;
  for(int i=0;i<24;i++){
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#FA1427);
    if(i%3==2) fill(255);
    arc(100,100, 180,180,   shift+0+start,shift+PI/12+start);//畫出 圓弧
  //     圓心        寬高      開始            結束
  }
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week16%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/4.png?raw=true)

## 5. step02-2_利用if(i==0)來挑出最前面的i,把它設成橘色.zip

```C
void setup(){//設定，只做1次
  size(400,200);
}
void draw(){//畫，每秒畫60次
  background(#99E3C2);
  fill(255);
  ellipse(100,100,180,180);
//          圓心  寬 高
  fill(255,0,0);
  float start=mouseX/50.0;
  for(int i=0;i<24;i++){
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#99C1E3);
    if(i%3==2) fill(255);
    if(i==0)  fill(#FF8243);
    arc(100,100, 180,180,   shift+0+start,shift+PI/12+start);//畫出 圓弧
  //     圓心        寬高      開始            結束
  }
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week16%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/5.png?raw=true)

## 6. step02-3_我們改利用外面的global變數float start=0,再於draw()裡,if(start比10小)start+=0.01來讓它轉動

```C
void setup(){//設定，只做1次
  size(400,200);
}
float start=0;
void draw(){//畫，每秒畫60次
  background(#99E3C2);
  fill(255,0,0);
  if(start<10) start+=0.01;
  fill(255); text(start,200,150);
  for(int i=0;i<24;i++){
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#99C1E3);
    if(i%3==2) fill(255);
    if(i==0)  fill(#FF8243);
    arc(100,100, 180,180,   shift+0+start,shift+PI/12+start);//畫出 圓弧
  //     圓心        寬高      開始            結束
  }
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week16%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/6.png?raw=true)

## 7. step03-1_利用速度v來讓start位置會改變, 只要速度夠快,就繼續轉 start += v;  v變0.99倍

```C
void setup(){//設定，只做1次
  size(400,200);
}
float start=0,v=0.07;//v是旋轉的速度
void draw(){//畫，每秒畫60次
  background(#99E3C2);
  if(v>0.001){//速度很慢時，就不要再轉動了
  start+=v;//位置、速度、加速度(位置會加上速度)
  v*=0.99;//位置、速度、加速度(速度會加上加速度)
  }//if(start<10) start+=0.01;//float start=mouseX/50.0;
  if(start<10) start+=0.01;
  fill(255); text(start,200,150); text(v,200,170);
  for(int i=0;i<24;i++){
    float shift=i*PI/12;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#99C1E3);
    if(i%3==2) fill(255);
    if(i==0)  fill(#FF8243);
    arc(100,100, 180,180,   shift+0+start,shift+PI/12+start);//畫出 圓弧
  //     圓心        寬高      開始            結束
  }
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week16%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/7.png?raw=true)

## 8. step03-2_為了讓每次轉動都有變化,我們在mousePressed()裡,利用random()亂數來決定一開始的速度,速度不同,轉動的結果就會不同

```C
void setup(){//設定，只做1次
  size(400,200);
}
float start=0,v=0.07;//v是旋轉的速度
void mousePressed(){
  v=random(1);
}
void draw(){//畫，每秒畫60次
  background(#99E3C2);
  if(v>0.001){//速度很慢時，就不要再轉動了
  start+=v;//位置、速度、加速度(位置會加上速度)
  v*=0.99;//位置、速度、加速度(速度會加上加速度)
  }//if(start<10) start+=0.01;//float start=mouseX/50.0;
  if(start<10) start+=0.01;
  fill(255); text(start,200,150); text(v,200,170);
  for(int i=0;i<24;i++){
    float shift=i*PI/12;
    if(i%3==0) fill(0);
    if(i%3==1) fill(#99C1E3);
    if(i%3==2) fill(255);
    if(i==0)  fill(#FF8243);
    arc(100,100, 180,180,   shift+0+start,shift+PI/12+start);//畫出 圓弧
  //     圓心        寬高      開始            結束
  }
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week16%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/8.png?raw=true)
