#include<stdio.h>
#include<stdlib.h>

int size,choice,element,i;
struct stack{
   int arr[100];
   int top;
   }st;
//Add element
void push(int element)
{
  if((st.top) == (size -1))
    printf("\nStack is full");
  else
  {


    st.top++;
    printf("\nEnter your value:");
    scanf("%d",&element);
    st.arr[st.top] = element;
  }
}

//Remove element
int pop()
{
  if((st.top)== -1)
    {
    printf("\nStack is empty");
    }
  else
    {
    int out;
    out = st.arr[st.top];
    st.top--;
    return out;
    }


}

//peek

int peek()
{
    int display;
    display  = st.arr[st.top];
    return display;
}

//Display stack

void display()
{   if((st.top)>=0)
    {
        printf("\n\nElement in the stack");
        for(int i=st.top; i>=0; i--)
        printf("\n%d",st.arr[i]);
    }

    else
    printf("Stack is empty");

}




int main()
{
 st.top = -1;
 printf("Enter a stack size less than 100:");
 scanf("%d",&size);
 printf("\n*****Strack Operation*****");
 printf("\n\n\t1.PUSH \n\t2.POP \n\t3.PEEK \n\t4.DISPLAY \n\t5.EXIT \n\n");


 do{

    printf("\nEnter your choice:");
    scanf("%d", &choice);

    switch(choice){
      case 1:
        {
           push(element);
           break;
        }
      case 2:
      {
          //pop

          printf("\nRemove element is:%d",pop());
          break;

      }
      case 3:
      {
          //peek

          printf("\nTop element is:%d",peek());
          break;
      }
      case 4:
      {
          //display funtion
          display();
          break;
      }
      case 5:
      {
          //exit funtion
          printf("\n\t.....EXIT.....");
          break;
      }
      default:
         printf("\nYour Enter is wrong.!");
    }





 }while(choice !=5);





 return 0;
 }


