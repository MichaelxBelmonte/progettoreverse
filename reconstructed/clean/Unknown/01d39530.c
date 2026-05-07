// Function: FUN_01d39530
// Address: 01d39530
// Size: 504 bytes
// Class: Unknown

void FUN_01d39530(void)

{
  void*puVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint32_t uVar5;
  int64_t lVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t arg1;
  void*this_ptr;
  int iVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  int64_t local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02680400;
  *(void*)((int64_t)puVar7 + 0xc) = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  *(void*)((int64_t)puVar7 + 0x39) = 0;
  *(void*)((int64_t)puVar7 + 0x41) = 0;
  uVar11 = FUN_00d500e0();
  if (0 < *(int *)(arg1 + 8)) {
    iVar9 = 0;
    do {
      FUN_00e8d170(uVar11,iVar9);
      lVar6 = CONCAT44(uStack_54,local_58);
      if (((char)uStack_50 == '\0') && (lVar6 != 0)) {
        FUN_00d50b00();
      }
      local_60 = 0;
      local_78 = 0;
      while( true ) {
        uVar11 = FUN_01d38ea0();
        iVar2 = *(int *)(CONCAT44(uStack_54,local_58) + 0x18);
        if (((char)uStack_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
          uVar11 = FUN_00d50b20();
        }
        if (iVar2 / 0x1c <= local_78) break;
        FUN_01d38ea0();
        lVar3 = *(int64_t *)(local_70 + 0x10);
        uVar11 = *(void*)(lVar3 + local_60);
        puVar1 = (void*)(lVar3 + 4 + local_60);
        local_58 = *puVar1;
        uStack_54 = puVar1[1];
        uStack_50 = puVar1[2];
        uVar5 = puVar1[3];
        uVar4 = *(void*)(lVar3 + 0x14 + local_60);
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        uVar10 = uVar11;
        if (iVar9 != 0) {
          uVar10 = 1;
        }
        if (local_60 != 0) {
          uVar10 = uVar11;
        }
        uVar11 = FUN_01d38ea0();
        lVar8 = (int64_t)*(int *)(local_70 + 0x18);
        FUN_00c8e340(uVar11,1);
        lVar3 = *(int64_t *)(local_70 + 0x10);
        *(void*)(lVar3 + lVar8) = uVar10;
        *(void*)(lVar3 + 0x14 + lVar8) = uVar4;
        puVar1 = (void*)(lVar3 + 4 + lVar8);
        *puVar1 = local_58;
        puVar1[1] = uStack_54;
        puVar1[2] = uStack_50;
        puVar1[3] = uVar5;
        if (local_68 != '\0') {
          FUN_00d50b20();
        }
        local_78 = local_78 + 1;
        local_60 = local_60 + 0x1c;
      }
      if (lVar6 != 0) {
        uVar11 = FUN_00d50b20();
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(arg1 + 8));
  }
  *this_ptr = puVar7;
  *(void*)(this_ptr + 1) = 1;
  return;
}

