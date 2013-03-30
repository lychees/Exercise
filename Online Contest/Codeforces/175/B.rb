I =->{gets.split.map &:to_i}
def gao
	n, s, t = I[]; return 0 if s==t
	s -= 1; t -= 1; a = I[]; vis = Array.new(n, 0); s = a[s] - 1; res = 1; while (s != t) do
		vis[s] = 1; s = a[s]-1; res += 1
		return -1 if !vis[s].zero?
	end
	res
end
puts gao()

