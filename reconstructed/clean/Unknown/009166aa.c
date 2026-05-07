// Function: FUN_009166aa
// Address: 009166aa
// Size: 540 bytes
// Class: Unknown

int FUN_009166aa(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int local_3c;
  short local_36;
  uint32_t local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_36,&local_3c);
    if (local_3c == 0) {
      iVar3 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar3 + iVar2 + iVar1;
    }
    if (local_36 < 0xc) {
      if (local_36 == 1) {
        if (local_3c == 0xc) {
          iVar3 = FUN_00914e0e();
          *(void*)(this_ptr + 0x830) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
      }
      else if (local_36 == 0xb) {
        if (local_3c == 8) {
          iVar3 = (**(code **)(*arg1 + 0x138))();
          *(void*)(this_ptr + 0x50) = local_34;
          *(void*)(this_ptr + 0x831) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
      }
      else {
LAB_00916824:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    else if (local_36 == 0xc) {
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0x54) = local_34;
        *(void*)(this_ptr + 0x832) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    else if (local_36 == 0x28) {
      if (local_3c == 0xc) {
        iVar3 = FUN_00906cf8();
        *(void*)(this_ptr + 0x833) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    else {
      if (local_36 != 0x32) goto LAB_00916824;
      if (local_3c == 0xc) {
        iVar3 = FUN_009158c6();
        *(void*)(this_ptr + 0x834) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    iVar4 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  } while( true );
}

