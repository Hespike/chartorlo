#include <stdio.h>

int char_torlo(char str[], char c){
	int uj_hossz = 0;

	for(int i = 0; str[i] != '\0'; ++i){
		if(str[i] != c){
			str[uj_hossz] = str[i];
			uj_hossz++;
		}
}

str[uj_hossz] = '\0';
return uj_hossz;

}

int main(){
	char str[] = "hello";
	int uj_hossz = char_torlo(str, '1');

	printf("Az uj string: ");
	printf(str);
	printf("\n");
	printf("Az uj hossz: %d\n", uj_hossz);

}

/*- Irjunk egy fuggvenyt, ami parameterkent kap egy sztringet es egy karaktert. A fuggveny a sztringbol torli a paramterben kapott karakter osszes elofordulasat, es visszater a modositott sztring hosszaval. Pl.:
char str[] = "hello";
int uj_hossz = char_torlo(str, 'l');
printf(str); -> "heo"
printf("%d", uj_hossz); -> 3 */
