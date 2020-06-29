//
//  main.swift
//  q1427
//
//  Created by Changhyun Paik on 2020/06/29.
//  Copyright © 2020 paikwiki. All rights reserved.
//

var inputValue = readLine()!
inputValue = String(inputValue.sorted(by: { $0 > $1 }))
print(inputValue)
