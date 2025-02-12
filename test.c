//test.c
#define   LEDRADDRESS   (*(volatile char *)  0x8000)
#define   SWADDRESS   (*(volatile char *)  0x8004)
#define   HEXADDRESS   (*(volatile unsigned int *)  0x8010)
#define   UARTSRADDRESS   (*(volatile char *)  0x8068)
#define   UARTCRADDRESS   (*(volatile char *)  0x8064)
#define   TXDATAADDRESS   (*(volatile char *)  0x8060)
#define   RXDATAADDRESS   (*(volatile char *)  0x806C)

void tx_write (unsigned c){
  while(UARTSRADDRESS&0x01);
  TXDATAADDRESS = c;
}

char rx_read (void){
  char c;
  while((UARTSRADDRESS&0x02) != 0x02);
  c = RXDATAADDRESS;
}

int main (void){
  int i = 0;
  char c;
  UARTCRADDRESS = 0x03; //enable RX and TX
  while (1){
    c = rx_read();
    HEXADDRESS = c; 
    tx_write (c);
    LEDRADDRESS = i++;
  }
  return 0;  
}

