//
//  main.swift
//  q2743
//
//  Created by Changhyun Paik on 2020/06/28.
//  Copyright © 2020 paikwiki. All rights reserved.
//
// https://www.acmicpc.net/problem/2743

import Foundation

let inputValue = readLine()

if let targetString = inputValue {
    print(targetString.lengthOfBytes(using: String.Encoding.utf8))
}
