#include<stdio.h>
int main(void)
{
    int arr[3][2][4] = {10,20,30,40,50,60,70,80,90};

    printf("arr[0] is: %d\n",arr[0]);                //3D->0th 2D naw(ele add)                       //arr[0] is: 6422208
    printf("arr[0][0] is: %d\n",arr[0][0]);           //3D->0th 2D->0th 1D ch naw(ele add)          //arr[0][0] is: 6422208
    printf("arr[0][0][0] is: %d\n",arr[0][0][0]);    //3D-> 0th 2->0th 1D->0th ele ch naw(value)    //arr[0][0][0] is: 10

    printf("arr[0]+1 is: %d\n",arr[0]+1);           //1D size ne pudhe                             //arr[0]+1 is: 6422224
    printf("arr[0][0]+1 is: %d\n",arr[0][0]+1);     //ele size ne pudhe                            //arr[0][0]+1 is: 6422212
    printf("arr[0][0][0]+1 is: %d\n",arr[0][0][0]+1);//3D-> 0th 2->0th 1D->0th ele ch naw(value) + 1   //arr[0][0][0]+1 is: 11

    printf("arr[1] is: %d\n",arr[1]);                //3D ch-> 1st 2D ch->naw 1D cha ->add         //arr[1] is: 6422240
    printf("arr[1][0] is: %d\n",arr[1][0]);          //3D-> 1st 2D ch naw 1D ele(add)              //arr[1][0] is: 6422240
    printf("arr[1][0][0] is: %d\n",arr[1][0][0]);    //3D-> 1st 2D cha-> 0th 1D cha->0th ele naw(value) //arr[1][0][0] is: 90

    printf("arr[1]+1 is: %d\n",arr[1]+1);           //1D size ne pudhe                             //arr[1]+1 is: 6422256
    printf("arr[1][0]+1 is: %d\n",arr[1][0]+1);     //ele size ne pudhe                            //arr[1][0]+1 is: 6422244
    printf("arr[1][0][0]+1 is: %d\n",arr[1][0][0]+1);//value + 1                                   //arr[1][0][0]+1 is: 91

    printf("arr[2] is: %d\n",arr[2]);                //3D->2nd 2D->naw 1D->add                     // arr[2] is: 6422272
    printf("arr[2][0] is: %d\n",arr[2][0]);          //3D->2nd ->0th  1D ch nav(ele add)           //arr[2][0] is: 6422272
    printf("arr[2][0][0] is: %d\n",arr[2][0][0]);    //3D->2nd->2D->0th->1D->0th ele ch naw(value)  //arr[2][0][0] is: 0

    printf("arr[2]+1 is: %d\n",arr[2]+1);            //1D size ne pudhe                             //arr[2]+1 is: 6422288
    printf("arr[2][0]+1 is: %d\n",arr[2][0]+1);      //ele size ne pudhe                            //arr[2][0]+1 is: 6422276
    printf("arr[2][0][0]+1 is: %d\n",arr[2][0][0]+1);//value +1                                     //arr[2][0][0]+1 is: 1
    
    printf("&arr is: %d\n",&arr);                    //&(3D naw)-> 3D add                           //&arr is: 6422208
    printf("arr is: %d\n",arr);                      //3D->naw 2D add                               //arr is: 6422208
    printf("*arr is: %d\n",*arr);                    //3D-> 2D-> naw (1Dadd)                        //*arr is: 6422208
    printf("**arr is: %d\n",**arr);                  //3D-.2D->1D naw(ele add)                      //**arr is: 6422208
    printf("***arr is: %d\n",***arr);                //3D->2D->1D->ele naw(value)                   //***arr is: 10

    printf("&arr+1 is: %d\n",&arr+1);                //3D size ne pudhe                             //&arr+1 is: 6422304
    printf("arr+1 is: %d\n",arr+1);                  //2D size ne pudhe                             //arr+1 is: 6422240
    printf("*arr+1 is: %d\n",*arr+1);                //1D size ne pudhe                             //*arr+1 is: 6422224
    printf("**arr+1 is: %d\n",**arr+1);              //ele size ne pudhe                            //**arr+1 is: 6422212
    printf("***arr+1 is: %d\n",***arr+1);            //value +1                                     //***arr+1 is: 11

    printf("&(**arr) is: %d\n",&(**arr));            //&(3D->2D->1D->naw)-> 1D add                  //&(**arr) is: 6422208
    printf("&(**arr)+1 is: %d\n",&(**arr)+1);        //1D size ne pudhe                             //&(**arr)+1 is: 6422224
    printf("arr+2 is: %d\n",arr+2);                  //2D size ne 2da pudhe                        //arr+2 is: 6422272
    printf("*(arr+2) is: %d\n",*(arr+2));            //*(arr+2) is: 6422272
    printf("*(arr+2)+1 is: %d\n",*(arr+2)+1);        //1D size ne pudhe                            //*(arr+2)+1 is: 6422288
    printf("*(*(arr+2)+1) is: %d\n",*(*(arr+2)+1));  //*(*(arr+2)+1) is: 6422288
    printf("*(*(arr+2)+1)+3 is: %d\n",*(*(arr+2)+1)+3);//*(*(arr+2)+1)+3 is: 6422300
    printf("*(*(*(arr+2)+1)+3) is: %d\n",*(*(*(arr+2)+1)+3));//*(*(*(arr+2)+1)+3) is: 0

    printf("arr[2] is: %d\n",arr[2]);//arr[2] is: 6422272
    printf("arr[2][1] is: %d\n",arr[2][1]);//arr[2][1] is: 6422288
    printf("arr[2][1][3] is: %d\n",arr[2][1][3]);//arr[2][1][3] is: 0
    
    printf("arr[2]+1 is: %d\n",arr[2]+1);//arr[2]+1 is: 6422288
    printf("arr[2][1]+1 is: %d\n",arr[2][1]+1);//arr[2][1]+1 is: 6422292
    printf("arr[2][1][3]+1 is: %d\n",arr[2][1][3]+1);//arr[2][1][3]+1 is: 1

    return 0;
}