#include <stdio.h>
#include <stdlib.h>



  char Nrz_Manchester(char *bit)
    {
      char *bit2;

      int i=0, j =0;

      bit2 = malloc(sizeof(char) * DIM);

          for( i < DIM; i++)
          { 
          	if (biti] == '0')
          	{
          		bit2[j] = '0';
              j++;
          		bit2[j] = '1';
          		j++;

            }
          	else if(bit[i] == '1')
          	{
          		bit2[j] = '1';
                  j++;
          		bit2[j] = '0';
          		  j++;
         	}
        }
      bit2[j]='\0';
     return bit2;
    }



//Bipolar-AMI para Peseudo-ternário

char Ami_Pseudo_Ternario (char *bit)
{
  char *bit2;
  int i;
  int j=0, d= 0;
  bit2 = malloc(sizeof(char) * DIM);

   for (i = 0; i < DIM; i++)
   {
       if (bit[i]=='+' && bit[i+1]=='1')
       {
           bit2[j] = '0';
           j++;
           i++;
       }
       else if (bit[i]=='0' && d== 0 )
       {
            bit2[j]='+';
          j++;
            bit2[j]='1';
          j++;
          d= 1;
       }
        else if (bit[i]=='0' d== 1)
        {
          bit2[j]='-';
          j++;
          bit2[j]='1';
          j++;
          d= 0;  
        }
        else if (bit[i]=='-'&& bit[i+1]=='1')
        {
           bit2[j] = '0';
           j++;
           i++;   
        }
   }  
  bit2[j]='\0';
  return bit2;
}



// Pseudo-ternário para Polar NRZ

char Pseudo_NRZ(char *bit)
{
 
  char *bit2;
  int i=0, j=0;
  bit2 = malloc(sizeof(char) * DIM);

   for (; i < MAXX; i++)
   {
        if (bit[i]=='+' && bit[i+1]=='1')
        {
          bit2[j]='0';
          j++;
          i++;
        }
        else if (bit[i] == '-' && bit[i+1]=='1')
        {
           bit2[j]='0';
           j++;
           i++; 
        }
        else if (bit[i] == '0' )
        {
            bit2[j]='1';
            j++;
        }
   
        
     
    }
  bit2[j]='\0';
  return bit2;
}

//Manchester para Bipolar-AMI

char Manchester_AMI (char *bit)
{
  char *bit2;
  int i, j=0, d=0;
  bit2 = malloc(sizeof(char) * DIM);

  for (i = 0; i < DIM; i++)
  {
        if (bit[i]== '0' && bit[i+1]== '1')
          {
            bit2[j]='0';
            j++;
            i++;
          }
         else if (bit[i]== '1' && bit[i+1]== '0'&& d == 0)
         {
            bit2[j]='+';
            j++;
            bit2[j]='1';
            j++;
            d = 1;
            i++;
         }
         else if (bit[i]== '1' && bit[i+1]== '0'&& d == 1)
         {
          bit2[j]='-';
          j++;
          bit2[j]='1';
          j++;
          d = 0;
         }
    }
  bit2[j]='\0';
  return bit2;
}


int main(int argc, char const *argv[])
{
  
  return 0;
}