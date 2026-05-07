// Function: FUN_0062aee0
// Address: 0062aee0
// Size: 885 bytes
// Class: MDDocumentConversionSheet

void FUN_0062aee0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  int64_t this_ptr;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint64_t uVar9;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_40;
  char local_38;
  int64_t *local_30;
  char local_28;
  
  if (*(int64_t *)(this_ptr + 0x140) != 0) {
    return;
  }
  FUN_01f27fe0();
  (**(code **)(*local_40 + 0x778))();
  plVar1 = *(int64_t **)(this_ptr + 0x140);
  plVar4 = plVar1;
  if (plVar1 == local_30) goto LAB_0062af80;
  plVar4 = local_30;
  if (local_28 == '\0') {
    if (local_30 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      goto LAB_0062af35;
    }
    FUN_00d50b00();
    plVar1 = *(int64_t **)(this_ptr + 0x140);
    *(int64_t **)(this_ptr + 0x140) = local_30;
  }
  else {
    local_28 = '\0';
LAB_0062af35:
    *(int64_t **)(this_ptr + 0x140) = plVar4;
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar4 = local_30;
  }
LAB_0062af80:
  if ((local_28 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x140);
  lVar2 = *(int64_t *)(this_ptr + 0x88);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x4c8))(g_023dccec,g_023dccf4);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_00465c80();
  }
  else {
    FUN_004b4d40();
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_40 + 0x450))();
    uVar5 = g_02394298;
    if (cVar3 == '\0') {
      uVar5 = g_02390124;
    }
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_90 + 0x450))();
    uVar6 = g_02394298;
    if (cVar3 == '\0') {
      uVar6 = g_02390124;
    }
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_80 + 0x450))();
    uVar7 = g_02394298;
    if (cVar3 == '\0') {
      uVar7 = g_02390124;
    }
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_70 + 0x450))();
    uVar8 = g_02394298;
    if (cVar3 == '\0') {
      uVar8 = g_02390124;
    }
    auVar11 = insertps(ZEXT416(uVar7),ZEXT416(uVar8),0x10);
    auVar10 = insertps(ZEXT416(uVar5),uVar6,0x10);
    (**(code **)(*local_30 + 0x940))(auVar10._0_8_,auVar11._0_8_);
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (*(char *)(this_ptr + 0xa8) == '\0') {
    plVar1 = *(int64_t **)(this_ptr + 0x88);
    uVar9 = FUN_01e53c20();
    if (local_28 == '\0') {
      if (local_30 != (int64_t *)0x0) {
        uVar9 = FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    (**(code **)(*plVar1 + 0x9e8))(uVar9,0);
    if (local_30 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

