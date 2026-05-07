// Function: FUN_00c939b0
// Address: 00c939b0
// Size: 1735 bytes
// Class: Unknown

void FUN_00c939b0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  int iVar5;
  uint32_t uVar6;
  time_t tVar7;
  void*puVar8;
  uint32_t extraout_var;
  int64_t *plVar9;
  tm *ptVar10;
  void*this_ptr;
  bool bVar11;
  uint32_t uVar12;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  int64_t local_88;
  int64_t local_80;
  int64_t local_78;
  void*local_70;
  int64_t local_68;
  uint local_60;
  uint32_t local_5c;
  uint32_t local_58;
  int local_54;
  uint64_t local_50;
  uint64_t uStack_48;
  uint64_t local_40;
  uint64_t uStack_38;
  
  puVar8 = g_028a7220;
  if ((g_028a7220 == (void*)0x0) || (g_028a7229 == '\0')) {
    FUN_00e8cb50();
    if (g_028a7220 == (void*)0x0) {
      uVar12 = FUN_00003000();
      FUN_00d91a70(uVar12,1);
      lVar3 = local_68;
      if (((char)local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
        if (((char)local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar1 = g_027259e0;
      local_90 = lVar3;
      if (g_027259e0 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar1;
      local_98 = '\x01';
      FUN_00d91000(1,&local_a0);
      lVar3 = local_68;
      if ((char)local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
          if (((char)local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_60 = local_60 & 0xffffff00;
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      plVar9 = *(int64_t **)(lVar3 + 0x10);
      lVar1 = *plVar9;
      if (lVar1 != 0) {
        FUN_00d50b00();
        plVar9 = *(int64_t **)(lVar3 + 0x10);
      }
      lVar2 = plVar9[1];
      local_88 = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b00();
        plVar9 = *(int64_t **)(lVar3 + 0x10);
      }
      lVar3 = plVar9[2];
      local_78 = lVar2;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar3;
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      ptVar10 = (tm *)&g_02572358;
      *puVar8 = &g_02572358;
      (*g_02572370)();
      lVar3 = g_02772ef8;
      local_70 = puVar8;
      if (g_02772ef8 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02772f00;
      if (g_02772f00 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02772f08;
      if (g_02772f08 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02772f10;
      if (g_02772f10 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02772f18;
      if (g_02772f18 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02772f20;
      if (g_02772f20 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02772f28;
      if (g_02772f28 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02772f30;
      if (g_02772f30 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02772f38;
      if (g_02772f38 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02772f40;
      if (g_02772f40 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02772f48;
      if (g_02772f48 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02772f50;
      if (g_02772f50 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      local_60 = local_60 & 0xffffff00;
      local_68 = lVar1;
      uVar12 = FUN_00d237a0();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      iVar5 = FUN_00d8d560();
      uVar6 = FUN_00d8d560();
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_02568770;
      FUN_00d500e0();
      local_50 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_54 = iVar5 + -0x76c;
      local_60 = 0;
      local_68 = 0;
      uStack_48 = 0xffffffff;
      local_5c = uVar6;
      local_58 = uVar12;
      tVar7 = _mktime(ptVar10);
      lVar3 = local_90;
      puVar8[2] = CONCAT44(extraout_var,tVar7);
      if (g_028a7220 == puVar8) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
        bVar11 = g_028a7220 != (void*)0x0;
        g_028a7220 = puVar8;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (g_028a7228 == '\0') {
        g_028a7228 = '\x01';
        FUN_00e8cb90();
      }
      if (!bVar4) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      lVar1 = local_78;
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_88 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028a7229 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a7229 = '\x01';
      FUN_00e8cb70();
    }
    puVar8 = g_028a7220;
    *(void*)(this_ptr + 1) = 0;
    if (puVar8 == (void*)0x0) {
      puVar8 = (void*)0x0;
      goto LAB_00c94059;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00c94059:
  *this_ptr = puVar8;
  *(void*)(this_ptr + 1) = 1;
  return;
}

