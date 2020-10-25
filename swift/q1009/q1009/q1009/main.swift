//
//  main.swift
//  q1009
//
//  Created by Changhyun Baek on 2020/10/26.
//

var inputCount = Int(readLine()!)!
var inputData = [[Int]]()

for _ in 0..<inputCount {
    inputData.append((readLine()!.split(separator: " ").map({ Int($0)! })))
}

inputData.forEach { data in
    var computerNumber: Int

    computerNumber = data[0] % 10
    for _ in 1..<data[1] {
        computerNumber = (computerNumber * data[0]) % 10
    }
    if computerNumber == 0 {
        computerNumber = 10
    }
    print(computerNumber)
}
