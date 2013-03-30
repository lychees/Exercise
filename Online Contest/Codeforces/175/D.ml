let read_int _ = Scanf.bscanf Scanf.Scanning.stdib " %d " (fun x -> x)

let () = 
  let n = read_int 0 in
  let res =
    if n = 1 then 1
    else if n = 3 then 18
    else if n = 5 then 1800
    else if n = 7 then 670320
    else if n = 9 then 734832000
    else if n = 11 then 890786230
    else if n = 13 then 695720788
    else if n = 15 then 150347555
    else 0
  in

  Printf.printf "%d" res
 
