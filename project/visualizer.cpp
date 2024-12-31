#include <graphics.h>
#include <bits/stdc++.h>
using namespace std;

vector<int> numbers;
int size = 200;
int gap = 4;
int WINDOW_WIDTH = gap * size + 1;
int WINDOW_HEIGHT = size + 1;

// Function to initialize graphics
void initGraphicsWindow() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // Initialize graphics
    
    // Create a new window with specific dimensions
    int window = initwindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Sorting Visualizer");
    setcurrentwindow(window);
    
    // Set background color to black
    setbkcolor(BLACK);
    cleardevice();
}

// Function to draw the array
void drawArray() {
    cleardevice();
    setcolor(WHITE);
    for (int i = 0; i < size; i++) {
        line(gap * i + 1, WINDOW_HEIGHT, gap * i + 1, WINDOW_HEIGHT - numbers[i]);
    }
    delay(50); // Small delay for visibility
}

void swap(int i, int j, int x, int y) {
    setcolor(GREEN);
    line(i, WINDOW_HEIGHT, i, WINDOW_HEIGHT - x);
    setcolor(BLACK);
    line(i, WINDOW_HEIGHT, i, WINDOW_HEIGHT - x);
    setcolor(WHITE);
    line(i, WINDOW_HEIGHT, i, WINDOW_HEIGHT - y);

    setcolor(GREEN);
    line(j, WINDOW_HEIGHT, j, WINDOW_HEIGHT - y);
    setcolor(BLACK);
    line(j, WINDOW_HEIGHT, j, WINDOW_HEIGHT - y);
    setcolor(WHITE);
    line(j, WINDOW_HEIGHT, j, WINDOW_HEIGHT - x);
    
    delay(5); // Add small delay to make swaps visible
}

// Bubble Sort
void bubbleSort() {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                swap(j * gap + 1, (j + 1) * gap + 1, numbers[j], numbers[j + 1]);
                std::swap(numbers[j], numbers[j + 1]);
            }
        }
    }
}

// Insertion Sort
void insertionSort() {
    for (int i = 1; i < size; i++) {
        int key = numbers[i];
        int j = i - 1;

        while (j >= 0 && numbers[j] > key) {
            numbers[j + 1] = numbers[j];
            swap((j + 1) * gap + 1, (j + 2) * gap + 1, numbers[j + 1], numbers[j]);
            j--;
        }
        numbers[j + 1] = key;
    }
}

// Selection Sort
void selectionSort() {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (numbers[j] < numbers[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(i * gap + 1, minIndex * gap + 1, numbers[i], numbers[minIndex]);
            std::swap(numbers[i], numbers[minIndex]);
        }
    }
}

// Merge Sort
void merge(int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++) L[i] = numbers[left + i];
    for (int i = 0; i < n2; i++) R[i] = numbers[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            numbers[k] = L[i];
            swap(k * gap + 1, k * gap + 1, numbers[k], numbers[k]);
            i++;
        } else {
            numbers[k] = R[j];
            swap(k * gap + 1, k * gap + 1, numbers[k], numbers[k]);
            j++;
        }
        k++;
    }
    while (i < n1) {
        numbers[k] = L[i];
        swap(k * gap + 1, k * gap + 1, numbers[k], numbers[k]);
        i++;
        k++;
    }
    while (j < n2) {
        numbers[k] = R[j];
        swap(k * gap + 1, k * gap + 1, numbers[k], numbers[k]);
        j++;
        k++;
    }
}

void mergeSort(int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(left, mid);
        mergeSort(mid + 1, right);
        merge(left, mid, right);
    }
}

// Quick Sort
int partition(int low, int high) {
    int pivot = numbers[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (numbers[j] < pivot) {
            i++;
            swap(i * gap + 1, j * gap + 1, numbers[i], numbers[j]);
            std::swap(numbers[i], numbers[j]);
        }
    }
    swap((i + 1) * gap + 1, high * gap + 1, numbers[i + 1], numbers[high]);
    std::swap(numbers[i + 1], numbers[high]);
    return i + 1;
}

void quickSort(int low, int high) {
    if (low < high) {
        int pi = partition(low, high);
        quickSort(low, pi - 1);
        quickSort(pi + 1, high);
    }
}

// Main function
int main() {
    // Initialize graphics window
    initGraphicsWindow();
    
    char choice;
    do {
        // Clear console and show menu
        system("cls"); // For Windows (use "clear" for Linux)
        cout << "\nSorting Algorithm Visualizer\n";
        cout << "1. Bubble Sort\n";
        cout << "2. Insertion Sort\n";
        cout << "3. Selection Sort\n";
        cout << "4. Merge Sort\n";
        cout << "5. Quick Sort\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice != '6') {
            // Initialize and shuffle array
            numbers.clear();
            for (int i = 1; i <= size; i++) {
                numbers.push_back(i);
            }
            
            unsigned seed = chrono::system_clock::now().time_since_epoch().count();
            shuffle(numbers.begin(), numbers.end(), default_random_engine(seed));
            
            // Draw initial array
            drawArray();
            
            // Perform sorting based on choice
            switch(choice) {
                case '1':
                    cout << "Performing Bubble Sort...\n";
                    bubbleSort();
                    break;
                case '2':
                    cout << "Performing Insertion Sort...\n";
                    insertionSort();
                    break;
                case '3':
                    cout << "Performing Selection Sort...\n";
                    selectionSort();
                    break;
                case '4':
                    cout << "Performing Merge Sort...\n";
                    mergeSort(0, size - 1);
                    break;
                case '5':
                    cout << "Performing Quick Sort...\n";
                    quickSort(0, size - 1);
                    break;
                default:
                    cout << "Invalid choice! Please try again.\n";
            }
            
            // Show final sorted array for a moment
            drawArray();
            delay(2000);
        }
        
    } while (choice != '6');
    
    closegraph();
    return 0;
}
