#include "lib/include.h"

int main(void)
{
	 I2C3_Init();
	 OLED_Init();
	 OLED_Clear();
   Configurar_PLL(20000000);
   Configurar_GPIO();
    
    // variables for counting
    int count = 0;
    //float dec = 0.0;

        while ( 1 ) {
            
            /////////////////////
            // Strings
            ///////////////////
        
    
             /////////////////////
            // Strings
            ///////////////////
            
             OLED_YX(0, 1);
             //OLED_Write_String( "OLED SSD1306" );
             OLED_Write_String( "Cruz Hector" );
                             Delay_ms(1000);

             OLED_YX(1, 1);
             //OLED_Write_String ("TM4C123");
             OLED_Write_String ("Micros");
                         Delay_ms(1000);

             OLED_YX(2, 0);
             //OLED_Write_String ("TM4C123");
             OLED_Write_String ("Grupo");
                         Delay_ms(1000);

             OLED_YX(3, 0);
             //OLED_Write_String ("TM4C123");
             OLED_Write_String ("41");
                         Delay_ms(1000);

            /////////////////////
            // Integer Count
            ////////////////////
            
            
                        
            //OLED_Clear();
            
            Delay_ms(100);
            
          
   }
}