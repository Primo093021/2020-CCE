1. step01-1_畫出圓盤,用ellipse(圓心x,y, 寬,高) 配合void setup()及void draw()還有background()

void setup(){//設定，只做1次
  size(400,200);
}
void draw(){
  background(#6880B2);
  ellipse(50,50,80,80);
//        圓心  寬 高
}