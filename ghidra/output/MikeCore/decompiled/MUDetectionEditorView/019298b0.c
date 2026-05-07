// Function: FUN_019298b0
// Address: 019298b0
// Size: 997 bytes
// Class: MUDetectionEditorView


ulonglong FUN_019298b0(pthread_key_t param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *unaff_RDI;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  float fVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  longlong local_98;
  char local_90;
  ulonglong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_70;
  float local_6c;
  longlong local_68;
  longlong local_40;
  char local_38;
  
  uVar5 = (**(code **)(*unaff_RDI + 0x688))();
  plVar9 = (longlong *)(ulonglong)uVar5;
  if (((char)uVar5 != '\0') && (param_2 != '\0')) {
    plVar1 = (longlong *)unaff_RDI[0x1c];
    (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0x960))();
    lVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = (**(code **)(*plVar1 + 0x380))();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0x960))();
    local_6c = (float)FUN_00d8d7b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar10 = (**(code **)(*unaff_RDI + 0x3f8))();
    lVar7 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (0 < *(int *)(lVar7 + 0xc)) {
      lVar8 = 0;
      plVar9 = &local_40;
      local_68 = lVar7;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar8 * 8);
        if (lVar2 != 0) {
          uVar10 = FUN_00d50b00();
        }
        local_90 = '\0';
        local_98 = lVar2;
        FUN_019a54a0(uVar10,&local_98);
        lVar7 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        uVar10 = 0;
        uVar14 = 0;
        uVar13 = (ulonglong)local_70;
        if (lVar7 != 0) {
          fVar11 = (float)FUN_00d459e0();
          uVar13 = FUN_00aea5e0(fVar11 + local_6c);
          uVar10 = extraout_XMM0_Dc;
          uVar14 = extraout_XMM0_Dd;
        }
        local_88 = uVar13;
        uStack_80 = uVar10;
        uStack_7c = uVar14;
        fVar11 = (float)FUN_00aea610();
        if (DAT_02390434 < fVar11) {
          local_88 = FUN_00aea5e0(DAT_02390434);
          uStack_80 = extraout_XMM0_Dc_00;
          uStack_7c = extraout_XMM0_Dd_00;
        }
        fVar11 = (float)FUN_00aea610((uint)local_88);
        bVar3 = DAT_0241b664 < fVar11;
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar12 = -(uint)bVar3 & (uint)local_88;
        FUN_01265b00();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_0125e930();
        lVar4 = local_40;
        local_88 = lVar7;
        if ((local_38 != '\0') && (local_40 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if (lVar4 != 0) {
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar10 = FUN_0152e890(uVar12);
          if ((local_38 != '\0') && (local_40 != 0)) {
            uVar10 = FUN_00d50b20();
          }
        }
        lVar7 = local_68;
        if (local_88 != 0) {
          uVar10 = FUN_00d50b20();
        }
        if (lVar2 != 0) {
          uVar10 = FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(lVar7 + 0xc));
    }
    FUN_00d50b20();
    plVar9 = (longlong *)CONCAT71((int7)((ulonglong)plVar9 >> 8),(char)uVar5);
  }
  return (ulonglong)plVar9 & 0xffffffff;
}


