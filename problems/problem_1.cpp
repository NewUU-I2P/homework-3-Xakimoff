float problemSolution1(float consumed_water) {
    float cost;
    if (consumed_water <= 30) {
        cost = 13 + (consumed_water * 0.4);
    }
    if ((consumed_water > 30) && (consumed_water <= 50))
        cost = 13 + 30 * 0.4 + (consumed_water - 30) * 0.12;

    if ((50 < consumed_water) && (consumed_water <= 60)) {
         cost = 13 + 30 * 0.4 + 20 * 0.12 + (consumed_water - 50) * 1.4;
    }
    if (consumed_water >= 60) {
         cost = 13 + 30 * 0.4 + 20* 0.12 + 10 * 1.4 + (consumed_water - 60) * 1.5 ;
    }
    return cost;
}
