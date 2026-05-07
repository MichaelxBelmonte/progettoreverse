// Function: FUN_008ffcc6
// Address: 008ffcc6
// Size: 672 bytes
// Class: Unknown

int FUN_008ffcc6(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int local_3c;
  uint32_t local_38;
  short local_32;
  
  FUN_0088d1d0();
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar6 = this_ptr + 0x3b8;
  lVar7 = this_ptr + 0x10;
  while( true ) {
    psVar5 = &local_32;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar5,&local_3c,param_3,param_4,lVar6,lVar7,uVar8,uVar9,uVar10);
    if (local_3c == 0) break;
    switch(local_32) {
    case 1:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 8) = local_38;
        *(void*)(this_ptr + 0x758) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 2:
      if (local_3c == 0xc) {
        iVar3 = FUN_008fbef0();
        *(void*)(this_ptr + 0x759) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 3:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 0x75a) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 10:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0x75b) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xb:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0x75c) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xc:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0x75d) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xd:
      if (local_3c == 0xc) {
        iVar3 = FUN_008f5344();
        *(void*)(this_ptr + 0x75e) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    iVar4 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  }
  iVar3 = (**(code **)(*arg1 + 0xd0))();
  if ((uVar8 & 1) != 0) {
    operator_delete(psVar5);
  }
  *(int *)(arg1 + 3) = (int)arg1[3] + -1;
  return iVar3 + iVar2 + iVar1;
}

