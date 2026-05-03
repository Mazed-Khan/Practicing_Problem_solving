// n people standing in a circle, every k-th person is eliminated
// Find the position of the last surviving person
// Formula: J(i) = (J(i-1) + k) % i
// Base case: J(1) = 0 (0-indexed)
// Final answer: position + 1 (convert to 1-indexed)


