/*

                How To Think In Recursion


     The Golden Rule:
    Recursion is NOT about code. It’s about the way you THINK.

    ------------------------------------------------------------
    Recursion = Breaking down a big problem into smaller problems
    ------------------------------------------------------------

    There are 3 major categories of recursion:
    1. BACKTRACKING
       - Explore all possibilities (choices)
       - If wrong path → undo (backtrack)
       - Eg: N-Queens, Subsets, Combination Sum

    2. DYNAMIC PROGRAMMING (DP)
       - Store answers of smaller subproblems
       - Avoid re-calculating same thing
       - Eg: Fibonacci with memoization, Unique Paths

    3. DIVIDE & CONQUER
       - Break problem into two halves
       - Solve separately, then combine results
       - Eg: Merge Sort, Binary Search, Quick Sort


    ------------------------------------------------------------
     Analogy: Flipkart Sale (Budget = Rs. 5000)
    ------------------------------------------------------------
    - You have Rs. 5000.
    - Choice 1: Buy a phone worth 5000.
    - Choice 2: Buy shoes worth 2000.

    If you buy the phone:
        → Money = 0
        → You cannot buy shoes anymore
        → This is like recursion blocking further choices.

    If you want shoes instead:
        → You UNDO the phone purchase (backtrack),
        → Money = 5000 again,
        → Then buy shoes and explore other items.

    This is exactly how recursion works:
        → CHOICE
        → CHECK (valid or not)
        → MOVE (go deeper into recursion)
        → BACKTRACK (undo if wrong)


    ------------------------------------------------------------
    The Recursion Model
    ------------------------------------------------------------
    Think in terms of 4 steps:

        1. LEVEL   = At which step are we?
                     (row in N-Queens, index in array)

        2. CHOICE  = What can I pick here?
                     (place a queen in a column, pick/skip element)

        3. CHECK   = Is this choice valid?
                     (queen not attacking, target sum not negative)

        4. MOVE    = Go deeper with this choice.
                     After exploring, undo (backtrack).

    ------------------------------------------------------------
    Example Thought Process (Subset Problem)
    ------------------------------------------------------------
    LEVEL = index in array
    CHOICE = include element OR exclude element
    CHECK = no condition here
    MOVE = go to next index

    → This creates a recursion tree of decisions.


    Don’t memorize solutions.
    Always ask:
        - What is my LEVEL?
        - What are the CHOICES?
        - Do I need a CHECK?
        - How do I MOVE deeper?
        - Do I need to BACKTRACK?

    That’s how you THINK in recursion
*/
int main()
{
    // This file is only for theory & thinking.
    // Try applying the model on problems like:
    // - N-Queens (Backtracking)
    // - Combination Sum (Backtracking)
    // - Fibonacci (DP)
    // - Merge Sort (Divide & Conquer)

    return 0;
}
