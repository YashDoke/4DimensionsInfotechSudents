class DuplicateRemove{
    public static void main(String[] args) {
        // creating an integer array named as 'arr'
        int arr[] = {21,2,32,45,59,6,17,81,9,0,9,45,4,59,6,1,1};
        // creating a 'count' variable to keep
        // track of duplicate variables/values
        int count=0;
        // first for loop to keep on holding
        // the first/initial value
        for(int i=0; i<arr.length; i++){
            // if for particular value above loop ends
            // we re-initialize the 'count' value to zero
            count=0;
            // 'max' variable for holding the value of array
            // and reduce array reference
            int max = arr[i];
            // second for loop for comparison of array value i.e. 'max'
            // with the remaining value to find the duplicate
            for(int j=i; j<arr.length; j++){
                // if values are equal then we increment count
                if(max==arr[j]){
                    count++;
                    // if value of count is greater than 1
                    // means we found a duplicate value
                    if(count>1){
                        // that duplicate value will be replaced with 0
                        arr[j] = 0;
                        // and count will be re-initilized to 1.
                        // i.e.(in case we find another duplicate value after the first value)
                        count = 1;
                    }
                }
            }
        }

        // Printing the array values
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
}