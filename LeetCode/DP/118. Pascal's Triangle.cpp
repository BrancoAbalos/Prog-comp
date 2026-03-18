//https://leetcode.com/problems/pascals-triangle/description/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> matriz(numRows);
        for(int i = 0; i < numRows; i++) {
            if(i < 2) {
                vector<int> rowBase = casosBases(i+1);
                matriz[i] = rowBase;
                continue;
            }

            vector<int> row = rellenar(i+1, matriz[i-1]);
            matriz[i] = row;
        }

        return matriz;
    }

    vector<int> rellenar(int largo, vector<int> ref) {
        vector<int> pivote(largo);
        for(int i = 0; i < largo; i++) {
            if(i == 0) {
                pivote[i] = 1;
                continue;
            }

            if(i == largo-1) {
                pivote[i] = 1;
                continue;
            }

            pivote[i] = ref[i-1] + ref[i];
        }

        return pivote;      
    }

    vector<int> casosBases(int largo) {
        vector<int> pivote(largo);
        for(int i = 0; i < largo; i++) {
            pivote[i] = 1;
        }
        return pivote;
    }
};