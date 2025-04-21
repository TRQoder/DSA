We can access the array from pointer when we give the address of array or the first element of array to the pointer by:
int* ptr = arr;
int* ptr = &arr[0];
Now the pointer has the full access of array

Address:
arr , &arr[0]

Value:
arr[0]

# ways to access array;
    
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<ptr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<*ptr;
        ptr++;
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<i[arr];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<i[ptr];
    }

# 38:22 vectors