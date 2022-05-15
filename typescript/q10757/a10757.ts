const PROCESS_DIGITS = 9;

const sortByLengthDESC = (lhs: string, rhs: string) =>
  lhs.length >= rhs.length ? -1 : 1;

const getSplittedArrayByConstantsDigitsRight = (str: string) => {
  const firstCutLength =
    str.length % PROCESS_DIGITS === 0
      ? PROCESS_DIGITS
      : str.length % PROCESS_DIGITS;

  let mutatableString = str;
  const result: string[] = [];
  while (mutatableString.length > 0) {
    const unit = result.length === 0 ? firstCutLength : PROCESS_DIGITS;
    result.push(mutatableString.substring(0, unit));
    mutatableString = mutatableString.substring(unit);
  }

  return result;
};

const getPaddedArrayFrontByZeroCharactor = (arr: string[], len: number) => {
  const paddingCount = len - arr.length;

  if (paddingCount < 1) return arr;

  const mutatableArray = [...arr];
  [...Array(paddingCount)].forEach(() => mutatableArray.unshift("0"));

  return mutatableArray;
};

const a10757 = () => {
  const inputTwoNumberStrings = () =>
    require("fs").readFileSync("/dev/stdin").toString().trim().split(" ") as [
      string,
      string
    ];

  const [a, b] = inputTwoNumberStrings().sort(sortByLengthDESC);
  const splittedA = getSplittedArrayByConstantsDigitsRight(a);
  const splittedB = getPaddedArrayFrontByZeroCharactor(
    getSplittedArrayByConstantsDigitsRight(b),
    splittedA.length
  );

  let upDigitEachReversedSplit: number[] = [...Array(splittedA.length)].fill(0);
  let sumEachReversedSplit: string[] = [];
  const reversedSplittedA = [...splittedA].reverse();
  const reversedSplittedB = [...splittedB].reverse();

  reversedSplittedA.forEach((splittedItem, index) => {
    const sumString = (
      Number(splittedItem) +
      Number(reversedSplittedB[index]) +
      (index > 0 ? upDigitEachReversedSplit[index - 1] : 0)
    ).toString();

    if (index === reversedSplittedA.length - 1) {
      // 뒤집힌 배열의 마지막 요소(가장 큰 자릿수)일 경우
      sumEachReversedSplit[index] = sumString;
    } else if (sumString.length > splittedItem.length) {
      // 덧셈한 수에서 자리올림이 있는 경우
      upDigitEachReversedSplit[index] = 1;
      sumEachReversedSplit[index] = Number(sumString.substring(1))
        .toString()
        .padStart(PROCESS_DIGITS, "0");
      // 덧셈한 수에서 자리올림이 없는 경우
    } else {
      sumEachReversedSplit[index] = sumString.padStart(PROCESS_DIGITS, "0");
    }
  });

  const sumEachSplit = [...sumEachReversedSplit].reverse();
  const result = sumEachSplit.join("");
  console.log(result);
};

export default a10757;
