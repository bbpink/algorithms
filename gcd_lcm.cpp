ull gcd(ull x, ull y) {
  return y ? gcd(y, x % y) : x;
}

ull lcm(ull x, ull y) {
  return (x * y) / gcd(x, y);
}
