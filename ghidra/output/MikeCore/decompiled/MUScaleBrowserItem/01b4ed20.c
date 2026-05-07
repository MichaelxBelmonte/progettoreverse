// Function: FUN_01b4ed20
// Address: 01b4ed20
// Size: 5208 bytes
// Class: MUScaleBrowserItem
// String references:
//   "%@.%@"
//   "MUScaleBrowserItem"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b4ed20(undefined4 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *unaff_R12;
  ulonglong uVar10;
  longlong *unaff_R13;
  undefined7 uVar12;
  longlong *plVar11;
  bool bVar13;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_1d8;
  longlong local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  int local_f4;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  ulonglong local_38;
  
  local_f4 = param_2;
  if ((param_2 == 0) || (*(longlong *)(unaff_RDI + 0x70) == 0)) goto LAB_01b4ffc6;
  FUN_01e56750();
  if (local_78 == (longlong *)0x0) {
    bVar13 = false;
  }
  else {
    FUN_01e56750();
    FUN_01e5ca90();
    bVar13 = local_48 != (longlong *)0x0;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar13) {
    FUN_01e56750();
    FUN_01e5ca90();
    FUN_01d88f70();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01e53c20();
    if (local_78 == (longlong *)0x0) {
      bVar13 = false;
    }
    else {
      FUN_01e53c20();
      FUN_01e42030();
      bVar13 = local_48 != (longlong *)0x0;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar13) {
      FUN_01e53c20();
      FUN_01e42030();
      FUN_01d88f70();
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  pplVar8 = &local_78;
  FUN_01ceb020();
  plVar9 = local_78;
  if ((DAT_02737920 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = 0;
    uRam00000000027e2e98 = 0;
    _DAT_027e2ea0 = 0;
    uRam00000000027e2ea8 = 0;
    _DAT_027e2eb0 = 0;
    uRam00000000027e2eb8 = 0;
    _DAT_027e2ec0 = 0;
    uRam00000000027e2ec8 = 0;
    _DAT_027e2ed0 = 0;
    uRam00000000027e2ed8 = 0;
    _DAT_027e2ee0 = 0;
    uRam00000000027e2ee8 = 0;
    _DAT_027e2ef0 = 0;
    uRam00000000027e2ef8 = 0;
    _DAT_027e2f00 = 0;
    uRam00000000027e2f08 = 0;
    _DAT_027e2f10 = 0;
    uRam00000000027e2f18 = 0;
    _DAT_027e2f20 = 0;
    uRam00000000027e2f28 = 0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (longlong *)0x0) {
LAB_01b4ef48:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01b4ef48;
  }
  plVar9 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x970))();
    unaff_R12 = local_78;
    if (local_70 == '\0') {
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    FUN_01aa3f90();
    unaff_R13 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    cVar4 = FUN_01b4cd30();
    if (unaff_R13 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_R12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x970))();
      lVar1 = DAT_027e47f0;
      if (DAT_027e47f0 != 0) {
        FUN_00d50b00();
      }
      local_f0 = local_90;
      local_e0 = lVar1;
      FUN_00083ea0(2,&local_e0);
      uVar14 = FUN_000b4da0();
      unaff_R12 = local_48;
      if (local_40 == '\0') {
        if (((local_48 != (longlong *)0x0) && (uVar14 = FUN_00d50b00(), local_40 != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      local_78 = (longlong *)&DAT_0253d630;
      if ((local_50 != '\0') && (local_58 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      local_78 = &DAT_024c5048;
      if ((local_60 != '\0') && (local_68 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if (lVar1 != 0) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      lVar1 = DAT_027e47e0;
      if (DAT_027e47e0 != 0) {
        uVar14 = FUN_00d50b00();
      }
      lVar2 = DAT_027e47f8;
      if (DAT_027e47f8 != 0) {
        uVar14 = FUN_00d50b00();
      }
      local_198 = lVar2;
      local_190 = '\x01';
      FUN_01f6ca30(uVar14,&local_198);
      local_188 = unaff_R12;
      local_180 = '\0';
      iVar5 = (**(code **)(*local_78 + 0x5d8))();
      if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (unaff_R12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (iVar5 == 1) {
        FUN_00d50b20();
        return 0;
      }
    }
    FUN_00d50b20();
  }
  pplVar8 = &local_78;
  FUN_01ceb020();
  plVar9 = local_78;
  if ((DAT_02737920 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = 0;
    uRam00000000027e2e98 = 0;
    _DAT_027e2ea0 = 0;
    uRam00000000027e2ea8 = 0;
    _DAT_027e2eb0 = 0;
    uRam00000000027e2eb8 = 0;
    _DAT_027e2ec0 = 0;
    uRam00000000027e2ec8 = 0;
    _DAT_027e2ed0 = 0;
    uRam00000000027e2ed8 = 0;
    _DAT_027e2ee0 = 0;
    uRam00000000027e2ee8 = 0;
    _DAT_027e2ef0 = 0;
    uRam00000000027e2ef8 = 0;
    _DAT_027e2f00 = 0;
    uRam00000000027e2f08 = 0;
    _DAT_027e2f10 = 0;
    uRam00000000027e2f18 = 0;
    _DAT_027e2f20 = 0;
    uRam00000000027e2f28 = 0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (longlong *)0x0) {
LAB_01b4f2a6:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01b4f2a6;
  }
  plVar9 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_b0 = plVar9;
  (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x970))();
  local_a8 = local_78;
  if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar12 = (undefined7)((ulonglong)unaff_R13 >> 8);
  if (plVar9 == (longlong *)0x0) {
    FUN_017bf2e0();
    local_80 = local_78;
    if (local_78 == (longlong *)0x0) goto LAB_01b4f3c3;
    uVar10 = CONCAT71(uVar12,1);
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01aa3f90();
    local_80 = local_78;
    if (local_78 == (longlong *)0x0) {
LAB_01b4f3c3:
      uVar10 = 0;
      local_80 = (longlong *)0x0;
    }
    else {
      uVar10 = CONCAT71(uVar12,1);
      if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) &&
         (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*local_80 + 0x368))();
  plVar9 = local_78;
  FUN_017bf050();
  (**(code **)(*local_90 + 0x368))();
  local_d0 = local_48;
  local_c8 = 0;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_c8 = '\x01';
  cVar4 = FUN_00d90870();
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    local_38 = uVar10;
    (**(code **)(*local_80 + 0x368))();
    plVar11 = local_78;
    if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) && (FUN_00d50b00(), local_70 != '\0')
        ) && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_017bf050();
    (**(code **)(*local_90 + 0x368))();
    iVar5 = FUN_00d8c7a0();
    FUN_00d8f140(extraout_XMM0_Da,iVar5 + 1);
    plVar9 = plVar11;
    if (plVar11 == local_78) {
LAB_01b4f5a9:
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar9 = local_78;
      if (local_70 == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_01b4f5a9;
      }
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_70 = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar14 = FUN_017bf2e0();
    plVar11 = local_78;
    if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) &&
        (uVar14 = FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    local_170 = '\0';
    local_178 = plVar9;
    (**(code **)(*plVar11 + 0x400))(uVar14,&local_178);
    plVar11 = local_78;
    uVar12 = (undefined7)((ulonglong)unaff_R12 >> 8);
    if (local_78 == local_80) {
      if (((char)local_38 == '\0') && (local_78 != (longlong *)0x0)) {
        if (local_70 != '\0') goto LAB_01b4f6b8;
        uVar10 = CONCAT71(uVar12,1);
        FUN_00d50b00();
      }
      else {
        uVar10 = local_38 & 0xffffffff;
      }
LAB_01b4f6c5:
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_70 == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        uVar10 = CONCAT71(uVar12,1);
        if ((char)local_38 == '\0') {
          local_80 = plVar11;
        }
        else {
          local_80 = plVar11;
          FUN_00d50b20();
        }
        goto LAB_01b4f6c5;
      }
      if ((char)local_38 == '\0') {
        local_80 = local_78;
      }
      else {
        local_80 = local_78;
        FUN_00d50b20();
      }
LAB_01b4f6b8:
      local_70 = '\0';
      uVar10 = CONCAT71(uVar12,1);
    }
    if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar9 == (longlong *)0x0) {
      uVar10 = uVar10 & 0xffffffff;
    }
    else {
      FUN_00d50b20();
      uVar10 = uVar10 & 0xffffffff;
    }
  }
  FUN_017a9f30();
  FUN_00df1af0();
  local_1d8 = local_f0;
  pVar7 = 2;
  uVar14 = FUN_00083ea0(2,&local_1d8);
  uVar14 = FUN_00d8cb40(uVar14,&local_78);
  local_c0 = local_90;
  local_b8 = 0;
  if (local_88 == '\0') {
    if (local_90 != (longlong *)0x0) {
      uVar14 = FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  plVar11 = local_80;
  local_b8 = '\x01';
  (**(code **)(*local_80 + 0x400))(uVar14,&local_c0);
  plVar3 = local_48;
  cVar4 = (char)uVar10;
  uVar12 = (undefined7)((ulonglong)plVar9 >> 8);
  if (local_48 == plVar11) {
    if ((cVar4 == '\0') && (local_48 != (longlong *)0x0)) {
      if (local_40 != '\0') goto LAB_01b4f87a;
      uVar10 = CONCAT71(uVar12,1);
      FUN_00d50b00();
    }
    else {
      uVar10 = uVar10 & 0xffffffff;
    }
joined_r0x01b4fd36:
    if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) {
      uVar10 = uVar10 & 0xffffffff;
    }
    else {
      FUN_00d50b20();
      uVar10 = uVar10 & 0xffffffff;
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      uVar10 = CONCAT71(uVar12,1);
      local_80 = plVar3;
      if (cVar4 != '\0') {
        FUN_00d50b20();
      }
      goto joined_r0x01b4fd36;
    }
    if (cVar4 == '\0') {
      local_80 = local_48;
    }
    else {
      local_80 = local_48;
      FUN_00d50b20();
    }
LAB_01b4f87a:
    local_40 = '\0';
    uVar10 = CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
  }
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_78 = (longlong *)&DAT_0253d630;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_78 = &DAT_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_80 + 0x3f0))();
  cVar4 = FUN_00ce6e30();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    (**(code **)(*local_80 + 0x3f0))();
    (**(code **)(*local_78 + 0x428))();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*local_80 + 0x3f0))();
  cVar4 = FUN_00ce6e30();
  param_1 = extraout_XMM0_Da_00;
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    param_1 = FUN_00d50b20();
  }
  plVar9 = local_b0;
  if (cVar4 != '\0') {
    param_1 = FUN_01d2ac30();
    if (local_70 == '\0') {
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b4fa12;
      }
    }
    else if (local_78 != (longlong *)0x0) {
LAB_01b4fa12:
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_168 = local_a8;
      local_160 = '\0';
      FUN_017aaae0();
      if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_017bf2e0();
      plVar11 = local_78;
      if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_80 + 0x3f0))();
      local_158 = plVar11;
      local_150 = '\0';
      cVar4 = (**(code **)(*local_78 + 0x50))();
      if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        (**(code **)(*local_80 + 0x3f0))();
        (**(code **)(*local_48 + 0x388))();
        plVar9 = local_78;
        if (local_70 == '\0') {
          if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
             (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = '\0';
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_138 = plVar9;
        local_130 = '\0';
        FUN_01aaed70();
        local_a0 = local_78;
        if (plVar9 == local_78) {
          local_a0 = plVar9;
LAB_01b4fdb6:
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_70 == '\0') {
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if (plVar9 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_01b4fdb6;
          }
          if (plVar9 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          local_70 = '\0';
        }
        if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017aa5e0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b6f0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_128 = local_a0;
        local_120 = '\0';
        FUN_01735120();
        plVar9 = local_b0;
        if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_a0 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        local_98 = plVar11;
        local_38 = uVar10;
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017aa5e0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b6f0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar1 = DAT_027e3c20;
        if (DAT_027e3c20 != 0) {
          FUN_00d50b00();
        }
        local_148 = lVar1;
        local_140 = '\x01';
        FUN_01735120();
        uVar10 = local_38;
        plVar11 = local_98;
        plVar9 = local_b0;
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_118 = local_80;
      local_110 = '\0';
      FUN_017bea90();
      if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      param_1 = FUN_00d50b20();
    }
  }
  if ((char)uVar10 != '\0') {
    param_1 = FUN_00d50b20();
  }
  if (local_a8 != (longlong *)0x0) {
    param_1 = FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    param_1 = FUN_00d50b20();
  }
LAB_01b4ffc6:
  local_108 = *unaff_RSI;
  local_100 = '\0';
  uVar14 = FUN_01ad0160(param_1,(undefined1)local_f4);
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  return uVar14;
}


