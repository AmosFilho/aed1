void main() {
   int x, y, *p; y = 0;
   p = &y;
   x = *p;
   x = 4;
   (*p)++;
   --x;
   (*p) += x;
}
