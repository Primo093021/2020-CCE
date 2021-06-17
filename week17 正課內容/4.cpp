4. step04_如果打字正確,就換下一個字母, 使用 String字串的 charAt(i) 來挑對應的字母

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