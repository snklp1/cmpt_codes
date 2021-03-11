//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/roy-and-symmetric-logos-1/
#include<bits/stdc++.h>

using namespace std;



int main()

{

   int testcases;

   cin>>testcases;

   while(testcases--)

   {

       int n;

       cin>>n; //taking the size of array which will next be 

       char a[n][n]; //notice we have taken char instead of integer, even though the question takes only 0s and 1s. its cause the input format doesn't have any space in between the ones and the zeroes.



       for(int i=0;i<n;i++)//taking in the array

       {

           for(int j=0;j<n;j++)

           {

               cin>>a[i][j];

           }

       }//array entered



       if(n%2==0)//for even n. we divide the array in two parts (in case of both column and row checking.) we just run the loop through one of these parts and check for its mirror image in the other part.

       {

           int wrong = 0;//if any element doesn't match up with the mirror image, we increment the value of wrong and break the loop. this saves time and further calculations.

           int temp1=0;

//now we need to access the mirror image of each element to check. in cases of rows or columns of even N, we need to add 1 or 3 or 5 or 7 or other odd number to each row number

//to get the next mirror image. example, In a 6X6 matrix, mirror of (2,1) will be (3,1) {2+1=3}, mirror of (1,1) will be (4,1) {1+3=4}, mirror of (0,2) is (5,2) {0+5=5}. the same logic can be applied when we find //mirrors in the case of columns, odd N rows, columns etc.

           for(int r1=(n/2)-1;r1>=0;r1--)      //we start from the row just above the mid line dividing the all the rows into parts and decrease them to zero. columns are taken all.

           {

               temp1++; //we make temp1 = 1 which will be added to the row just above the mid line. then we keep incrementing temp1 to 3,5,7,9,11... and keep adding till have more rows above.

               for(int c1=0;c1<n;c1++)

               {

                   if(a[r1][c1]==a[r1+temp1][c1]) //this is the checking condition. look at it carefully.

                       {

                           continue; //no action taken when the condition full fills

                       }

                   else

                   {

                       wrong++; // as told earlier, we make wrong++ if any small mistake is found. even if a single mistake is found, all is ruined.

                       cout<<"NO"<<endl;

                       break;//breaking the loop. saves computation.

                   }



               }

               if(wrong>0)

                   {

                       break;//we break out of the bigger loop too.

                   }

               temp1++; // temp value has to be incremented 2 times because we need odd numbers. once we incremented above, and then here too.

           }//all rows are scanned



           





           if(wrong==0) //we check the columns only if the rows are all checked and verified symmetric. until there is no need.

           {



               int temp2 = 0; //same all can be put here too. try to make neccessary similarities in the here too.



               for(int c2=(n/2)-1;c2>=0;c2--)

               {

                   temp2++;

                   for(int r2=0;r2<n;r2++)

                   {

                       if(a[r2][c2]==a[r2][c2+temp2])

                       {

                           continue;

                       }

                       else

                       {

                            wrong++;



                            cout<<"NO"<<endl;

                            break;

                       }

                   }

                   if(wrong>0)

                   {

                       break;

                   }

                   temp2++;



               }//all colomns tested



               if(wrong==0)

                   {

                       cout<<"YES"<<endl;

                   }



           }





       }//even code ends here





       else //the same which you saw above has to be implemented for odd N. 

       {

           int wrong=0;

           int temp1=1; //here differences are small. the numbers to be added are even i.e 2,4,6,8,10,12,etc

           for(int r1=(n/2)-1;r1>=0;r1--) //same here too. try and 

           {

               temp1++;

               for(int c1=0;c1<n;c1++)

               {

                   if(a[r1][c1]==a[r1+temp1][c1])

                   {

                       continue;

                   }

                   else

                   {

                       wrong++;

                       cout<<"NO"<<endl;

                       break;

                   }

               }

               temp1++;

           }//rows scanned













           if(wrong==0)

           {



               int temp2 = 1;



               for(int c2=(n/2)-1;c2>=0;c2--)

               {

                   temp2++;

                   for(int r2=0;r2<n;r2++)

                   {

                       if(a[r2][c2]==a[r2][c2+temp2])

                       {

                           continue;

                       }

                       else

                       {

                            wrong++;

                            cout<<"NO"<<endl;

                            break;

                       }

                   }

                   temp2++;



               }//all colomns tested



               if(wrong==0) // and this is the final stage where  we check if the wrong after all these comparisons is still zero as we declared. 

                   {

                       cout<<"YES"<<endl;

                   }



           }



   }

       

}

return 0;

}



//code ends. thanks for reading.

//-author: Sankalp.
