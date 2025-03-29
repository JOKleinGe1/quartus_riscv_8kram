//test.c
#define   LEDRADDRESS   (*(volatile char *)  0x8000)
#define   SWADDRESS   (*(volatile char *)  0x8004)
#define   HEXADDRESS   (*(volatile unsigned int *)  0x8010)

int main (void){
  int i = 0;
  while (1){
    HEXADDRESS = SWADDRESS; 
    LEDRADDRESS = (i++)>>15;
  }
  return 0;  
}
