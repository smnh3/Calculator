#define ENTER 'e'

int main(){
	float num1, num2, ans;
	char op, nextOp;
	
	init();
	
	while(1){
		getNumOp(&num1, &op);
		getNumOp(&num2, &nextOp);
		
		while(1){
			ans = doOp(op, num1, num2);
			if(nextOp == ENTER){
				break;
			}
			num1 = ans;
			op = nextOp;
			getNumOp(&num2, &nextOp);
		}
	}
}
