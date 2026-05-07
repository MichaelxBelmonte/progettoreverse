// Function: FUN_003557b0
// Address: 003557b0
// Size: 1957 bytes
// Class: Unknown


undefined8 FUN_003557b0(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  char *pcVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong unaff_RDI;
  longlong lVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong local_148;
  undefined1 local_140;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  float local_bc;
  longlong local_b8;
  char local_b0;
  uint local_a8;
  undefined4 local_a4;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  float local_54;
  longlong *local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  local_a8 = FUN_01caecd0();
  if (local_a8 == 1) {
    uVar11 = FUN_003c0750(extraout_XMM0_Da,0);
    plVar2 = local_80;
    lVar10 = DAT_027032d0;
    if (local_78[0] == '\0') {
      if (local_80 != (longlong *)0x0) {
        uVar11 = FUN_00d50b00();
        lVar10 = DAT_027032d0;
      }
    }
    else {
      local_78[0] = '\0';
    }
    DAT_027032d0 = lVar10;
    if (lVar10 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_140 = 1;
    local_148 = lVar10;
    FUN_003563c0(uVar11,&local_148);
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar11 = FUN_01c00e50();
  local_a0 = local_48;
  local_98 = 0;
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      uVar11 = FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_98 = '\x01';
  FUN_00c9fe40(uVar11,&local_a0);
  plVar2 = local_80;
  local_38[0] = local_78[0];
  pcVar4 = local_78;
  if (local_78[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
    pcVar4 = (char *)FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (plVar2 != (longlong *)0x0)) {
    pcVar4 = (char *)FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    pcVar4 = (char *)FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    pcVar4 = (char *)FUN_00d50b20();
  }
  local_a4 = (undefined4)CONCAT71((int7)((ulonglong)pcVar4 >> 8),1);
  if (plVar2 == (longlong *)0x0) {
    local_54 = 0.0;
  }
  else {
    uVar11 = FUN_01c00e50();
    local_90 = local_48;
    local_88 = 0;
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        uVar11 = FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    local_88 = '\x01';
    FUN_00c9fe40(uVar11,&local_90);
    plVar2 = local_80;
    pcVar4 = local_78;
    if (local_78[0] == '\0') {
      pcVar4 = local_38;
    }
    local_38[0] = local_78[0];
    *pcVar4 = '\0';
    if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar11 = FUN_00d459e0();
    local_50 = (longlong *)CONCAT44(local_50._4_4_,uVar11);
    if ((local_38[0] != '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_54 = 0.0;
    if ((local_50._0_4_ != 0.0) || (NAN(local_50._0_4_))) {
      local_54 = (float)FUN_01caeac0();
      local_54 = local_54 / local_50._0_4_;
      local_a4 = 0;
    }
  }
  fVar12 = (float)(**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0xac0))();
  local_bc = (float)(**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0xad0))();
  uVar11 = FUN_003c0750(local_bc,0);
  plVar2 = local_80;
  if (local_78[0] == '\0') {
    if (local_80 == (longlong *)0x0) goto LAB_00355f4e;
    uVar11 = FUN_00d50b00();
    if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
  }
  else if (local_80 == (longlong *)0x0) goto LAB_00355f4e;
  local_78[0] = '\0';
  local_80 = (longlong *)0x0;
  local_70 = plVar2;
  local_60 = 0;
  local_68 = 0;
  if (0 < *(int *)((longlong)plVar2 + 0xc)) {
    lVar10 = 0;
    do {
      plVar1 = *(longlong **)(plVar2[2] + lVar10 * 8);
      local_f8 = '\0';
      local_100 = plVar1;
      local_80 = plVar1;
      FUN_00c9fe40(uVar11,&local_100);
      plVar9 = local_48;
      local_38[0] = local_40[0];
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = local_38;
      }
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_50 = plVar9;
      if ((local_38[0] == '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_50 == (longlong *)0x0 || (char)local_a4 != '\0') {
        fVar13 = (float)FUN_01caeac0();
      }
      else {
        fVar13 = (float)FUN_00d459e0();
        fVar13 = fVar13 * local_54;
      }
      (**(code **)(*plVar1 + 0x378))();
      plVar1 = local_48;
      FUN_000823a0();
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar8 = &local_48;
        if (cVar3 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
      }
      pVar7 = (pthread_key_t)pplVar8;
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      fVar14 = fVar12;
      if (fVar12 <= fVar13) {
        fVar14 = fVar13;
      }
      fVar14 = (float)(~-(uint)NAN(fVar13) & (uint)fVar14 | -(uint)NAN(fVar13) & (uint)fVar12);
      fVar13 = local_bc;
      if (fVar14 <= local_bc) {
        fVar13 = fVar14;
      }
      if (local_a8 < 2) {
        local_e8 = '\0';
        local_f0 = plVar1;
        FUN_004f9670();
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar6 = FUN_00e8b990();
        local_b0 = 0;
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        local_b0 = '\x01';
        local_b8 = lVar6;
        uVar11 = FUN_004fac10(fVar13);
        plVar9 = local_50;
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          uVar11 = FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
      }
      else {
        local_d8 = '\0';
        local_e0 = plVar1;
        FUN_004f9670();
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c8 = '\0';
        local_d0 = 0;
        uVar11 = FUN_004fac10(fVar13);
        plVar9 = local_50;
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          uVar11 = FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
      }
      if (plVar1 != (longlong *)0x0) {
        uVar11 = FUN_00d50b20();
      }
      if (plVar9 != (longlong *)0x0) {
        uVar11 = FUN_00d50b20();
      }
      lVar10 = lVar10 + 1;
      local_68 = CONCAT44(local_68._4_4_,(int)lVar10);
    } while ((int)lVar10 < *(int *)((longlong)plVar2 + 0xc));
  }
  FUN_002e0650();
  FUN_00d50b20();
LAB_00355f4e:
  if (local_a8 == 3) {
    FUN_00ca1340();
  }
  return 1;
}


