// Function: FUN_0048a720
// Address: 0048a720
// Size: 1826 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048a720(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  char *pcVar9;
  pthread_key_t pVar10;
  longlong **pplVar11;
  longlong unaff_RDI;
  longlong *plVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  char local_60;
  byte local_51;
  longlong *local_50;
  char local_48 [8];
  char local_38 [8];
  
  iVar5 = FUN_01d6fde0();
  if (iVar5 != 0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x998))();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134a500();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0141b7f0();
    local_78 = local_50;
    if (local_48[0] == '\0') {
      if (((local_50 != (longlong *)0x0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
         (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134a500();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0141b7f0();
    plVar12 = local_50;
    if (local_48[0] == '\0') {
      if (((local_50 != (longlong *)0x0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
         (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_026f6f08;
    if (DAT_026f6f08 != 0) {
      FUN_00d50b00();
    }
    local_70 = plVar12;
    FUN_00e7d6f0();
    uVar14 = FUN_0071a120();
    if ((((local_48[0] == '\0') && (local_50 != (longlong *)0x0)) &&
        (uVar14 = FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (longlong *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    local_68 = lVar2;
    local_60 = '\0';
    FUN_000175c0(uVar14,&local_68);
    plVar3 = local_50;
    if (local_48[0] == '\0') {
      if (((local_50 != (longlong *)0x0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
         (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      local_48[0] = '\0';
      local_50 = plVar3;
      uVar6 = FUN_00c70bc0();
      plVar12 = (longlong *)(ulonglong)uVar6;
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    local_51 = plVar3 != (longlong *)0x0;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    local_51 = local_51 & (byte)plVar12;
    plVar12 = local_70;
    for (iVar5 = 0; iVar7 = FUN_01d6fde0(), iVar5 < iVar7; iVar5 = iVar5 + 1) {
      FUN_01d701d0(extraout_XMM0_Qa,iVar5);
      plVar3 = local_50;
      local_38[0] = local_48[0];
      pcVar9 = local_48;
      if (local_48[0] == '\0') {
        pcVar9 = local_38;
      }
      *pcVar9 = '\0';
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar14 = FUN_01d66da0();
      lVar2 = DAT_02726cf0;
      if (DAT_02726cf0 != 0) {
        uVar14 = FUN_00d50b00();
      }
      local_a8 = lVar2;
      local_a0 = '\x01';
      uVar14 = FUN_000175c0(uVar14,&local_a8);
      plVar12 = local_50;
      if ((DAT_026fd0c0 == '\0') &&
         (iVar7 = ___cxa_guard_acquire(), uVar14 = extraout_XMM0_Qa_01, iVar7 != 0)) {
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
        uVar14 = ___cxa_guard_release();
      }
      pplVar11 = (longlong **)&DAT_02802688;
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar11 = &local_50;
        uVar14 = extraout_XMM0_Qa_00;
        if (cVar4 == '\0') {
          pplVar11 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          uVar14 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar11 + 1) = 0;
      }
      pVar10 = (pthread_key_t)pplVar11;
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      bVar13 = true;
      if (plVar1 != (longlong *)0x0 && local_51 == 0) {
        local_90 = '\0';
        local_98 = plVar1;
        uVar14 = FUN_0141af60();
        plVar12 = local_50;
        if (local_48[0] == '\0') {
          if (((local_50 != (longlong *)0x0) && (uVar14 = FUN_00d50b00(), local_48[0] != '\0')) &&
             (local_50 != (longlong *)0x0)) {
            uVar14 = FUN_00d50b20();
          }
        }
        else {
          local_48[0] = '\0';
        }
        if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
        if (plVar12 != (longlong *)0x0) {
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar7 = FUN_0141bab0();
          bVar13 = iVar7 != 3;
          uVar14 = FUN_00d50b20();
        }
      }
      plVar12 = local_70;
      FUN_01d70db0(uVar14,bVar13);
      if (plVar12 != (longlong *)0x0) {
        local_80 = '\0';
        local_88 = plVar1;
        cVar4 = (**(code **)(*plVar12 + 0x50))();
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          FUN_01d6ed40();
          (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x998))();
        }
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


