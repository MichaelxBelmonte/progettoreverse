// Function: FUN_006d9da0
// Address: 006d9da0
// Size: 1325 bytes
// Class: MULSSGenerator


undefined8 FUN_006d9da0(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong **pplVar10;
  longlong unaff_RDI;
  longlong lVar11;
  undefined4 uVar12;
  float fVar13;
  float extraout_XMM0_Da;
  float fVar14;
  longlong local_e8;
  undefined1 local_e0;
  undefined1 local_d0;
  longlong local_c0;
  char local_b8;
  float local_ac;
  float local_a8;
  int local_a4;
  longlong local_a0;
  char local_98 [8];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  char local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  float local_54;
  longlong *local_48;
  char local_40 [12];
  float local_34;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar5 = FUN_01caecd0();
  if (iVar5 == 1) {
    uVar12 = FUN_006cb500();
    lVar11 = local_a0;
    lVar2 = DAT_02726c98;
    if (local_98[0] == '\0') {
      if (local_a0 != 0) {
        uVar12 = FUN_00d50b00();
        lVar2 = DAT_02726c98;
      }
    }
    else {
      local_98[0] = '\0';
    }
    local_d0 = 1;
    DAT_02726c98 = lVar2;
    if (lVar2 != 0) {
      local_d0 = 1;
      uVar12 = FUN_00d50b00();
    }
    local_e0 = 1;
    local_e8 = lVar2;
    FUN_006d9620(uVar12,&local_e8);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ca1380();
  lVar2 = local_a0;
  local_68 = local_98[0];
  pcVar6 = local_98;
  if (local_98[0] == '\0') {
    pcVar6 = &local_68;
  }
  *pcVar6 = '\0';
  if ((local_98[0] != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  if ((local_68 == '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  FUN_00e986f0();
  local_34 = (float)FUN_00e991a0();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_54 = (float)FUN_01caeac0();
  local_ac = (float)(**(code **)(**(longlong **)(unaff_RDI + 0x148) + 0xac0))();
  local_a8 = (float)(**(code **)(**(longlong **)(unaff_RDI + 0x148) + 0xad0))();
  FUN_006cb500();
  lVar2 = local_a0;
  if (local_98[0] == '\0') {
    if (local_a0 == 0) goto LAB_006da2ca;
    FUN_00d50b00();
  }
  else if (local_a0 == 0) goto LAB_006da2ca;
  local_98[0] = '\0';
  local_a0 = 0;
  local_90 = lVar2;
  local_80 = 0;
  local_88 = 0;
  local_a4 = iVar5;
  if (0 < *(int *)(lVar2 + 0xc)) {
    fVar13 = local_54 - local_34;
    lVar11 = 0;
    local_54 = fVar13;
    do {
      local_c0 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar11 * 8);
      local_b8 = '\0';
      local_a0 = local_c0;
      FUN_00c9fe40(fVar13,&local_c0);
      plVar3 = local_48;
      local_68 = local_40[0];
      pcVar6 = &local_68;
      pcVar7 = local_40;
      if (local_40[0] == '\0') {
        pcVar7 = pcVar6;
      }
      *pcVar7 = '\0';
      if ((local_40[0] != '\0') && (plVar3 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pVar9 = (pthread_key_t)pcVar6;
      if ((local_68 == '\0') && (plVar3 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (plVar3 == (longlong *)0x0) {
        local_34 = (float)FUN_01caeac0();
      }
      else if (*(char *)(unaff_RDI + 0x1c0) == '\0') {
        local_34 = (float)FUN_00d459e0();
        local_34 = local_34 + local_54;
      }
      else {
        local_34 = (float)FUN_00d459e0();
        fVar13 = (float)FUN_01caeac0();
        local_34 = local_34 + fVar13;
      }
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7d10();
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011f2810();
      plVar1 = local_48;
      fVar13 = (float)FUN_004fbac0();
      pplVar10 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar10 = &local_48;
        fVar13 = extraout_XMM0_Da;
        if (cVar4 == '\0') {
          pplVar10 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          fVar13 = (float)FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar10 + 1) = 0;
      }
      pVar9 = (pthread_key_t)pplVar10;
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        fVar13 = (float)FUN_00d50b20();
      }
      if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
        fVar13 = (float)FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar13 = local_ac;
        if (local_ac <= local_34) {
          fVar13 = local_34;
        }
        fVar14 = local_a8;
        if (fVar13 <= local_a8) {
          fVar14 = fVar13;
        }
        FUN_012de780(fVar14);
        fVar13 = (float)FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        fVar13 = (float)FUN_00d50b20();
      }
      lVar11 = lVar11 + 1;
      local_88 = CONCAT44(local_88._4_4_,(int)lVar11);
    } while ((int)lVar11 < *(int *)(lVar2 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
  iVar5 = local_a4;
LAB_006da2ca:
  if (iVar5 == 3) {
    FUN_00ca1340();
  }
  return 1;
}


