float problemSolution2(float i, float j, float k) {
    float result;
    if ((i > j) && (j > k)){
        result = i;
    if ((j > i) && ( i > k )) {
        result = j    ;
    }
    else {
        result = k  ;
    }
    return result;
}}