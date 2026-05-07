// Function: FUN_00a71af6
// Address: 00a71af6
// Size: 687 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_00a71af6(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int local_4c;
  uint local_48 [2];
  short local_3e;
  uint local_3c;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_3e,&local_4c);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_3e == 3) {
      if (local_4c != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_00a71d54;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x3e) = 1;
    }
    else {
      if (local_3e == 2) {
        if (local_4c == 0xe) {
          FUN_009b4ba0();
          *(void*)(this_ptr + 0x30) = 0;
          *(int64_t *)(this_ptr + 0x20) = this_ptr + 0x28;
          *(void*)(this_ptr + 0x28) = 0;
          iVar1 = (**(code **)(*arg1 + 0x108))(0,&local_3c);
          iVar1 = iVar1 + iVar2;
          if (local_3c != 0) {
            uVar4 = 0;
            do {
              iVar2 = (**(code **)(*arg1 + 0x140))();
              FUN_009b4be0(extraout_XMM0_Da_00,local_48);
              iVar1 = iVar1 + iVar2;
              uVar4 = uVar4 + 1;
            } while (uVar4 < local_3c);
          }
          iVar3 = (**(code **)(*arg1 + 0x110))();
          iVar3 = iVar3 + iVar1;
          *(void*)(this_ptr + 0x3d) = 1;
          goto LAB_00a71d5a;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_3e == 1) {
        if (local_4c == 0xf) {
          *(void*)(this_ptr + 0x10) = *(void*)(this_ptr + 8);
          iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,local_48);
          FUN_0090f0c8();
          iVar1 = iVar1 + iVar2;
          if (local_48[0] != 0) {
            uVar5 = 0;
            do {
              iVar2 = (**(code **)(*arg1 + 0x140))();
              iVar1 = iVar1 + iVar2;
              uVar5 = uVar5 + 1;
            } while (uVar5 < local_48[0]);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(void*)(this_ptr + 0x3c) = 1;
          goto LAB_00a71d5a;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_00a71d54:
      iVar3 = iVar3 + iVar2;
    }
LAB_00a71d5a:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

