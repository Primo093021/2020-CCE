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
