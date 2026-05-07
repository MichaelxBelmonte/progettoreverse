// Function: FUN_00b8cce0
// Address: 00b8cce0
// Size: 3538 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"


/* WARNING: Removing unreachable block (ram,0x00b8d3f5) */
/* WARNING: Removing unreachable block (ram,0x00b8d047) */
/* WARNING: Removing unreachable block (ram,0x00b8d053) */
/* WARNING: Removing unreachable block (ram,0x00b8d0d2) */
/* WARNING: Removing unreachable block (ram,0x00b8d0de) */
/* WARNING: Removing unreachable block (ram,0x00b8d401) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00b8cce0(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong **pplVar9;
  longlong *unaff_RSI;
  longlong *plVar10;
  longlong unaff_RDI;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar15;
  longlong *local_8f8;
  char local_8f0;
  longlong *local_8e8;
  char local_8e0;
  longlong *local_8d8;
  char local_8d0;
  longlong local_8c8;
  char local_8c0;
  longlong local_8b8;
  char local_8b0;
  longlong local_8a8;
  char local_8a0;
  longlong local_888;
  char local_880;
  undefined8 *local_878;
  longlong *local_870;
  char local_868;
  undefined7 uStack_867;
  char local_860;
  longlong *local_858;
  longlong *local_850;
  char local_848 [8];
  longlong *local_840;
  longlong *local_838;
  char local_830;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((*(int *)(unaff_RDI + 0x24) == 10) || (*(int *)(unaff_RDI + 0x50) != 0)) {
LAB_00b8cd18:
    uVar14 = 0;
    goto LAB_00b8cd1b;
  }
  FUN_00ce7000();
  plVar10 = local_850;
  plVar5 = *(longlong **)(unaff_RDI + 0x58);
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  uVar14 = (**(code **)(*plVar5 + 0x388))();
  local_880 = 0;
  local_888 = CONCAT71(uStack_867,local_868);
  if (local_860 == '\0') {
    if (local_888 != 0) {
      uVar14 = FUN_00d50b00();
    }
  }
  else {
    local_860 = '\0';
  }
  local_880 = '\x01';
  (**(code **)(*plVar10 + 0x400))(uVar14,&local_888);
  local_858 = local_838;
  if (local_830 == '\0') {
    if (((local_838 != (longlong *)0x0) && (FUN_00d50b00(), local_830 != '\0')) &&
       (local_838 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_830 = '\0';
  }
  if ((local_880 != '\0') && (local_888 != 0)) {
    FUN_00d50b20();
  }
  if ((local_860 != '\0') && (CONCAT71(uStack_867,local_868) != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((local_848[0] != '\0') && (local_850 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*local_858 + 0x398))();
  plVar5 = local_858;
  if (cVar3 != '\0') {
    FUN_00ce9330(0,0);
    plVar10 = local_838;
    if (plVar5 == local_838) {
LAB_00b8cf0f:
      if ((local_830 != '\0') && (local_838 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_830 == '\0') {
        if (local_838 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_858 = plVar10;
        FUN_00d50b20();
        goto LAB_00b8cf0f;
      }
      local_858 = local_838;
      FUN_00d50b20();
    }
    if (local_858 == (longlong *)0x0) goto LAB_00b8cd18;
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  local_870 = plVar5;
  if (*unaff_RSI != 0) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar5 + 0x18))();
    uVar14 = (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
    plVar5 = local_850;
    if (local_848[0] == '\0') {
      if (local_850 != (longlong *)0x0) {
        uVar14 = FUN_00d50b00();
      }
    }
    else {
      local_848[0] = '\0';
    }
    local_838 = plVar5;
    local_830 = '\0';
    uVar14 = FUN_00ca0840(uVar14,&local_838);
    if ((local_830 != '\0') && (local_838 != (longlong *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) {
      uVar14 = FUN_00d50b20();
    }
    if ((local_848[0] != '\0') && (local_850 != (longlong *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    plVar5 = DAT_02765240;
    if (DAT_02765240 != (longlong *)0x0) {
      uVar14 = FUN_00d50b00();
    }
    local_838 = plVar5;
    local_830 = '\0';
    FUN_00ca0840(uVar14,&local_838);
    if ((local_830 != '\0') && (local_838 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00b82410((int)*(undefined8 *)(unaff_RDI + 0x30),*(undefined4 *)(unaff_RDI + 0x24),
               *(undefined4 *)(unaff_RDI + 0x2c),*(undefined4 *)(unaff_RDI + 0x50));
  plVar5 = local_838;
  if (local_830 == '\0') {
    if (local_838 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00b8d179;
    }
LAB_00b8d6e3:
    uVar14 = 0;
LAB_00b8d904:
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_838 == (longlong *)0x0) goto LAB_00b8d6e3;
LAB_00b8d179:
    local_840 = plVar5;
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02572358;
    (*DAT_02572370)();
    local_878 = puVar6;
    if (*(char *)(unaff_RDI + 0x28) != '\0') {
      uVar11 = 0;
      do {
        FUN_00c8e690();
        plVar5 = local_850;
        if ((((local_848[0] == '\0') && (local_850 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_848[0] != '\0')) && (local_850 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        local_848[0] = '\0';
        local_850 = plVar5;
        FUN_00d21140();
        if ((local_848[0] != '\0') && (local_850 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d23340();
        plVar5 = local_850;
        local_868 = local_848[0];
        pcVar7 = local_848;
        if (local_848[0] == '\0') {
          pcVar7 = &local_868;
        }
        *pcVar7 = '\0';
        if ((local_848[0] != '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (&local_838)[uVar11] = (longlong *)plVar5[2];
        if (local_868 != '\0') {
          FUN_00d50b20();
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(byte *)(unaff_RDI + 0x28));
    }
    if (0 < (longlong)*(ulonglong *)(unaff_RDI + 0x38)) {
      lVar12 = 0;
      uVar11 = *(ulonglong *)(unaff_RDI + 0x38);
      do {
        uVar8 = 0x400;
        if ((longlong)uVar11 < 0x400) {
          uVar8 = uVar11;
        }
        cVar3 = FUN_00b870b0(uVar8 & 0xffffffff,lVar12);
        if (cVar3 == '\0') {
          bVar1 = false;
          uVar14 = 0;
          plVar5 = local_840;
          bVar2 = false;
          if (local_878 == (undefined8 *)0x0) goto LAB_00b8d900;
          goto LAB_00b8d8fb;
        }
        FUN_00b87ba0(extraout_XMM0_Da,uVar8 & 0xffffffff);
        lVar12 = lVar12 + uVar8;
        uVar13 = uVar11 - uVar8;
        bVar1 = (longlong)uVar8 <= (longlong)uVar11;
        uVar11 = uVar13;
      } while (uVar13 != 0 && bVar1);
    }
    FUN_00d50b20();
    uVar14 = (**(code **)(*DAT_028a53a8 + 0x368))();
    local_8f8 = local_858;
    local_8f0 = '\0';
    FUN_00b80860(uVar14,&local_8f8);
    if ((local_8f0 != '\0') && (local_8f8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*DAT_028a53a8 + 0x378))();
    plVar5 = (longlong *)FUN_00e313b0();
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
      FUN_00d50b20();
    }
    FUN_00b7ca00();
    (**(code **)(*DAT_028a53a8 + 0x368))();
    plVar10 = *(longlong **)(unaff_RDI + 0x58);
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_848[0] = '\0';
    local_850 = plVar10;
    FUN_00e383c0();
    if ((local_848[0] != '\0') && (local_850 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*DAT_028a53a8 + 0x378))();
    local_8c0 = 0;
    local_8c8 = *(longlong *)(unaff_RDI + 0x58);
    if (local_8c8 != 0) {
      FUN_00d50b00();
    }
    local_8c0 = '\x01';
    uVar14 = (**(code **)(*local_858 + 0x438))();
    if ((local_8c0 != '\0') && (local_8c8 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*DAT_028a53a8 + 0x368))();
    local_8b0 = 0;
    uVar15 = FUN_00d50b00();
    local_8b0 = '\x01';
    local_8a0 = 0;
    local_8a8 = *(longlong *)(unaff_RDI + 0x58);
    local_8b8 = unaff_RDI;
    if (local_8a8 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_8a0 = '\x01';
    FUN_00b80860(uVar15,&local_8a8);
    if ((local_8a0 != '\0') && (local_8a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_8b0 != '\0') && (local_8b8 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*DAT_028a53a8 + 0x378))();
    lVar12 = *(longlong *)(unaff_RDI + 0x58);
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    uVar15 = FUN_00b81b20();
    if (lVar12 != 0) {
      uVar15 = FUN_00d50b20();
    }
    lVar12 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar12 != 0) {
      uVar15 = FUN_00d50b00();
    }
    plVar10 = DAT_02765240;
    if (DAT_02765240 != (longlong *)0x0) {
      uVar15 = FUN_00d50b00();
    }
    local_8e8 = plVar10;
    local_8e0 = '\x01';
    local_840 = plVar5;
    FUN_000175c0(uVar15,&local_8e8);
    plVar5 = local_850;
    if ((DAT_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026cd0e8 = FUN_00d4fe50();
      DAT_026cd0d0 = "GNDictionary";
      _DAT_026cd0d8 = 0x28;
      _DAT_026cd0e0 = FUN_00022d20;
      _DAT_026cd0f0 = 0;
      uRam00000000026cd0f8 = 0;
      _DAT_026cd100 = 0;
      _DAT_026cd178 = 0;
      uRam00000000026cd180 = 0;
      _DAT_026cd188 = 0;
      DAT_026cd18a = 6;
      _DAT_026cd108 = 0;
      uRam00000000026cd110 = 0;
      _DAT_026cd118 = 0;
      uRam00000000026cd120 = 0;
      _DAT_026cd128 = 0;
      uRam00000000026cd130 = 0;
      _DAT_026cd138 = 0;
      uRam00000000026cd140 = 0;
      _DAT_026cd148 = 0;
      uRam00000000026cd150 = 0;
      _DAT_026cd158 = 0;
      uRam00000000026cd160 = 0;
      _DAT_026cd168 = 0;
      uRam00000000026cd170 = 0;
      DAT_026cd193 = 0;
      _DAT_026cd18b = 0;
      ___cxa_guard_release();
    }
    pplVar9 = (longlong **)&DAT_02802688;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 != '\0') {
        if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
        cVar3 = FUN_00e8db60();
        pplVar9 = &local_850;
        if (cVar3 == '\0') {
          pplVar9 = (longlong **)&DAT_02802688;
        }
      }
    }
    plVar5 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    if ((local_848[0] != '\0') && (local_850 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_8e0 != '\0') && (local_8e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar12 != 0) {
      FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) {
      plVar10 = (longlong *)*unaff_RSI;
      if (plVar10 == (longlong *)0x0) {
        lVar12 = *(longlong *)(unaff_RDI + 0x40);
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        plVar10 = DAT_02765240;
        if (DAT_02765240 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_850 = plVar10;
        local_848[0] = '\0';
        FUN_00ca13a0();
        if ((local_848[0] != '\0') && (local_850 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (lVar12 != 0) {
          FUN_00d50b20();
        }
        plVar10 = (longlong *)*unaff_RSI;
        if (plVar10 == (longlong *)0x0) goto LAB_00b8d8c6;
      }
      local_8d0 = '\0';
      local_8d8 = plVar10;
      uVar15 = (**(code **)(*plVar10 + 0x368))();
      plVar10 = (longlong *)CONCAT71(uStack_867,local_868);
      if (local_860 == '\0') {
        if (plVar10 != (longlong *)0x0) {
          uVar15 = FUN_00d50b00();
        }
      }
      else {
        local_860 = '\0';
      }
      local_848[0] = '\0';
      local_850 = plVar10;
      FUN_00ca0840(uVar15,&local_850);
      if ((local_848[0] != '\0') && (local_850 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_860 != '\0') && (CONCAT71(uStack_867,local_868) != 0)) {
        FUN_00d50b20();
      }
      if ((local_8d0 != '\0') && (local_8d8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_00b8d8c6:
    if (local_840 != (longlong *)0x0) {
      FUN_00b7c570();
    }
    bVar1 = true;
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    plVar5 = (longlong *)0x0;
    bVar2 = true;
    if (local_878 != (undefined8 *)0x0) {
LAB_00b8d8fb:
      bVar1 = bVar2;
      FUN_00d50b20();
    }
LAB_00b8d900:
    if (!bVar1) goto LAB_00b8d904;
  }
  if (local_870 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00b8cd1b:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


