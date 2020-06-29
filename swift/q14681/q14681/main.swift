//
//  main.swift
//  q14681
//
//  Created by Changhyun Paik on 2020/06/29.
//  Copyright © 2020 paikwiki. All rights reserved.
//
// https://www.acmicpc.net/board/view/50227

let valueX = Int(readLine()!)!
let valueY = Int(readLine()!)!

if (valueX * valueY) > 0 {
    print(valueX > 0 ? 1 : 3)
} else {
    print(valueX > valueY ? 4 : 2)
}
