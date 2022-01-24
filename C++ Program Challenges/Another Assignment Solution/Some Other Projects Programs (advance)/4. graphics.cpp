#include<windows.h>
#include<graphics.h>

using namespace std;
int main(){
 DWORD screenWidth = GetSystemMetrics(SM_CXSCREEN);
 DWORD screenHeight = GetSystemMetrics(SM_CXSCREEN);
 initwindow(screenWidth,screenHeight,"",-3,-3);
 
 int rectPosX2=350, rectPosX = 0, cir1PosX=50,cir2PosX=400,speed=10,rtop1=300,rtop2=400,c_axic=511,c2y_axic=511,rb_xaxic=511,rb2_axic=511;
 int page =0;
 
 while(1)
 {
  setactivepage(page);
  setvisualpage(1-page);
   
  cleardevice();
   
 setcolor(YELLOW);
 for(int i=0;i<=2;i++){
 
  rectangle(rectPosX+i,rtop1+i,rectPosX+350-i,rb_xaxic-i);
  rectangle(rectPosX2+i,rtop2+i,rectPosX+500+i,rb2_axic-i);}
 setcolor(RED);
 for(int i=0;i<=30;i++)
 {
      circle(cir1PosX,c_axic,i);
     circle(cir2PosX,c2y_axic,i);
    }
 
 setcolor(GREEN);
    for(int i=670;i<=689;i++) line(0,670,6000 ,670);
 if(GetAsyncKeyState(VK_LEFT))
    {
     rectPosX2 -= speed;
     rectPosX-= speed;
     cir1PosX-= speed;
     cir2PosX-= speed;
   
 } 
 else if(GetAsyncKeyState(VK_RIGHT))
 {
   
     rectPosX2 += speed;
  rectPosX += speed;
  cir1PosX += speed;
  cir2PosX += speed;
  
 }
  else if(GetAsyncKeyState(VK_DOWN))
 {
  rb_xaxic += 20;
  rb2_axic += 20;
     rtop1 += 20;
  rtop2 += 20;
  c_axic += 20;
     c2y_axic += 20;
 }
 
   else if(GetAsyncKeyState(VK_UP))
 {
  rb_xaxic -= 20;
  rb2_axic -= 20;
  c2y_axic -= 20;
     c_axic -= 20;
     rtop1 -= 20;
  rtop2 -= 20;
 }
if (cir1PosX==2000){
  return 0;
}
 page=1 -page;

 

}
 getch();
 
 return 0;
 
}
