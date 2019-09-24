ull gcd(ull x, ull y) {
  if (y > x)
    return gcd(y, x);

  auto r = x % y;
  if (r == 0)
    return y;
  else
    return gcd(y, r);
}

ull lcm(ull x, ull y) {
  return (x * y) / gcd(x, y);
}
