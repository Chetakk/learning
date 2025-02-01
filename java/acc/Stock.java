import java.util.Arrays;

class Main {
    public int[] calculateSpan(int[] prices) {
        int[] spans = new int[prices.length];
        spans[0] = 1; // Span for the first day is always 1

        for (int i = 1; i < prices.length; i++) {
            spans[i] = 1; // Initialize span for the current day
            int j = i - 1;
            while (j >= 0 && prices[i] >= prices[j]) {
                spans[i] += spans[j]; // Add the span of the previous smaller day
                j -= spans[j]; // Jump back by the span of the previous smaller day
            }
        }

        return spans;
    }

    public static void main(String[] args) {
        Main calculator = new Main();
        int[] stockPrices = {100, 80, 60, 70, 60, 75, 85};
        int[] spans = calculator.calculateSpan(stockPrices);

        System.out.println("Stock Prices: " + Arrays.toString(stockPrices));
        System.out.println("Stock Spans:   " + Arrays.toString(spans));
    }
}