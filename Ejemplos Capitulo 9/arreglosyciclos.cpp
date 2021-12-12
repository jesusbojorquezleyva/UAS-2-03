#include <iostream>

int main()
{
    int numStudents{5};
    int score0{84};
    int score1{92};
    int score2{76};
    int score3{81};
    int score4{56};

    int totalScore{score0+score1+score2+score3+score4};
    auto averageScore{static_cast<double>(totalScore)/numStudents};

    //con array
    int scores[]{84,92,76,81,56};
    int numStudents{static_cast<int>(std::size(scores))};//requiere c++17 y la cabecera <iterator>
    int totalScore{scores[0]+scores[1]+scores[2]+scores[3]+scores[4]};
    auto averageScore{static_cast<double>(totalScore)/numStudents};

    //mejor aun
    int scores[]{84,92,76,81,56};
    int numStudents{static_cast<int>(std::size(scores))};//requiere c++17 y la cabecera <iterator>
    int totalScores{0};

    for (int student{0};student<numStudents;++student)
        totalScore+=scores[student];
        
    auto averageScore{static_cast<double>(totalScore)/numStudents};
}