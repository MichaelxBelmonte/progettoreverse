// Function: FUN_0006c760
// Address: 0006c760
// Size: 2360 bytes
// Class: MDAudioTrackItem


void FUN_0006c760(pthread_key_t param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  longlong *unaff_RDI;
  char *pcVar8;
  bool bVar9;
  float fVar10;
  double dVar11;
  char local_e8;
  undefined7 uStack_e7;
  char local_e0;
  longlong local_d8;
  char local_d0;
  char local_c8;
  undefined7 uStack_c7;
  char local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  longlong local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined4 local_54;
  double local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  FUN_01e478c0();
  if ((char)unaff_RDI[0x31] == '\0') {
    return;
  }
  *(undefined1 *)(unaff_RDI + 0x31) = 0;
  (**(code **)(*unaff_RDI + 0x948))();
  dVar11 = local_50;
  if ((local_48[0] != '\0') && (local_50 != 0.0)) {
    FUN_00d50b20();
  }
  if (dVar11 == 0.0) {
    return;
  }
  fVar10 = (float)FUN_01e436c0();
  local_b8 = (double)((param_2 * DAT_0239011c + fVar10 + DAT_0239012c) /
                     *(float *)((longlong)unaff_RDI + 0x15c));
  unaff_RDI[0x2e] = (longlong)local_b8;
  (**(code **)(*unaff_RDI + 0x948))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  if (local_78 == 0) {
    bVar9 = false;
  }
  else {
    (**(code **)(*unaff_RDI + 0x948))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01327a50();
    FUN_00d23310();
    dVar11 = local_50;
    local_40[0] = local_48[0];
    pcVar6 = local_40;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0.0)) {
      FUN_00d50b20();
    }
    if (dVar11 == 0.0) {
      bVar9 = false;
    }
    else {
      (**(code **)(*unaff_RDI + 0x948))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01327a50();
      FUN_00d23310();
      dVar11 = local_50;
      pcVar6 = local_38;
      pcVar8 = local_48;
      if (local_48[0] == '\0') {
        pcVar8 = pcVar6;
      }
      local_38[0] = local_48[0];
      *pcVar8 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0.0)) {
        FUN_00d50b20();
      }
      param_1 = (pthread_key_t)pcVar6;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      bVar9 = CONCAT71(uStack_e7,local_e8) != 0;
      if ((local_e0 != '\0') && (CONCAT71(uStack_e7,local_e8) != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (dVar11 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (CONCAT71(uStack_c7,local_c8) != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar9) goto LAB_0006cffa;
  (**(code **)(*unaff_RDI + 0x948))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  FUN_00d23310();
  dVar11 = local_50;
  local_a0 = local_48[0];
  pcVar6 = &local_a0;
  if (local_48[0] != '\0') {
    pcVar6 = local_48;
  }
  *pcVar6 = '\0';
  if ((local_48[0] != '\0') && (dVar11 != 0.0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_013dfcb0();
  lVar7 = local_78;
  if (local_78 == 0) {
    local_54 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    lVar7 = 0;
  }
  else {
    if (local_70 == '\0') {
      FUN_00d50b00();
      local_54 = 0;
      if ((local_70 == '\0') || (local_78 == 0)) goto LAB_0006cbe1;
      FUN_00d50b20();
    }
    else {
      local_70 = '\0';
    }
    local_54 = 0;
  }
LAB_0006cbe1:
  if ((local_a0 != '\0') && (dVar11 != 0.0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_90 = lVar7;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if (local_78 == 0) {
    local_a8 = 0;
    lVar7 = 0;
    bVar9 = false;
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd790();
    FUN_00d23310();
    dVar11 = local_50;
    local_e8 = local_48[0];
    pcVar6 = &local_e8;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (dVar11 != 0.0)) {
      FUN_00d50b20();
    }
    if (dVar11 == 0.0) {
      bVar9 = false;
      lVar7 = 0;
      local_a8 = 0;
    }
    else {
      local_b0 = dVar11;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd790();
      FUN_00d23310();
      dVar11 = local_50;
      pcVar6 = &local_c8;
      pcVar8 = local_48;
      if (local_48[0] == '\0') {
        pcVar8 = pcVar6;
      }
      local_c8 = local_48[0];
      *pcVar8 = '\0';
      if ((local_48[0] != '\0') && (dVar11 != 0.0)) {
        FUN_00d50b20();
      }
      param_1 = (pthread_key_t)pcVar6;
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_011ef8d0();
      lVar7 = local_68;
      if (local_68 == 0) {
        local_a8 = 0;
        lVar7 = 0;
LAB_0006ce27:
        bVar9 = lVar7 != 0;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_60 == '\0') {
          uVar5 = FUN_00d50b00();
          local_a8 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          goto LAB_0006ce27;
        }
        local_60 = '\0';
        bVar9 = true;
        local_a8 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      }
      if ((local_c8 != '\0') && (dVar11 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
        FUN_00d50b20();
      }
      if (local_e8 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (bVar9) {
    local_b8 = (double)unaff_RDI[0x2e];
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b0 = (double)FUN_0125a280();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd710();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_013de8d0();
    if ((local_48[0] != '\0') && (local_50 != 0.0)) {
      FUN_00d50b20();
    }
    local_b8 = (local_b8 + local_b0) - dVar11;
  }
  lVar2 = local_90;
  if (((char)local_a8 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_54 == '\0' && lVar2 != 0) {
    FUN_00d50b20();
  }
LAB_0006cffa:
  if (unaff_RDI[0x33] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = (longlong *)unaff_RDI[0x33];
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x398))();
    FUN_00d50b20();
    if (cVar3 == '\0') {
      plVar1 = (longlong *)unaff_RDI[0x33];
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x3a8))(local_b8);
      FUN_00d50b20();
      (**(code **)(*unaff_RDI + 0x620))();
    }
  }
  return;
}


