const a2480 = () => {
  // 0. helper
  const inputSpaceIncludedString = () =>
    require("fs")
      .readFileSync("/dev/stdin")
      .toString()
      .trim()
      .split(" ") as string[];

  const toInt = (s: string) => parseInt(s);
  const descSorter = (lhs: number, rhs: number) => (lhs > rhs ? -1 : 1);

  const formulas = {
    // 같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
    allSameValues: (target: number) => 10000 + target * 1000,
    // 같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
    twoSameValues: (target: number) => 1000 + target * 100,
    // 모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
    noneSameValue: (target: number) => target * 100,
  };

  const getFomula = (reducedOrderedDicesLength: number) =>
    [formulas.allSameValues, formulas.twoSameValues, formulas.noneSameValue][
      reducedOrderedDicesLength - 1
    ];

  const calcReducedDiceInfo = ({
    reducedOrderedDices,
    targetFinder: [target],
  }: {
    reducedOrderedDices: number[];
    targetFinder: number[];
  }) => ({ formula: getFomula(reducedOrderedDices.length), target });

  // 1. input
  const orderedDices = inputSpaceIncludedString().map(toInt).sort(descSorter);

  // 2. calc
  const reducedDicesInfo = orderedDices.reduce(
    (acc: { reducedOrderedDices: number[]; targetFinder: number[] }, dice) => {
      const { reducedOrderedDices, targetFinder } = acc;

      // mutate acc.reducedOrderedDices
      if (!reducedOrderedDices.includes(dice))
        acc.reducedOrderedDices = [...reducedOrderedDices, dice];

      // mutate acc.targetFinder
      acc.targetFinder = targetFinder.includes(dice)
        ? [dice, ...targetFinder]
        : [...targetFinder, dice];

      return acc;
    },
    { reducedOrderedDices: [], targetFinder: [] }
  );

  const { formula, target } = calcReducedDiceInfo(reducedDicesInfo);

  // 3. output
  console.log(formula(target));
};

export default a2480;
