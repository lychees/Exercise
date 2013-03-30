let read_int _ = Scanf.bscanf Scanf.Scanning.stdib " %d " (fun x -> x)
let read_float _ = Scanf.bscanf Scanf.Scanning.stdib " %f " (fun x -> x)


let() = 
  let n = read_int 0 in
  let k = read_int 0 in
  for i = 1 to n - k - 1 do
    Printf.printf "%d " i
  done;

  Printf.printf "%d " n;
  for i = n - k + 1 to n do
     Printf.printf "%d " (n+n-k-i);
  done;

