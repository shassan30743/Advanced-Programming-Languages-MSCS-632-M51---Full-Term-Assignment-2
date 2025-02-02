public class JavaMemoryExample {
    public static void main(String[] args) {
        // Allocating objects in a loop
        for (int i = 0; i < 1_000_000; i++) {
            Object obj = new Object();
            // obj goes out of scope each iteration; GC can reclaim it
        }

        // Request garbage collection (not guaranteed immediately)
        System.gc();

        // Checking memory usage
        long totalMem = Runtime.getRuntime().totalMemory();
        long freeMem = Runtime.getRuntime().freeMemory();
        System.out.println("Total memory: " + totalMem
                           + ", Free memory: " + freeMem);
    }
}
