
int findNumbers(int* nums, int numsSize)
{
            int i;
            
            int evenDigits=0;
        
            for(i=0;i<numsSize;i++)
            {
                int flag=0 ;
                while(nums[i]>0)
                {
                nums[i]=nums[i]/10;
                flag++;
            
                }
                if(flag%2==0)
                    evenDigits++;
                    
            }
    return evenDigits;
}   
    


    