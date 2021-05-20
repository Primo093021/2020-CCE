#第13週 程式課上課內容

## 1.size() 及 background()可完成 (記得放大字型)

```C
size(1024,400);
background(237,187,200);
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week13%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/1.png?raw=true)

## 2.配合 void setup() 及 void draw() 做互動, 配合 if(mousePressed) 及 else 來換色, 記得加註解 (中文、英文都可以)

```C
void setup(){//只做一次的設定
    size(1024,400);
}
void draw(){//互動版本，每秒畫60幅
  if(mousePressed) background(255,0,255);//按下去紫色
  else background(237,187,200);//否則 變粉色
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week13%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/2.png?raw=true)

## 3.利用 void mousePressed() 來做互動, 讓 text() 可以秀出不同的點擊次數

```C
void setup(){//只做一次的設定
    size(1024,400);
}
void draw(){//互動版本，每秒畫60幅
  if(mousePressed) background(255,0,255);//按下去紫色
  else background(237,187,200);//否則 變粉色
  text(a,512,200);//畫出文字
}//目標:能畫圖，mouse按下去/移動的時候要畫點東西/做點東西
int a=0;
void mousePressed(){
  a++;
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week13%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/3.png?raw=true)

## 4.文字的大小textSize()還有文字的加法,但是中文還沒設好字型

```C
void setup(){//只做一次的設定
    size(1024,400);
}
void draw(){//互動版本，每秒畫60幅
  if(mousePressed) background(255,0,255);//按下去紫色
  else background(237,187,200);//否則 變粉色
  textSize(36);//文字的大小
  text("中文壞掉Now a is:"+a ,512,200);//畫出文字
}//目標:文字全系列都教一下!
int a=0;
void mousePressed(){
  a++;
}//目標:能畫圖，mouse按下去/移動的時候要畫點東西/做點東西
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week13%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/4.png?raw=true)

## 5.重寫新的Ctrl-N,去得到hour(),minute(),second() 再用字串加法加長起來

```C
//開新的
void setup(){
  size(1024,400);
}
void draw(){
  background(#9BD5F0);//色碼
  int s=second();//Values from 0-59
  int m=minute();//Values from 0-59
  int h=hour();//Values from 0-23
  textSize(80);
  text (h+":"+m+":"+s,100,200);
}//  數字 字串 數字 字串 數字
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week13%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/5.png?raw=true)

## 6.將秒、分、時,換算出總秒數,目標總秒數-現在總秒數,得到剩下總秒數

```C
//開新的
void setup(){
  size(1024,400);
  textFont(createFont("標楷體",80));
}
void draw(){
  background(#9BD5F0);//色碼
  int s=second();//Values from 0-59
  int m=minute();//Values from 0-59
  int h=hour();//Values from 0-23
  textSize(80);
  text (h+":"+m+":"+s,100,200);
  int total=s+ 60*m +60*60*h;//現在總秒數
  int closeH=17,closeM=40, closeS=0;
  int total2=closeS+ 60*closeM +60*60*closeH;//目標總秒數
  int ans= total2-total;
  text("剩下幾秒:"+ans,100,100);
}//  數字 字串 數字 字串 數字
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week13%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/6.png?raw=true)

## 7.把總秒數,用找零錢的方法,變出時、分、秒

```C
//開新的
void setup(){
  size(1024,400);
  textFont(createFont("標楷體",80));
}
void draw(){
  background(#9BD5F0);//色碼
  int s=second();//Values from 0-59
  int m=minute();//Values from 0-59
  int h=hour();//Values from 0-23
  textSize(80);
  text (h+":"+m+":"+s,100,200);
  int total=s+ 60*m +60*60*h;//現在總秒數
  int closeH=17,closeM=40, closeS=0;
  int total2=closeS+ 60*closeM +60*60*closeH;//目標總秒數
  int ans= total2-total;
  text("剩下幾秒:"+ans,100,100);
  int ansH=ans/60/60%60,ansM=ans/60%60,ansS=ans%60;
  text (ansH+":"+ansM+":"+ansS,100,300);
}//  數字 字串 數字 字串 數字
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week13%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/7.png?raw=true)
