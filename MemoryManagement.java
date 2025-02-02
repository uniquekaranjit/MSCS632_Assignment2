// Filename: MemoryManagement.java
// Author: Unique Karanjit 
// Date: Feb 2, 2025
// Description: A simple example in Java demonstrating garbage collection.

public class MemoryManagement {
    public static void main(String[] args) {
        int[] data = new int[]{1, 2, 3, 4, 5}; // Heap allocation
        processData(data);
        System.out.println("Data in main after function call: " + java.util.Arrays.toString(data));
        // No need to manually free memory—GC will clean up
    }

    static void processData(int[] data) {
        System.out.println("Processing data: " + java.util.Arrays.toString(data));
    }
}
