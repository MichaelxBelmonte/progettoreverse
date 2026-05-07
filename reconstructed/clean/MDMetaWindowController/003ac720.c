// Function: FUN_003ac720
// Address: 003ac720
// Size: 1027 bytes
// Class: MDMetaWindowController

void FUN_003ac720(void)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int64_t *local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  FUN_01e53f10();
  FUN_003a7490();
  lVar4 = *(int64_t *)(this_ptr + 0x70);
  lVar2 = lVar4;
  if (lVar4 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_003ac758;
      }
      FUN_00d50b00();
      lVar4 = *(int64_t *)(this_ptr + 0x70);
      *(int64_t *)(this_ptr + 0x70) = local_30;
    }
    else {
      local_28 = '\0';
LAB_003ac758:
      *(int64_t *)(this_ptr + 0x70) = lVar2;
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  FUN_003a7840();
  lVar4 = *(int64_t *)(this_ptr + 0x78);
  lVar2 = lVar4;
  if (lVar4 == local_30) goto LAB_003ac80f;
  lVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar2 = 0;
      goto LAB_003ac7cd;
    }
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x78);
    *(int64_t *)(this_ptr + 0x78) = local_30;
  }
  else {
    local_28 = '\0';
LAB_003ac7cd:
    *(int64_t *)(this_ptr + 0x78) = lVar2;
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
    lVar2 = local_30;
  }
LAB_003ac80f:
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  iVar3 = 0;
  if ((*(int64_t *)(this_ptr + 0x78) != 0) &&
     (iVar3 = 0, *(int64_t *)(*(int64_t *)(this_ptr + 0x78) + 0x308) != 0)) {
    iVar3 = (uint)*(byte *)(this_ptr + 0xd0) * 2;
  }
  iVar1 = FUN_00d48ad0();
  if (iVar1 != iVar3) {
    FUN_00d48ac0();
    *(void*)(this_ptr + 200) = 0;
  }
  lVar4 = 0;
  if (*(int64_t *)(this_ptr + 0x78) != 0) {
    if (*(int64_t *)(*(int64_t *)(this_ptr + 0x78) + 0x308) != 0) {
      FUN_01e53c20();
      (**(code **)(*local_40 + 0x6f0))();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_30 == 0) {
        FUN_01f27fe0();
        FUN_0027c9f0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar4 = g_02708ed0;
        if (g_02708ed0 != 0) {
          FUN_00d50b00();
        }
        FUN_01d5e6e0();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
    }
    lVar4 = *(int64_t *)(this_ptr + 0x78);
  }
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_003acd80();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_003a5800();
  return;
}

