// Function: FUN_0165e970
// Address: 0165e970
// Size: 2444 bytes
// Class: MULSSGenerator


void FUN_0165e970(ulonglong param_1,ulonglong param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  pthread_key_t pVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  longlong lVar14;
  longlong unaff_RDI;
  undefined4 local_88;
  int iStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_64;
  longlong local_58;
  char local_50 [8];
  ulonglong local_48;
  longlong local_40;
  char local_38;
  
  if (*(char *)(unaff_RDI + 0x48) != '\0') {
    return;
  }
  lVar14 = *(longlong *)(unaff_RDI + 0x40);
  uVar9 = param_1;
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    lVar14 = *(longlong *)(unaff_RDI + 0x40);
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar14 = *(longlong *)(lVar14 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  pVar10 = (pthread_key_t)uVar9;
  if (*(int *)(*(longlong *)(lVar14 + 0x48) + 0x18) + 7U < 0xf) {
    FUN_00d23310();
    lVar14 = local_58;
    pVar10 = (pthread_key_t)CONCAT71((int7)(uVar9 >> 8),local_50[0]);
    plVar12 = &local_40;
    if (local_50[0] != '\0') {
      plVar12 = (longlong *)local_50;
    }
    local_40 = CONCAT71(local_40._1_7_,local_50[0]);
    *(char *)plVar12 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (lVar14 != 0)) {
      FUN_00d50b20();
    }
    if (lVar14 == 0) {
      return;
    }
  }
  local_38 = '\0';
  local_40 = 0;
  local_64 = param_3;
  if (param_2 >> 0x20 == 0) {
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01252670(&local_70,1,&local_88,&local_64);
    puVar13 = &local_48;
    if (local_50[0] != '\0') {
      puVar13 = (ulonglong *)local_50;
    }
    local_48 = CONCAT71(local_48._1_7_,local_50[0]);
    *(char *)puVar13 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    cVar4 = local_38;
    lVar14 = local_40;
    if (local_40 == local_58) {
      if ((local_38 != '\0') || (local_58 == 0)) {
        if (((char)local_48 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0165ec85;
      }
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
      }
    }
    else if ((char)local_48 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      local_40 = local_58;
      if ((cVar4 != '\0') && (lVar14 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = local_58;
      if ((local_38 != '\0') && (lVar14 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012521f0(param_2,1,&local_70,&local_88);
    puVar13 = &local_48;
    if (local_50[0] != '\0') {
      puVar13 = (ulonglong *)local_50;
    }
    local_48 = CONCAT71(local_48._1_7_,local_50[0]);
    *(char *)puVar13 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    cVar4 = local_38;
    lVar14 = local_40;
    if (local_40 == local_58) {
      if ((local_38 != '\0') || (local_58 == 0)) {
        if (((char)local_48 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0165ec85;
      }
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
      }
    }
    else if ((char)local_48 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      local_40 = local_58;
      if ((cVar4 != '\0') && (lVar14 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = local_58;
      if ((local_38 != '\0') && (lVar14 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  local_38 = '\x01';
LAB_0165ec85:
  local_50[0] = '\0';
  local_58 = 0;
  puVar11 = (undefined8 *)(local_70 >> 0x20);
  if (puVar11 == (undefined8 *)0x0) {
    local_70 = FUN_0165be20();
  }
  else {
    local_80 = local_70;
    local_48 = CONCAT44(iStack_84,local_88);
    local_78 = CONCAT44(local_78._4_4_,local_64);
    pvVar6 = _pthread_getspecific((pthread_key_t)(local_70 >> 0x20));
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar11 = &local_80;
    FUN_012535e0(puVar11,&local_58,&local_48,&local_78);
    if (local_80._4_4_ == 0) {
      local_80 = FUN_0165be20();
    }
  }
  do {
    if (local_58 == 0) {
      local_78 = FUN_00e7bdb0();
      iVar5 = 0;
    }
    else {
      local_48 = local_70;
      FUN_00e7b970();
      uVar9 = local_48;
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fff0();
      local_48 = uVar9;
      FUN_00e7bdc0();
      lVar14 = local_58;
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      lVar7 = local_58;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar14 = lVar7, lVar8 != 0)) {
        lVar14 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      iVar1 = *(int *)(lVar14 + 0x44);
      iVar5 = FUN_00e7cea0();
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123ffb0();
      local_48 = uVar9;
      FUN_00e7bac0();
      lVar14 = local_58;
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      lVar7 = local_58;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar14 = lVar7, lVar8 != 0)) {
        lVar14 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      local_48 = *(ulonglong *)(lVar14 + 0x48);
      FUN_00e7b820();
      iVar5 = iVar5 + iVar1;
      local_78 = local_48;
    }
    lVar14 = local_40;
    pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
    lVar7 = local_40;
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar14 = lVar7, lVar8 != 0)) {
      lVar14 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    lVar7 = local_40;
    if (*(int *)(lVar14 + 0x44) == iVar5) {
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      lVar14 = local_40;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar7 = lVar14, lVar8 != 0)) {
        lVar7 = *(longlong *)(lVar14 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      if (((*(int *)(lVar7 + 0x4c) == 0) || (local_78._4_4_ == 0)) ||
         (cVar4 = FUN_00e7c000(), cVar4 == '\0')) goto LAB_0165ef60;
      bVar2 = false;
    }
    else {
LAB_0165ef60:
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d64850();
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d64850();
      lVar14 = local_40;
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      lVar7 = local_40;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar14 = lVar7, lVar8 != 0)) {
        lVar14 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      lVar7 = local_40;
      *(int *)(lVar14 + 0x44) = iVar5;
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      lVar14 = local_40;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar7 = lVar14, lVar8 != 0)) {
        lVar7 = *(longlong *)(lVar14 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      *(ulonglong *)(lVar7 + 0x48) = local_78;
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d64910();
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar2 = true;
      FUN_00d64910();
    }
    if (iStack_84 == 0) break;
    uVar9 = param_1 >> 0x20;
    pVar10 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar11 >> 8),uVar9 == 0);
    if ((((!bVar2 && uVar9 != 0) && (local_70._4_4_ != 0)) && (uVar9 != 0)) &&
       (cVar4 = FUN_00e7c020(), cVar4 == '\0')) break;
    cVar3 = local_38;
    lVar7 = local_40;
    cVar4 = local_50[0];
    lVar14 = local_58;
    if (local_58 == local_40) {
      cVar3 = local_50[0];
      if (((local_38 != '\0') && (local_50[0] == '\0')) && (local_40 != 0)) {
        FUN_00d50b00();
        cVar3 = '\x01';
      }
    }
    else {
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      local_58 = lVar7;
      if ((cVar4 != '\0') && (lVar14 != 0)) {
        FUN_00d50b20();
      }
    }
    local_50[0] = cVar3;
    local_80 = local_70;
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar11 = &local_70;
    cVar4 = FUN_01253c10(puVar11,&local_40,&local_88,&local_64);
  } while (cVar4 != '\0');
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}


