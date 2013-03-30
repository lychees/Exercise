n = gets.to_i; a = gets.split.map &:to_i; a.sort!
res = 0; 0.upto(n-1){|i|res += (a[i] - i - 1).abs}
puts res
