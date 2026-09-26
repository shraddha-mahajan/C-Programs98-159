#include<stdio.h>
int main(void)
{
    int arr[3][4] = {10,20,30,40,50};

    printf("&arr is: %d\n",&arr);              //&(1D ch naw(value) 2D address)                            //&arr is: 6422256
    printf("arr is: %d\n",arr);                //2D ch naw-> 1D cha address                                //arr is: 6422256
    printf("arr[0] is: %d\n",arr[0]);          //2D cha ->0th 1D ->cha 0th ele ch naw(address)             //arr[0] is: 6422256
    printf("arr[0][0] is: %d\n",arr[0][0]);    //2D->0th 1D->0th ele ch naw(value)                         //arr[0][0] is: 10
    printf("&arr+1 is:%d\n",&arr+1);           //&((1D ch naw(value) 2D address)+1)=> 2D size ne pudhe     //&arr+1 is:6422304
    printf("arr+1 is: %d\n",arr+1);            //2D ch naw-> 1D cha address +1 => 1D size ne pudhe         //arr+1 is: 6422272
    printf("arr[0]+1 is: %d\n",arr[0]+1);      //2D 0th -> 1D ch naw ele address +1                        //arr[0]+1 is: 6422260
    printf("arr[0][0]+1 is: %d\n",arr[0][0]+1);//2D 0th-> 1D 0th ele naw(value+1)                          //arr[0][0]+1 is: 11
    printf("arr[2] is: %d\n",arr[2]);          //2D 2nd->1D naw(ele add)                                   //arr[2] is: 6422288
    printf("arr[2]+1 is: %d\n",arr[2]+1);      //element size ne pudhe                                     //arr[2]+1 is: 6422292
    printf("arr[2][0] is: %d\n",arr[2][0]);    //2D->2nd 1D->0th ele naw(value)                            //arr[2][0] is: 0
    printf("arr[2][0]+1 is: %d\n",arr[2][0]+1);//value +1                                                  //arr[2][0]+1 is: 1
    printf("*arr is: %d\n",*arr);              //2D->1D naw(ele address)                                   //*arr is: 6422256
    printf("**arr is: %d\n",**arr);            //2D-> 1D->ele naw (value)                                  //**arr is: 10
    printf("*arr+1 is: %d\n",*arr+1);          //element size ne pudhe                                     //*arr+1 is: 6422260
    printf("**arr+1 is: %d\n",**arr+1);        //value +1                                                  //**arr+1 is: 11
    printf("*arr+2 is: %d\n",*arr+2);          //ele size ne 2 da pudhe                                    //*arr+2 is: 6422264
    printf("arr+2 is: %d\n",arr+2);            //1D size ne 2 da pudhe                                     //arr+2 is: 6422288
    printf("*(arr+2) is: %d\n",*(arr+2));      // 2D ch naw (1D add) 1D ch naw (ele add)                   //*(arr+2) is: 6422288 
    printf("*(arr+2)+3 is: %d\n",*(arr+2)+3);  //*(arr+2)+3 is: 6422300
    printf("*(*(arr+2)+3) is: %d\n",*(*(arr+2)+3));//*(*(arr+2)+3) is: 0 
    

    return 0;
}