class Solution {
    public int findKthPositive(int[] arr, int k) {
        int missing = 1,i=0;
        
        while(k>0) {
            if(i<arr.length){
               if(arr[i]!=missing) {
                k--;
                } else {
                    i++;
                } 
            } else {
                k--;
            }
            missing++;
        }
        return missing-1;
    }
}
