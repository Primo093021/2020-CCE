3. step03_打字遊戲,利用簡單的if(判斷)來決定 win是0還是1,並秀出對應的畫面

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