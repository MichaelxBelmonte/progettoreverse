// Function: FUN_0090ee9a
// Address: 0090ee9a
// Size: 518 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_0090ee9a(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  int local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_36,&local_3c);
    iVar2 = iVar2 + iVar1;
    if (local_3c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 == 0xb) {
      if (local_3c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0090f04d;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x32) = 1;
    }
    else {
      if (local_36 == 10) {
        if (local_3c == 10) {
          iVar3 = (**(code **)(*arg1 + 0x140))();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x31) = 1;
          goto LAB_0090f053;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_36 == 1) {
        if (local_3c == 0xf) {
          *(void*)(this_ptr + 0x10) = *(void*)(this_ptr + 8);
          iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
          FUN_0090f0c8();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            uVar4 = 0;
            do {
              iVar2 = (**(code **)(*arg1 + 0x140))();
              iVar1 = iVar1 + iVar2;
              uVar4 = uVar4 + 1;
            } while (uVar4 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(void*)(this_ptr + 0x30) = 1;
          goto LAB_0090f053;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_0090f04d:
      iVar3 = iVar3 + iVar2;
    }
LAB_0090f053:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

