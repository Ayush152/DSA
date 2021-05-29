def main():
    for _ in range(1):
        mat = []
        for i in range(3):
            mat.append(input())

        x = 0
        o = 0

        for a in mat:
            for b in a:
                if b == 'X':
                    x += 1
                elif b == 'O':
                    o += 1

        if x == o + 1 or x == o:
            win_o = win(mat, 'O')
            win_x = win(mat, 'X')

            if win_o and win_x:
                print(3)
            elif win_o and x != o:
                print(3)
            elif win_x and x != o + 1:
                print(3)
            elif x + o < 9 and not win_x and not win_o:
                print(2)
            else:
                print(1)
        else:
            print(3)


def win(mat, ch):
    for i in range(3):
        if mat[i][0] == mat[i][1] == mat[i][2] == ch:
            return True
        elif mat[0][i] == mat[1][i] == mat[2][i] == ch:
            return True
        elif mat[0][0] == mat[1][1] == mat[2][2] == ch:
            return True
        elif mat[2][0] == mat[1][1] == mat[0][2] == ch:
            return True


main()