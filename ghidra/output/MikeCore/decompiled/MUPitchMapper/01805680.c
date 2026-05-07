// Function: FUN_01805680
// Address: 01805680
// Size: 1854 bytes
// Class: MUPitchMapper


ulonglong FUN_01805680(undefined8 param_1,undefined8 param_2,byte param_3,longlong *param_4,
                      undefined1 *param_5)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  uint uVar7;
  uint uVar8;
  longlong unaff_RDI;
  uint uVar9;
  undefined8 unaff_R14;
  ulonglong uVar10;
  uint uVar11;
  uint local_res10;
  uint local_res18;
  undefined1 local_res20;
  longlong local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(int *)(unaff_RDI + 0x68) != 0) {
    uVar10 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),local_res20);
    goto LAB_0180569e;
  }
  local_b8 = *param_4;
  local_b0 = 0;
  pVar6 = (pthread_key_t)param_3;
  local_a8 = param_2;
  cVar2 = FUN_01805370(param_3,param_2,&local_b8);
  if (cVar2 == '\0') {
    FUN_017e2270();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017e0180();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017e4950();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510360(0,0,0);
    local_a0 = local_40;
    local_98 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_98 = '\x01';
    FUN_017178d0();
    lVar1 = local_50;
    if (local_48 == '\0') {
      if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    iVar4 = FUN_0171a210();
    if (iVar4 == -1) {
      uVar9 = 0xffffffff;
      if (local_res10 != 0x7f) goto LAB_01805ca4;
LAB_01805ca8:
      local_res10 = *(uint *)(unaff_RDI + 100);
    }
    else {
      iVar4 = FUN_0171a210();
      uVar9 = (iVar4 % 7 >> 0x1f & 7U) + iVar4 % 7;
      if (local_res10 == 0x7f) goto LAB_01805ca8;
LAB_01805ca4:
      if (local_res10 == 0) goto LAB_01805ca8;
    }
    if (*(char *)(unaff_RDI + 0x5e) != '\0') {
      unaff_RDI = *param_4;
      cVar2 = FUN_01716a10();
      uVar11 = 0;
      if (cVar2 != '\0') {
        bVar3 = FUN_01716a10();
        uVar11 = (uint)(bVar3 ^ 1) + (uint)(bVar3 ^ 1) * 4;
      }
      cVar2 = FUN_01716a10();
      if (cVar2 == '\0') {
        cVar2 = FUN_01716a10();
        uVar7 = 2;
        if (cVar2 == '\0') goto LAB_01805cf7;
      }
      else {
LAB_01805cf7:
        uVar7 = uVar11;
        if (uVar11 == 0) goto LAB_01805d63;
      }
      uVar11 = uVar7 - 1;
      if ((uVar7 & 3) != 0) {
        uVar8 = 0;
        do {
          local_res10 = (local_res10 >> 6 & 1) + (local_res10 & 0x3f) * 2;
          uVar8 = uVar8 + 1;
        } while ((uVar7 & 3) != uVar8);
        uVar7 = uVar7 - uVar8;
      }
      if (2 < uVar11) {
        do {
          local_res10 = (local_res10 >> 3 & 1) +
                        (local_res10 >> 4 & 1 |
                        (local_res10 >> 4 & 2) +
                        ((local_res10 >> 6 & 1) + (local_res10 & 0xf) * 2) * 4 & 0x3f) * 2;
          uVar7 = uVar7 - 4;
        } while (uVar7 != 0);
      }
    }
LAB_01805d63:
    if (uVar9 == 0xffffffff) {
LAB_01805da5:
      uVar10 = 0;
    }
    else {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 1;
      }
      uVar10 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if (((local_res10 >> (uVar9 & 0x1f) & 1) == 0) &&
         ((((uVar9 & 0xfffffffd) != 1 || (cVar2 = FUN_01716e70(), cVar2 != '\0')) ||
          ((local_res10 & 4) == 0)))) goto LAB_01805da5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0180569e;
  }
  FUN_017e2270();
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017e0180();
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017e4950();
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510360(0,0,0);
  local_90 = local_40;
  local_88 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_88 = '\x01';
  FUN_017178d0();
  lVar1 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  iVar4 = FUN_0171a210();
  if (iVar4 == -1) {
    uVar9 = 0xffffffff;
    if (local_res18 != 0) goto LAB_018059f5;
LAB_01805c78:
    uVar10 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),uVar9 != 0xffffffff);
  }
  else {
    iVar4 = FUN_0171a210();
    uVar9 = (iVar4 % 7 >> 0x1f & 7U) + iVar4 % 7;
    if (local_res18 == 0) goto LAB_01805c78;
LAB_018059f5:
    if (*(char *)(unaff_RDI + 0x5e) != '\0') {
      unaff_RDI = *param_4;
      cVar2 = FUN_01716a10();
      uVar11 = 0;
      if (cVar2 != '\0') {
        bVar3 = FUN_01716a10();
        uVar11 = (uint)(bVar3 ^ 1) + (uint)(bVar3 ^ 1) * 4;
      }
      cVar2 = FUN_01716a10();
      if (cVar2 == '\0') {
        cVar2 = FUN_01716a10();
        uVar7 = 2;
        if (cVar2 == '\0') goto LAB_01805a40;
      }
      else {
LAB_01805a40:
        uVar7 = uVar11;
        if (uVar11 == 0) goto LAB_01805ab3;
      }
      uVar11 = uVar7 - 1;
      if ((uVar7 & 3) != 0) {
        uVar8 = 0;
        do {
          local_res18 = (local_res18 >> 6 & 1) + (local_res18 & 0x3f) * 2;
          uVar8 = uVar8 + 1;
        } while ((uVar7 & 3) != uVar8);
        uVar7 = uVar7 - uVar8;
      }
      if (2 < uVar11) {
        do {
          local_res18 = (local_res18 >> 3 & 1) +
                        (local_res18 >> 4 & 1 |
                        (local_res18 >> 4 & 2) +
                        ((local_res18 >> 6 & 1) + (local_res18 & 0xf) * 2) * 4 & 0x3f) * 2;
          uVar7 = uVar7 - 4;
        } while (uVar7 != 0);
      }
    }
LAB_01805ab3:
    if ((uVar9 == 0xffffffff) ||
       ((uVar10 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1),
        (local_res18 >> (uVar9 & 0x1f) & 1) == 0 &&
        ((((uVar9 & 0xfffffffd) != 1 || (cVar2 = FUN_01716e70(), cVar2 != '\0')) ||
         ((local_res18 & 4) == 0)))))) {
      uVar10 = 0;
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_0180569e:
  return uVar10 & 0xffffffff;
}


