// G. Majdoori
// time limit per test1 second
// memory limit per test256 megabytes
// This is a reverse coding problem. You will not be provided with
//  any problem statement, Use sample tests and custom input
//   to observe the logic.

// Input
// Input contains an ODD integer N.

// 9 <= N <= 999

// Output
// Happy Labour Work :)

// Output contains "O", "#", and "." only.

// Examples
// InputCopy
// 9
// OutputCopy
// ........#...O...#
// ..........#.#.#..
// ....#.#..........
// ..#.....#........
// ........#........
// ......#.....#.#..
// ........# #.....#
// #.......#.......#
// ..#.#.#.......#..
// InputCopy
// 11
// OutputCopy
// ..........#....O....#
// ............#.#.#.#..
// ....#.#.#............
// ..#.......#..........
// ..........#..........
// ..........#..........
// ........#.....#.#.#..
// ..........# #.......#
// ..........#.........#
// #.........#.........#
// ..#.#.#.#.......#.#..
// InputCopy
// 13
// OutputCopy
// ............#.....O.....#
// ..............#.#.#.#.#..
// ....#.#.#.#..............
// ..#.........#............
// ............#............
// ............#............
// ............#............
// ..........#.....#.#.#.#..
// ............# #.........#
// ............#...........#
// ............#...........#
// #...........#...........#
// ..#.#.#.#.#.......#.#.#..
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int W = 2*N - 1;
    int k = N/2;           // floor(N/2)
    int center = N - 1;    // the “vertical” middle column

    for(int i = 0; i < N; i++){
        for(int j = 0; j < W; j++){
            char ch = '.';

            // Row 0:  (# at center), (O at center + k), (# at center + 2*k)
            if (i == 0){
                if (j == center) ch = '#';
                else if (j == center + k) ch = 'O';
                else if (j == center + 2*k) ch = '#';
            }

            // Row 1:  all even‐offset #’s on the right quarter
            else if (i == 1){
                // offsets 2,4,…,2(k-1)
                if (j > center && (j - center) % 2 == 0 && (j - center) <= 2*(k-1))
                    ch = '#';
            }

            // Row 2:  all even‐offset #’s on the left quarter
            else if (i == 2){
                // offsets -2,-4,…,-2(k-2)
                if (j < center && (center - j) % 2 == 0 && (center - j) <= 2*(k-2))
                    ch = '#';
            }

            // Row 3:  a single dot‐curve on the far left, plus a central stem
            else if (i == 3){
                if (j == 2 || j == center)
                    ch = '#';
            }

            // Middle section: from row 4 up through the exact center
            else if (i >= 4 && i <= k){
                if (j == center)
                    ch = '#';
            }

            // Just below center: mix of left and right accents
            else if (i == k+1){
                // one left‐offset, plus two right‐offsets
                if      (j == center - 2)        ch = '#';
                else if (j == center + 2*k/2)    ch = '#';
                else if (j == center + k)        ch = '#';
            }

            // Two rows above the bottom: a little branch
            else if (i == k+2){
                if      (j == center)       ch = '#';
                else if (j == center + 2)   ch = '#';
                else if (j == center + 2*k) ch = '#';
            }

            // One row above the bottom: the big forks
            else if (i == N-2){
                if (j == 0 || j == center || j == center + 2*k)
                    ch = '#';
            }

            // Last row: the “dots” scatter
            else if (i == N-1){
                // left‐hand series: -2, -4, …, -2*(k-1)
                if (j < center && (center - j) % 2 == 0 && (center - j) <= 2*(k-1))
                    ch = '#';
                // right‐hand tail: last two or three depending on odd/even
                else {
                    int d = j - center;
                    if (d > 0 && d % 2 == 0 && d >= 2*(k/2) && d <= 2*(k-1))
                        ch = '#';
                }
            }

            cout << ch;
        }
        cout << "\n";
    }
    return 0;
}
