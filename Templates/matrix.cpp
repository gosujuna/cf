struct Matrix : std::array<std::array<i64, 4>, 4> {
    Matrix(i64 v = 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                (*this)[i][j] = (i == j ? v : inf);
            }
        }
    }
};
 
Matrix operator*(const Matrix &a, const Matrix &b) {
    Matrix c(inf);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                c[i][k] = std::min(c[i][k], a[i][j] + b[j][k]);
            }
        }
        c[i][3] = std::min(c[i][3], a[i][3]);
    }
    c[3][3] = 0;
    return c;
}