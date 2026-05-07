// Function: FUN_01318610
// Address: 01318610
// Size: 2543 bytes
// Class: MUSampledFunction


/* WARNING: Removing unreachable block (ram,0x01318c1c) */
/* WARNING: Removing unreachable block (ram,0x01318c28) */
/* WARNING: Removing unreachable block (ram,0x01318ac2) */
/* WARNING: Removing unreachable block (ram,0x01318ad2) */
/* WARNING: Removing unreachable block (ram,0x01318b4b) */
/* WARNING: Removing unreachable block (ram,0x01318b57) */
/* WARNING: Removing unreachable block (ram,0x01318e96) */
/* WARNING: Removing unreachable block (ram,0x01318ea2) */

ulonglong FUN_01318610(undefined8 param_1,undefined4 param_2)

{
  uint3 uVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  longlong *plVar8;
  longlong **pplVar9;
  longlong *plVar10;
  pthread_key_t pVar11;
  int unaff_EDI;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined7 uVar15;
  bool bVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da_01;
  longlong *local_90;
  int local_84;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  longlong *local_38;
  
  local_84 = unaff_EDI;
  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  plVar10 = local_70;
  pVar11 = (pthread_key_t)param_1;
  uVar1 = (uint3)((uint)param_2 >> 8);
  bVar2 = (byte)param_2;
  if (local_68 == '\0') {
    if (local_70 == (longlong *)0x0) goto LAB_01318829;
    FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_013186b3:
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2610();
    plVar8 = local_70;
    if ((((local_68 == '\0') && (local_70 != (longlong *)0x0)) && (FUN_00d50b00(), local_68 != '\0')
        ) && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2810();
    local_38 = local_70;
    local_90 = local_70;
    if (local_68 == '\0') {
      if (local_70 == (longlong *)0x0) {
        local_90 = (longlong *)0x0;
        local_38 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
        local_38 = local_90;
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
    }
    uVar13 = (ulonglong)CONCAT31(uVar1,plVar8 != (longlong *)0x0);
    if ((plVar8 == (longlong *)0x0) && ((bVar2 ^ 1) == 0)) {
      plVar8 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(undefined1 *)(plVar8 + 8) = 0;
      plVar8[7] = 0;
      plVar8[9] = 0;
      plVar8[10] = 0;
      plVar8[0xb] = 0;
      pVar11 = 0x25d2108;
      *plVar8 = (longlong)&DAT_025d2108;
      *(undefined4 *)(plVar8 + 0xc) = 0;
      plVar8[0xd] = 0;
      (*DAT_025d2120)();
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_011f0a90();
      pvVar7 = _pthread_getspecific(pVar11);
      plVar14 = plVar8;
      if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        plVar14 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_011f0ae0();
      if (local_38 == (longlong *)0x0) {
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f2270();
        uVar15 = (undefined7)((ulonglong)plVar14 >> 8);
      }
      else {
        pvVar7 = _pthread_getspecific(pVar11);
        if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
          plVar10 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f2240();
        local_70 = local_38;
        local_68 = '\0';
        uVar4 = FUN_00d23d20();
        uVar17 = extraout_XMM0_Da;
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
        FUN_011f23a0(uVar17,uVar4);
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        uVar15 = (undefined7)((ulonglong)plVar10 >> 8);
      }
      uVar13 = CONCAT71(uVar15,1);
    }
    FUN_004fbac0();
    if (local_38 == (longlong *)0x0) {
LAB_01318b8d:
      pplVar9 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*local_38 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01318b8d;
      pplVar9 = &local_90;
    }
    uVar5 = (uint)uVar13 & 0xff;
    if (*pplVar9 == (longlong *)0x0) {
      uVar5 = 0;
    }
    if (*pplVar9 == (longlong *)0x0 && (bVar2 ^ 1) == 0) {
      if (local_38 != (longlong *)0x0) {
        pvVar7 = _pthread_getspecific(0);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f24e0();
      }
      plVar10 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(undefined1 *)(plVar10 + 8) = 0;
      plVar10[7] = 0;
      plVar10[9] = 0;
      plVar10[10] = 0;
      plVar10[0xb] = 0;
      pVar11 = 0x25d58b0;
      *plVar10 = (longlong)&DAT_025d58b0;
      *(undefined4 *)(plVar10 + 0xc) = 0;
      (*DAT_025d58c8)();
      if (plVar10 == local_38) {
        FUN_00d50b20();
      }
      else {
        bVar16 = local_38 != (longlong *)0x0;
        local_90 = plVar10;
        local_38 = plVar10;
        if (bVar16) {
          FUN_00d50b20();
        }
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
        pVar11 = (pthread_key_t)local_38;
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_011f0a90();
      pvVar7 = _pthread_getspecific(pVar11);
      if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        pVar11 = (pthread_key_t)local_38;
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_011f0ae0();
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011f2240();
      local_68 = '\0';
      local_70 = plVar8;
      iVar6 = FUN_00d23d20();
      uVar17 = extraout_XMM0_Da_00;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        uVar17 = FUN_00d50b20();
      }
      FUN_011f23a0(uVar17,iVar6 + 1);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar13 = (ulonglong)uVar5;
    }
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    pVar11 = 0;
    FUN_00d50b20();
  }
  else {
    if (local_70 != (longlong *)0x0) goto LAB_013186b3;
LAB_01318829:
    if (bVar2 == 0) {
      pVar11 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      uVar13 = 0;
    }
    else {
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7900();
      pVar11 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      uVar13 = CONCAT71((uint7)uVar1,1);
    }
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar17 = FUN_012e6160();
  plVar10 = local_70;
  if (local_68 == '\0') {
    if (local_70 == (longlong *)0x0) goto LAB_01318fe6;
    uVar17 = FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      uVar17 = FUN_00d50b20();
    }
  }
  else if (local_70 == (longlong *)0x0) goto LAB_01318fe6;
  local_68 = 0;
  local_70 = (longlong *)0x0;
  local_60 = plVar10;
  local_50 = 0;
  local_58 = 0;
  uStack_54 = 0;
  if (0 < *(int *)((longlong)plVar10 + 0xc)) {
    local_84 = local_84 + 1;
    lVar12 = 0;
    do {
      local_70 = *(longlong **)(plVar10[2] + lVar12 * 8);
      cVar3 = FUN_01318610(uVar17,bVar2);
      uVar13 = uVar13 & 0xff;
      if (cVar3 == '\0') {
        uVar13 = 0;
      }
      lVar12 = lVar12 + 1;
      local_58 = (int)lVar12;
      uVar17 = extraout_XMM0_Da_01;
    } while (local_58 < *(int *)((longlong)plVar10 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_01318fe6:
  return uVar13 & 0xffffff01;
}


