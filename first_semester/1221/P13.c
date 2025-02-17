#include <stdlib.h>
#include <stdio.h>

int main(){

    int i, j, k, datas, rowNum, tmp, ans, home;
    int rows[500] = {0};

    scanf("%d", &datas);
    for (i = 0; i < datas; i++){

        scanf("%d", &rowNum);

        for (j = 0; j < rowNum; j++)
            scanf("%d", &rows[j]);

        for (j = 0; j < rowNum; j++){
            for (k = 1; k < rowNum; k++){
                if (rows[k] < rows[k - 1]){
                    tmp = rows[k];
                    rows[k] = rows[k - 1];
                    rows[k - 1] = tmp;
                }
            }
        }

        home = rows[rowNum / 2];
        ans = 0;
        for (j = 0; j < rowNum; j++){
            ans += abs(rows[j] - home);
        }
        printf("%d\n", ans);
    }
}