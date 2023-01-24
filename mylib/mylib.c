void states(int s0, int s1, int B, int F, int* S0, int* S1, int* O) {
    *S0 = (!B) & (!F) | s1 & (!F) | s0 & (!B);
    *S1 = (!s0) & F;
    *O = (!F) | s0;
}