int main()
{
    int size = 1000; // vf
    int* darray = new int[size];

    // cc

    // vfsizeπnew_sizeΙΟX·ι
    {
        int* tmp = new int[new_size];
        int copy_size = (size < new_size) ? size : new_size;
        for (int i = 0; i < copy_size; i++)
        {
        tmp[i] = darray[i];
        }
        delete[] darray; // Μζπjό
        darray = tmp; // VΜζΙ·΅Φ¦
        size = new_size; // vfπΟX
    }
    
    // cc
    
    delete[] darray;
}
