# **Student GPA Calculator**

## **Overview**
The **Student GPA Calculator** allows users to compute GPA based on a grading scale. The program provides the option to calculate the GPA for either **a single class** or **multiple classes**.

## **Features**
- Calculates GPA for a **single class** or an **overall GPA for multiple classes**.
- Accepts grade percentages and converts them to **GPA values based on a standard scale**.
- Displays a **personalized message** with the calculated GPA.

## **How to Use**
1. The program prompts the user to enter the **student's name**.
2. The user chooses to calculate:
   - **A single class GPA** (enter a grade percentage).
   - **Multiple classes GPA** (enter grades for each class).
3. The program calculates and displays the GPA.

## **GPA Scale**
| Percentage | GPA |
|------------|-----|
| 93+        | 4.0 |
| 90-92      | 3.7 |
| 87-89      | 3.3 |
| 83-86      | 3.0 |
| 80-82      | 2.7 |
| 77-79      | 2.3 |
| 73-76      | 2.0 |
| 70-72      | 1.7 |
| 67-69      | 1.3 |
| 63-66      | 1.0 |
| 60-62      | 0.7 |
| Below 60   | 0.0 |

## **How to Run**
1. Compile the program:
   ```sh
   gcc -o gpacalculator gpacalculator.c
2. Run the program:
   ```sh
   ./gpacalculator

---
