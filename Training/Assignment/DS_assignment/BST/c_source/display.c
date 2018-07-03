NODE * print( NODE *ptr)
{
	
	while(ptr)
	{
	printf("%d---",ptr->info);
	ptr=ptr->left;

	}
}
