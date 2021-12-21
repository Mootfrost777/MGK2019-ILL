#include <Adafruit_NeoPixel.h>                        // подключаем библиотеку
#define PIN_a 6                                       // Определяем переменную PIN_a. Это 6 выход, куда подцеплена лента 
#define NUMPIXELS 60                                  // Число светодиодов в ленте. 12 отрезков по 5 диодов
#define NUM 10
#define NUM1_N 0
#define NUM1_K 5
#define NUM2_N 5
#define NUM2_K 10 
#define NUM3_N 10
#define NUM3_K 15
#define NUM4_N 15
#define NUM4_K 20
#define NUM5_N 20
#define NUM5_K 25
#define NUM6_N 25
#define NUM6_K 30
#define NUM7_N 30
#define NUM7_K 35
#define NUM8_N 35
#define NUM8_K 40
#define NUM9_N 40
#define NUM9_K 45
#define NUM10_N 45
#define NUM10_K 50
#define NUM11_N 50
#define NUM11_K 55
#define NUM12_N 55
#define NUM12_K 60
int val;                                         //
int led; 
Adafruit_NeoPixel strip_a=Adafruit_NeoPixel(NUMPIXELS,PIN_a, NEO_GRB + NEO_KHZ800); // В последнем параметре тип светодиодов
void setup() 
{                                        
  Serial.begin(9600);
  strip_a.begin();                                      // Инициализируем библиотеку Adafruit_NeoPixel
  strip_a.setBrightness(50);                            // яркость от 0 до 255 
  strip_a.clear();                                      // очистить
  strip_a.show();                                       // передает команду на включение всем пикселям 
}
void loop()
{      
 if(Serial.available())
 {
  val=Serial.read();
  //
//При символе "0" выключаем все
  if(val=='0')
   {
     for(int i=0;i<NUMPIXELS; i=i+1)   
      {  
           strip_a.setPixelColor(i,strip_a.Color(0,0,0));         // выключаем все цвета             
           strip_a.show();                                        // зажигаем светики   
           delay(100);                                            // задержка 1000 мс, т.е. обновляем 2077 светодиодов в секунду        
      }     
   }
  // 
//При символе "5" выключаем все
 // if(val=='5')
 //  {
 //          strip_a.setPixelColor(NUM,strip_a.Color(100,0,0));     // выключаем все цвета             
 //          strip_a.show();                                        // зажигаем светики   
 //  }     
   // 
  //При символе "1" включаем 1 отрезок ленты красным
  if(val=='1')
   {
     for(int i=NUM1_N;i<NUM1_K; i=i+1)   
      {  
           strip_a.setPixelColor(i,strip_a.Color(100,0,0));       // 1 светодиод красным цветом
           strip_a.show();                                        // зажигаем светики
                                //        delay(100);                                            // задержка 1000 мс, т.е. обновляем 20 светодиодов в секунду    
                                //        for(int i=NUM1_N;i<NUM1_K; i=i+1)  
                                //        {
                                //          strip_a.setPixelColor(i,strip_a.Color(0,0,0));       // гасим светодиод
                                //          strip_a.show();                                      // зажигаем светики
                                //        }
                                //          if(i==NUM1_N)
                                //           led=NUM1_K;   
                                //          else
                                //           led--; 
                                //          strip_a.setPixelColor(led,strip_a.Color(0,0,0));       // гасим светодиод    
                                //          strip_a.show();                                      // зажигаем светики  
             delay(100);                                            // задержка 1000 мс, т.е. обновляем 2077 светодиодов в секунду        
      }
   }
 //
 //При символе "2" включаем 2 отрезок ленты красным
  if(val=='2')
   {                   
     for(int i=NUM2_N;i<NUM2_K; i=i+1)   
      {  
           strip_a.setPixelColor(i,strip_a.Color(100,0,0));         // 2 светодиод красным цветом
           strip_a.show();                                          // зажигаем светики
           delay(100);                                              // задержка 1000 мс, т.е. обновляем 20 светодиодов в секунду    
      }
    }
//
//При символе "3" включаем 3 отрезок ленты красным
  if(val=='3')
   {
    for(int i=NUM3_N;i<NUM3_K; i=i+1)   
      {  
           strip_a.setPixelColor(i,strip_a.Color(100,0,0));         // 1 светодиод красным цветом
           strip_a.show();                                          // зажигаем светики
           delay(100);                                              // задержка 1000 мс, т.е. обновляем 20 светодиодов в секунду    
      }
    }
//
//При символе "4" включаем 4 отрезок ленты синим
  if(val=='4')
   {     
     for(int i=NUM4_N;i<NUM4_K; i=i+1)   
      {  
           strip_a.setPixelColor(i,strip_a.Color(100,0,0));         //3 светодиод синим цветом
           strip_a.show();                                          // зажигаем светики
           delay(100);                                              // задержка 1000 мс, т.е. обновляем 20 светодиодов в секунду    
      }
    }
//  
//При символе "5" включаем 5 отрезок ленты синим
  if(val=='5')
   {     
     for(int i=NUM5_N;i<NUM5_K; i=i+1)   
      {  
           strip_a.setPixelColor(i,strip_a.Color(100,0,0));         //3 светодиод синим цветом
           strip_a.show();                                          // зажигаем светики
           delay(100);                                              // задержка 1000 мс, т.е. обновляем 20 светодиодов в секунду    
      }
    }
//  
//При символе "6" включаем 6 отрезок ленты синим
  if(val=='6')
   {     
     for(int i=NUM6_N;i<NUM6_K; i=i+1)   
      {  
           strip_a.setPixelColor(i,strip_a.Color(100,0,0));         //3 светодиод синим цветом
           strip_a.show();                                          // зажигаем светики
           delay(100);                                              // задержка 1000 мс, т.е. обновляем 20 светодиодов в секунду    
      }
    }
//  
//При символе "7" включаем 7 отрезок ленты синим
  if(val=='7')
   {     
     for(int i=NUM7_N;i<NUM7_K; i=i+1)   
      {  
           strip_a.setPixelColor(i,strip_a.Color(0,0,100));         //3 светодиод синим цветом
           strip_a.show();                                          // зажигаем светики
           delay(100);                                              // задержка 1000 мс, т.е. обновляем 20 светодиодов в секунду    
      }
    }
//  
//При символе "8" включаем 8 отрезок ленты синим
  if(val=='8')
   {     
     for(int i=NUM8_N;i<NUM8_K; i=i+1)   
      {  
           strip_a.setPixelColor(i,strip_a.Color(0,0,100));         //3 светодиод синим цветом
           strip_a.show();                                          // зажигаем светики
           delay(100);                                              // задержка 1000 мс, т.е. обновляем 20 светодиодов в секунду    
      }
    }
//  
//При символе "9" включаем 9 отрезок ленты синим
  if(val=='9')
   {     
     for(int i=NUM9_N;i<NUM9_K; i=i+1)   
      {  
           strip_a.setPixelColor(i,strip_a.Color(0,0,100));         //3 светодиод синим цветом
           strip_a.show();                                          // зажигаем светики
           delay(100);                                              // задержка 1000 мс, т.е. обновляем 20 светодиодов в секунду    
      }
    }
//  
//При символе "10" включаем 10 отрезок ленты синим
  if(val=='10')
   {     
     for(int i=NUM10_N;i<NUM10_K; i=i+1)   
      {  
           strip_a.setPixelColor(i,strip_a.Color(0,0,100));         //3 светодиод синим цветом
           strip_a.show();                                          // зажигаем светики
           delay(100);                                              // задержка 1000 мс, т.е. обновляем 20 светодиодов в секунду    
      }
    }
//  
//При символе "11" включаем 11 отрезок ленты синим
  if(val=='11')
   {     
     for(int i=NUM11_N;i<NUM11_K; i=i+1)   
      {  
           strip_a.setPixelColor(i,strip_a.Color(0,0,100));         //3 светодиод синим цветом
           strip_a.show();                                          // зажигаем светики
           delay(100);                                              // задержка 1000 мс, т.е. обновляем 20 светодиодов в секунду    
      }
    }
//  
//При символе "12" включаем 12 отрезок ленты синим
  if(val=='12')
   {     
     for(int i=NUM12_N;i<NUM12_K; i=i+1)   
      {  
           strip_a.setPixelColor(i,strip_a.Color(0,0,100));         //3 светодиод синим цветом
           strip_a.show();                                          // зажигаем светики
           delay(100);                                              // задержка 1000 мс, т.е. обновляем 20 светодиодов в секунду    
      }
    }
//  
  }
//  delay(100);                                              // задержка 1000 мс, т.е. обновляем 20 светодиодов в секунду    
 } 
