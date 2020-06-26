//
//  main.swift
//  q1330
//
//  Created by Changhyun Baek on 2020/06/26.
//  Copyright © 2020 paikwiki. All rights reserved.
//

var inputValue = readLine()
let arr = inputValue!.split(separator: " ")

if let leftOperand = Int(arr[0]), let rightOperand = Int(arr[1]) {
    if leftOperand == rightOperand {
        print("==")
    } else {
        leftOperand > rightOperand ? print(">") : print("<")
    }
}
