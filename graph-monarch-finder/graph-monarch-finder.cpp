// graph-monarch-finder.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <cstdio>

class tournament {
private:
    std::vector<std::vector<bool>> adjacency_matrix;
    int size;

public:
    // init tournament of any given size
    tournament(int n) : size(n) {
        initialize_random_tournament();
    }

    // create tournament structure
    void initialize_random_tournament() {
        adjacency_matrix.resize(size, std::vector<bool>(size, false));
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, 1);

        for (int i = 0; i < size; ++i) {
            for (int j = i + 1; j < size; ++j) {
                bool edge = dis(gen);
                adjacency_matrix[i][j] = edge;
                adjacency_matrix[j][i] = !edge;
            }
        }
    }

    // print adjacency matrix of the tournament
    void print_tournament() const {
        std::printf("tournamnet adjacency matrix:\n");
        for (const auto& row : adjacency_matrix) {
            for (bool edge : row) {
                std::printf("%d ", edge);
            }
            std::printf("\n");
        }
    }

    // check if a vertex is a king (can reach all others in at most two steps)
    bool is_king(int vertex) const {
        for (int i = 0; i < size; ++i) {
            if (i != vertex && !adjacency_matrix[vertex][i]) {
                bool can_reach = false;
                for (int j = 0; j < size; ++j) {
                    if (adjacency_matrix[vertex][j] && adjacency_matrix[j][i]) {
                        can_reach = true;
                        break;
                    }
                }
                if (!can_reach) return false;
            }
        }
        return true;
    }

    void find_kings() const {
        std::printf("kings in tournament: ");
        for (int i = 0; i < size; ++i) {
            if (is_king(i)) {
                std::printf("%d ", i);
            }
        }
        std::printf("\n");
    }
};

int main() {
    int tournament_size = 9; // set here sorry for hardcode
    tournament t(tournament_size);
    t.print_tournament();
    t.find_kings();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
