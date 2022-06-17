//Bieu dien cay tìm kiem cân bang
struct avl_node { 				//dinh nghia node cua cây
	int data; 					//thanh phan thong tin
	struct avl_node *left; 		//thanh phan con tro sang cay con trai
	struct avl_node *right; 	//thanh phan con tro sang cay con phai
} *root; 						//day la goc cua cay avl
