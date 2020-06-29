//
//  main.swift
//  q1075
//
//  Created by Changhyun Baek on 2020/06/29.
//  Copyright © 2020 paikwiki. All rights reserved.
//
// https://www.acmicpc.net/problem/1075

import Foundation

let intN = Int(readLine()!)!
let intF = Int(readLine()!)!

var tempN = intN - (intN % 100)
let modN = tempN % intF

if ((intF - modN) > modN) &&
    (((tempN - modN) / 100) == (intN / 100)) {
    tempN -= modN
} else {
    tempN += (intF - modN)
}

let modifiedIntN = String(tempN)
let range = modifiedIntN.index(modifiedIntN.endIndex, offsetBy: -2)..<modifiedIntN.endIndex
print(modifiedIntN[range])
