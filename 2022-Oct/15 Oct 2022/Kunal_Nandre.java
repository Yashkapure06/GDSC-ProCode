public class Kunal_Nandre {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 6, 7};
        int d = 2;
        rotateArray(arr,d);
        for (int x:arr) {
            System.out.print(x+" ");
        }
    }

    public static int[] rotateArray(int a[],int k){
        if (k==0){
            return null;
        }
        int temp = a[a.length-1];
        for (int i = a.length-1; i >0; i--) {
            a[i] = a[i-1];
        }
        a[0] = temp;

        return rotateArray(a,k-1);
    }
}
