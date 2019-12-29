package main

import "fmt"

type Cabbage struct {
	r int
	c int
}

type CabbageField struct {
	row      int
	col      int
	cabbages []Cabbage
}

const (
	EMPTY = iota
	CABBAGE
	WORM
)

func getNumWorm(cabbageField CabbageField) int {
	cabbageFieldMatrix := make([][]int, cabbageField.row)
	for i := 0; i < cabbageField.row; i++ {
		cabbageFieldMatrix[i] = make([]int, cabbageField.col)
	}
	for _, cabbage := range cabbageField.cabbages {
		cabbageFieldMatrix[cabbage.r][cabbage.c] = CABBAGE
	}

	sum := 0
	for _, cabbage := range cabbageField.cabbages {
		sum += dropWorm(cabbage, cabbageFieldMatrix)
	}
	return sum
}

func dropWorm(cabbage Cabbage, cabbageFieldMatrix [][]int) int {
	r, c := cabbage.r, cabbage.c
	rowSize := len(cabbageFieldMatrix)
	colSize := len(cabbageFieldMatrix[0])

	if (c < 0 || c >= colSize) || (r < 0 || r >= rowSize) {
		return 0
	}
	if cabbageFieldMatrix[r][c] != CABBAGE {
		return 0
	}

	cabbageFieldMatrix[r][c] = WORM
	dropWorm(Cabbage{r: r - 1, c: c}, cabbageFieldMatrix)
	dropWorm(Cabbage{r: r + 1, c: c}, cabbageFieldMatrix)
	dropWorm(Cabbage{r: r, c: c - 1}, cabbageFieldMatrix)
	dropWorm(Cabbage{r: r, c: c + 1}, cabbageFieldMatrix)
	return 1
}

func main() {
	var numCase int
	fmt.Scanln(&numCase)
	CabbageFieldList := make([]CabbageField, 0, numCase)

	for i := 0; i < numCase; i++ {
		var (
			rowSize    int
			colSize    int
			numCabbage int
		)
		fmt.Scanln(&colSize, &rowSize, &numCabbage)

		cabbageList := make([]Cabbage, 0, numCabbage)
		for j := 0; j < numCabbage; j++ {
			var r, c int
			fmt.Scanln(&c, &r)

			cabbageList = append(cabbageList, Cabbage{r: r, c: c})
		}
		cabbageField := CabbageField{
			row:      rowSize,
			col:      colSize,
			cabbages: cabbageList,
		}
		CabbageFieldList = append(CabbageFieldList, cabbageField)
	}

	for i := 0; i < numCase; i++ {
		fmt.Println(getNumWorm(CabbageFieldList[i]))
	}
}
