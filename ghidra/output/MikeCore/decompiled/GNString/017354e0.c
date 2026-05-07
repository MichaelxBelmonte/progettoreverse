// Function: FUN_017354e0
// Address: 017354e0
// Size: 1251 bytes
// Class: GNString


undefined8 * FUN_017354e0(pthread_key_t param_1)

{
  code *pcVar1;
  code *pcVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *unaff_RDI;
  uint uVar10;
  int iVar11;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  char local_48;
  undefined8 *local_40;
  code *local_38;
  
  pcVar2 = (code *)FUN_00e8fc40();
  FUN_0013e060();
  local_38 = pcVar2;
  (**(code **)(*(longlong *)pcVar2 + 0x18))();
  pvVar3 = _pthread_getspecific(param_1);
  lVar6 = DAT_027cd5a0;
  pcVar2 = local_38;
  if ((pvVar3 != (void *)0x0) &&
     (lVar4 = FUN_00e8b990(), lVar6 = DAT_027cd5a0, pcVar2 = local_38, lVar4 != 0)) {
    pcVar2 = *(code **)(local_38 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8 + 0x20);
  }
  DAT_027cd5a0 = lVar6;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_027e3bf0;
  if (DAT_027e3bf0 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar4;
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  plVar8 = &local_80;
  FUN_00d31230(plVar8,&local_90);
  puVar9 = local_50;
  pVar7 = (pthread_key_t)plVar8;
  if (local_48 == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  if (*(undefined8 **)(pcVar2 + 0x48) != puVar9) {
    FUN_00d64850();
    puVar5 = *(undefined8 **)(pcVar2 + 0x48);
    if (puVar5 != puVar9) {
      if (puVar9 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      *(undefined8 **)(pcVar2 + 0x48) = puVar9;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  lVar6 = DAT_027e3c00;
  pcVar2 = local_38;
  if ((pvVar3 != (void *)0x0) &&
     (lVar4 = FUN_00e8b990(), lVar6 = DAT_027e3c00, pcVar2 = local_38, lVar4 != 0)) {
    pcVar2 = *(code **)(local_38 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8 + 0x20);
  }
  DAT_027e3c00 = lVar6;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  if (*(longlong *)(pcVar2 + 0x38) != lVar6) {
    FUN_00d64850();
    lVar4 = *(longlong *)(pcVar2 + 0x38);
    if (lVar4 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(pcVar2 + 0x38) = lVar6;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  FUN_0177c8c0();
  puVar9 = local_50;
  if ((((local_48 == '\0') && (local_50 != (undefined8 *)0x0)) && (FUN_00d50b00(), local_48 != '\0')
      ) && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  pcVar1 = DAT_025fe688;
  uVar10 = 0;
  iVar11 = 0;
  local_40 = puVar9;
  pcVar2 = DAT_025fe688;
  do {
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_025fe670;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    (*pcVar1)();
    if ((((uVar10 & 0x7ffffffe) == 4) || ((uVar10 & 0x7ffffffd) == 0)) ||
       ((uVar10 == 7 || ((uVar10 == 9 || (uVar10 == 0xb)))))) {
      pvVar3 = _pthread_getspecific((pthread_key_t)pcVar2);
      lVar6 = DAT_027cd560;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
        lVar6 = DAT_027cd560;
      }
      DAT_027cd560 = lVar6;
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      local_70 = lVar6;
      FUN_017395b0();
      puVar9 = local_40;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (iVar11 < *(int *)((longlong)puVar9 + 0xc)) {
        pvVar3 = _pthread_getspecific((pthread_key_t)pcVar2);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pcVar2 = (code *)local_40[2];
        lVar6 = *(longlong *)(pcVar2 + (longlong)iVar11 * 8);
        local_58 = 0;
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        local_58 = '\x01';
        local_60 = lVar6;
        FUN_01739510();
        puVar9 = local_40;
        iVar11 = iVar11 + 1;
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)pcVar2);
    if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pcVar2 = local_38;
    }
    local_48 = '\0';
    local_50 = puVar5;
    FUN_01736ea0();
    FUN_00d50b20();
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0xc);
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


