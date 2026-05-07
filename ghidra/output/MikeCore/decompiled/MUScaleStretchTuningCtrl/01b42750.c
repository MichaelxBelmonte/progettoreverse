// Function: FUN_01b42750
// Address: 01b42750
// Size: 1668 bytes
// Class: MUScaleStretchTuningCtrl


void FUN_01b42750(undefined *param_1)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  int iVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong local_b0;
  char local_a8;
  double local_a0;
  char local_98;
  double local_90;
  char local_88;
  double local_80;
  char local_78;
  double local_70;
  undefined8 local_68;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  char local_38;
  
  FUN_01ab3520();
  FUN_01ad3cb0();
  dVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0.0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0.0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == 0.0) {
    return;
  }
  local_70 = dVar5;
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b790();
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770670();
  dVar5 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0.0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0.0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (dVar5 == 0.0) {
    FUN_01777f70();
    if (((local_40 != 0.0) && (dVar5 = local_40, local_38 == '\0')) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0.0)))) {
      FUN_00d50b20();
    }
  }
  else {
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    param_1 = &DAT_0258cea8;
    *plVar3 = (longlong)&DAT_0258cea8;
    *(undefined4 *)(plVar3 + 5) = 0;
    *(undefined1 *)((longlong)plVar3 + 0x2c) = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[9] = 0;
    plVar3[10] = 0;
    plVar3[0xb] = 0;
    plVar3[0xc] = 0;
    plVar3[0xd] = 0;
    plVar3[0xe] = 0;
    plVar3[0xf] = 0;
    plVar3[0x10] = 0;
    plVar3[0x11] = 0;
    plVar3[0x12] = 0;
    plVar3[0x13] = 0;
    plVar3[0x14] = 0;
    plVar3[0x15] = 0;
    plVar3[0x16] = 0;
    plVar3[0x17] = 0;
    plVar3[0x18] = 0;
    plVar3[0x19] = 0;
    plVar3[0x1a] = 0;
    uVar8 = (*DAT_0258cec0)();
    local_a0 = dVar5;
    local_98 = '\0';
    (**(code **)(*plVar3 + 0x5f0))(uVar8,&local_a0);
    local_50 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0.0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0.0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0.0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_0002cb50();
    uVar8 = (**(code **)(*plVar3 + 0x18))();
    local_90 = local_50;
    local_88 = '\0';
    FUN_00e549d0(uVar8,&local_90);
    dVar11 = local_40;
    if (dVar5 == local_40) {
      local_48 = dVar5;
LAB_01b42aa2:
      dVar11 = local_48;
      if ((local_38 != '\0') && (local_40 != 0.0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0.0) {
          local_48 = dVar5;
          FUN_00d50b00();
        }
        local_48 = dVar11;
        FUN_00d50b20();
        goto LAB_01b42aa2;
      }
      local_48 = local_40;
      FUN_00d50b20();
      local_38 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != 0.0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    dVar5 = dVar11;
    if (local_50 != 0.0) {
      FUN_00d50b20();
    }
  }
  local_78 = '\0';
  local_80 = dVar5;
  local_48 = dVar5;
  FUN_01b43dc0();
  if ((local_78 != '\0') && (local_80 != 0.0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  dVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0.0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0.0)) {
    FUN_00d50b20();
  }
  if (*(int *)((longlong)dVar5 + 0xc) < 1) {
    uVar8 = 0;
    uVar10 = 0;
    dVar11 = 0.0;
  }
  else {
    local_68 = 0.0;
    lVar6 = 0;
    local_58 = 0.0;
    do {
      lVar7 = *(longlong *)(*(longlong *)((longlong)dVar5 + 0x10) + lVar6 * 8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = (double)FUN_013faf20();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      uVar8 = SUB84(local_50,0);
      uVar10 = (undefined4)((ulonglong)local_50 >> 0x20);
      dVar11 = local_50;
      if (local_68 <= local_50) {
        dVar11 = local_68;
      }
      if (local_50 <= local_58) {
        uVar8 = SUB84(local_58,0);
        uVar10 = (undefined4)((ulonglong)local_58 >> 0x20);
      }
      lVar6 = lVar6 + 1;
      local_58 = (double)CONCAT44(uVar10,uVar8);
      local_68 = dVar11;
    } while (lVar6 < *(int *)((longlong)dVar5 + 0xc));
  }
  local_50 = (double)CONCAT44(uVar10,uVar8);
  dVar12 = dVar11;
  local_68 = (double)FUN_01e3f820();
  fVar9 = (float)((ulonglong)dVar12 >> 0x20) + (float)((ulonglong)local_68 >> 0x20) + DAT_02390d00;
  uVar10 = FUN_01b43f70();
  uVar8 = local_68._4_4_;
  local_58 = (double)CONCAT44(local_58._4_4_,uVar10);
  uVar10 = FUN_01b43f70();
  local_68 = (double)CONCAT44(local_68._4_4_,uVar10);
  (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x918))();
  lVar6 = *(longlong *)(unaff_RDI + 0xb0);
  if (3 < *(int *)(lVar6 + 0x18)) {
    dVar12 = (double)local_58._0_4_;
    dVar13 = (double)(float)local_68;
    lVar7 = 0;
    do {
      if ((dVar11 < dVar12) || (dVar13 < local_50)) {
        FUN_01b43f40(*(undefined4 *)(*(longlong *)(lVar6 + 0x10) + lVar7 * 4));
        uVar10 = FUN_01b43f70(fVar9);
        local_68 = (double)CONCAT44(local_68._4_4_,uVar10);
        uVar10 = FUN_01b43f70(uVar8);
        local_58 = (double)CONCAT44(local_58._4_4_,uVar10);
        (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x918))();
        dVar13 = (double)local_58._0_4_;
        dVar12 = (double)(float)local_68;
        lVar6 = *(longlong *)(unaff_RDI + 0xb0);
      }
      lVar7 = lVar7 + 1;
      iVar1 = *(int *)(lVar6 + 0x18);
      iVar4 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar4 = iVar1;
      }
    } while (lVar7 < iVar4 >> 2);
    if (dVar5 == 0.0) goto LAB_01b42dbc;
  }
  FUN_00d50b20();
LAB_01b42dbc:
  if (local_48 != 0.0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


