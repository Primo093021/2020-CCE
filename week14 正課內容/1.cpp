1.亂數random()抽個浮點數的數字,並畫出來

//你可以再有色彩的字，mouse按右鍵
void setup(){//設定只做一次
  size(300,300);
  float ans=random(60);//亂數，會是<60的浮點數
  textSize(30);
  text(ans,20,20);//畫出ans
}
void draw(){//畫圖每秒60次

}