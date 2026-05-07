// Function: FUN_01327e70
// Address: 01327e70
// Size: 1431 bytes
// Class: MUAudioSourceSibilantItem
// String references:
//   "MUAudioSourceSibilantItem"


/* WARNING: Removing unreachable block (ram,0x0132822a) */
/* WARNING: Removing unreachable block (ram,0x01328236) */
/* WARNING: Removing unreachable block (ram,0x013282c4) */
/* WARNING: Removing unreachable block (ram,0x013282d0) */
/* WARNING: Removing unreachable block (ram,0x0132833e) */
/* WARNING: Removing unreachable block (ram,0x0132834b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01327e70(pthread_key_t param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined7 uVar10;
  uint uVar11;
  uint uVar12;
  pthread_key_t pVar13;
  longlong **pplVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined7 uVar18;
  ulonglong uVar17;
  longlong lVar19;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_68 = (longlong *)0x0;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df790();
  local_60 = local_58;
  if (local_58 == (longlong *)0x0) {
    bVar2 = true;
    bVar3 = true;
    local_60 = (longlong *)0x0;
    uVar11 = MACH_HEADER.filetype;
  }
  else {
    if (((local_50 == '\0') && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    bVar2 = false;
    bVar3 = false;
    uVar11 = *(uint *)((longlong)local_60 + 0xc);
  }
  if (0 < (int)uVar11) {
    lVar19 = (ulonglong)uVar11 + 1;
    plVar15 = (longlong *)0x0;
    lVar16 = 0;
    local_48 = 0;
    local_38 = 0;
    do {
      uVar11 = uVar11 - 1;
      lVar8 = local_60[2];
      lVar1 = *(longlong *)(lVar8 + (ulonglong)uVar11 * 8);
      uVar12 = uVar11;
      if (lVar16 == lVar1) {
        if (((char)local_48 == '\0') && (lVar16 != 0)) {
          local_48 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          lVar8 = FUN_00d50b00();
        }
        if (((char)local_48 == '\0') || (lVar16 == 0)) {
          local_48 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
          lVar16 = lVar1;
        }
        else {
          uVar9 = FUN_00d50b20();
          local_48 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
          lVar16 = lVar1;
        }
      }
      local_40 = lVar16;
      pvVar7 = _pthread_getspecific(uVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar9 = FUN_013dd6a0();
      plVar4 = local_58;
      uVar10 = (undefined7)((ulonglong)uVar9 >> 8);
      uVar18 = (undefined7)((ulonglong)lVar16 >> 8);
      if (local_58 == plVar15) {
        if (((char)local_38 != '\0') || (local_58 == (longlong *)0x0)) {
          uVar17 = local_38 & 0xffffffff;
          plVar4 = plVar15;
          goto joined_r0x0132810c;
        }
        local_38 = CONCAT71(uVar10,1);
        if (local_50 == '\0') {
          FUN_00d50b00();
          goto LAB_013280b0;
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_68 = plVar4;
          uVar17 = CONCAT71(uVar18,1);
          if (((char)local_38 != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar15 = plVar4;
LAB_013280b0:
            uVar17 = CONCAT71(uVar18,1);
            plVar4 = plVar15;
          }
joined_r0x0132810c:
          plVar15 = plVar4;
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
            local_38 = uVar17 & 0xffffffff;
            goto LAB_01328157;
          }
          local_38 = uVar17 & 0xffffffff;
        }
        else {
          local_68 = local_58;
          if (((char)local_38 != '\0') && (plVar15 != (longlong *)0x0)) {
            uVar9 = FUN_00d50b20();
            local_38 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
            plVar15 = plVar4;
            goto LAB_01328157;
          }
          local_38 = CONCAT71(uVar10,1);
          plVar15 = local_58;
        }
      }
LAB_01328157:
      lVar16 = local_40;
      if ((DAT_027c0190 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_027910a8 = FUN_007ef2d0();
        _DAT_02791090 = "MUAudioSourceSibilantItem";
        _DAT_02791098 = 200;
        _DAT_027910a0 = FUN_01103980;
        _DAT_027910b0 = 0;
        uRam00000000027910b8 = 0;
        _DAT_027910c0 = 0;
        uRam00000000027910c8 = 0;
        _DAT_027910d0 = 0;
        uRam00000000027910d8 = 0;
        _DAT_027910e0 = 0;
        uRam00000000027910e8 = 0;
        _DAT_027910f0 = 0;
        uRam00000000027910f8 = 0;
        _DAT_02791100 = 0;
        uRam0000000002791108 = 0;
        _DAT_02791110 = 0;
        uRam0000000002791118 = 0;
        _DAT_02791120 = 0;
        uRam0000000002791128 = 0;
        _DAT_02791130 = 0;
        uRam0000000002791138 = 0;
        _DAT_02791140 = 0;
        uRam0000000002791148 = 0;
        _DAT_02791150 = 0;
        ___cxa_guard_release();
        lVar16 = local_40;
      }
      pplVar14 = (longlong **)&DAT_02802688;
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar14 = &local_68;
        if (cVar5 == '\0') {
          pplVar14 = (longlong **)&DAT_02802688;
        }
      }
      plVar15 = local_68;
      if (*pplVar14 != (longlong *)0x0) {
        if (((char)local_38 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)pplVar14);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bbe30();
        FUN_01328650();
        if (((char)local_38 != '\0') && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      pVar13 = (pthread_key_t)pplVar14;
      pvVar7 = _pthread_getspecific(pVar13);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd650();
      plVar15 = local_68;
      if (local_68 != (longlong *)0x0) {
        pvVar7 = _pthread_getspecific(pVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc570();
      }
      lVar19 = lVar19 + -1;
    } while (1 < lVar19);
    if (((char)local_38 != '\0') && (plVar15 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar2 = bVar3;
    if (((char)local_48 != '\0') && (lVar16 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}


