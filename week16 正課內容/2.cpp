2. step01-2_畫出圓弧arc,參與很像ellipse()的圓心、寬高,但多了2個不明參數,我們利用fill()不同色彩來看結果,並利用mouseX來算出一個magic number

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
