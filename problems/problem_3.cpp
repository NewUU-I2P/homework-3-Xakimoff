#include <string>

std::string problemSolution3(float height, char S) {
    if (S == 'M') {
        if (height < 1.70) {
            return "short";
        }
        if (height >= 1.70 && height <= 1.85) {
            return "normal";
        }
        if (height > 1.85) {
            return "tall";
        }
    }
    if (S == 'F') {
        if (height < 1.60) {
            return "short";
        }
        if (height >= 1.60 && height < 1.75) {
            return "normal";
        }
        if (height >= 1.75) {
            return "tall";
        }

    }
}