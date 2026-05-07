// Function: FUN_00e89400
// Address: 00e89400
// Size: 786 bytes
// Class: GNRunLoopState

uint64_t FUN_00e89400(void)

{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  do {
    lVar3 = FUN_00dac670();
    iVar2 = FUN_00dac670();
    iVar2 = iVar2 - (int)*(void*)(this_ptr + 0x18);
    iVar2 = (iVar2 + 7U & 0xfffffff8) - iVar2;
    if ((0 < iVar2) && (lVar4 = FUN_00dac6d0(), iVar2 + lVar3 < lVar4)) {
      FUN_00dac5e0();
    }
    FUN_00dabdf0();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_00e89709;
      FUN_00d50b00();
    }
    else if (local_40 == 0) goto LAB_00e89709;
    lVar3 = FUN_00dac670();
    iVar2 = FUN_00dac670();
    iVar2 = iVar2 - (int)*(void*)(this_ptr + 0x18);
    iVar2 = (iVar2 + 7U & 0xfffffff8) - iVar2;
    if ((0 < iVar2) && (lVar4 = FUN_00dac6d0(), iVar2 + lVar3 < lVar4)) {
      FUN_00dac5e0();
    }
    cVar1 = FUN_00dab880();
    lVar3 = g_02789428;
    if (cVar1 == '\0') {
      if (g_02789428 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_02789450;
      if (g_02789450 != 0) {
        FUN_00d50b00();
      }
      FUN_00e972c0();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      iVar2 = 1;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else if (local_48 == 0) {
      iVar2 = 3;
      if (*(int *)(*(int64_t *)(this_ptr + 0x28) + 0xc) == 0) {
        if (g_02789428 != 0) {
          FUN_00d50b00();
        }
        lVar4 = g_02789458;
        if (g_02789458 != 0) {
          FUN_00d50b00();
        }
        FUN_00e972c0();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        iVar2 = 1;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      uVar5 = FUN_00dac670();
      local_38 = '\0';
      FUN_00d21140();
      lVar3 = *(int64_t *)(this_ptr + 0x30);
      iVar2 = *(int *)(lVar3 + 0x18);
      FUN_00c8e340();
      *(void*)(*(int64_t *)(lVar3 + 0x10) + (int64_t)iVar2) = uVar5;
      lVar3 = *(int64_t *)(this_ptr + 0x38);
      iVar2 = *(int *)(lVar3 + 0x18);
      FUN_00c8e340();
      *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + (int64_t)iVar2) = local_48;
      iVar2 = 0;
      FUN_00dac5e0();
    }
    FUN_00d50b20();
  } while (iVar2 == 0);
  if (iVar2 == 1) {
    uVar5 = 0;
  }
  else {
LAB_00e89709:
    *(void*)(this_ptr + 0x40) = 1;
    uVar5 = 1;
  }
  return uVar5;
}

