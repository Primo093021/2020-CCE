2.如何用mousePressed互動方式，來產生整數的亂數

void setup(){//設定只做一次
  size(300,300);
  textSize(30);
}
void draw(){//畫圖每秒60次
  background(#F2CA73);
  text(ans,20,30);
}
void mousePressed(){//按下去就互動一次
  ans=(int)random(60);//浮點數不能直接變整數
}