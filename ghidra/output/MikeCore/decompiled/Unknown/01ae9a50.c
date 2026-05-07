// Function: FUN_01ae9a50
// Address: 01ae9a50
// Size: 4653 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01aeab6f) */
/* WARNING: Removing unreachable block (ram,0x01aeab78) */
/* WARNING: Removing unreachable block (ram,0x01aea73a) */
/* WARNING: Removing unreachable block (ram,0x01aea746) */
/* WARNING: Removing unreachable block (ram,0x01ae9bcc) */
/* WARNING: Removing unreachable block (ram,0x01ae9bd8) */
/* WARNING: Removing unreachable block (ram,0x01ae9c24) */
/* WARNING: Removing unreachable block (ram,0x01ae9c30) */
/* WARNING: Removing unreachable block (ram,0x01aeaa05) */
/* WARNING: Removing unreachable block (ram,0x01aeaa11) */
/* WARNING: Removing unreachable block (ram,0x01aeabb1) */
/* WARNING: Removing unreachable block (ram,0x01aeabba) */
/* WARNING: Removing unreachable block (ram,0x01aea794) */
/* WARNING: Removing unreachable block (ram,0x01aea7a0) */
/* WARNING: Removing unreachable block (ram,0x01aeaaf3) */
/* WARNING: Removing unreachable block (ram,0x01aeab00) */
/* WARNING: Removing unreachable block (ram,0x01ae9dfb) */
/* WARNING: Removing unreachable block (ram,0x01ae9e04) */
/* WARNING: Removing unreachable block (ram,0x01ae9d9a) */
/* WARNING: Removing unreachable block (ram,0x01ae9da7) */
/* WARNING: Removing unreachable block (ram,0x01ae9b41) */
/* WARNING: Removing unreachable block (ram,0x01ae9b4a) */
/* WARNING: Removing unreachable block (ram,0x01ae9a9a) */
/* WARNING: Removing unreachable block (ram,0x01ae9aa3) */
/* WARNING: Removing unreachable block (ram,0x01ae9d64) */
/* WARNING: Removing unreachable block (ram,0x01ae9d71) */
/* WARNING: Removing unreachable block (ram,0x01ae9dd0) */
/* WARNING: Removing unreachable block (ram,0x01ae9ddd) */
/* WARNING: Removing unreachable block (ram,0x01aeaac0) */
/* WARNING: Removing unreachable block (ram,0x01aeaacd) */
/* WARNING: Removing unreachable block (ram,0x01aea2b6) */
/* WARNING: Removing unreachable block (ram,0x01aea2bf) */
/* WARNING: Removing unreachable block (ram,0x01aeaa62) */
/* WARNING: Removing unreachable block (ram,0x01aeaa6b) */

undefined8 * FUN_01ae9a50(undefined1 *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  longlong lVar13;
  pthread_key_t pVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  uint uVar18;
  longlong *plVar19;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_140;
  char local_138;
  longlong local_b8;
  char local_b0;
  longlong local_80;
  char local_78;
  longlong local_68;
  char local_60;
  undefined8 *local_48;
  longlong *local_40;
  char local_38;
  
  plVar6 = local_40;
  puVar15 = param_1;
  FUN_0173ba80();
  pVar14 = (pthread_key_t)puVar15;
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01ad3cb0();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar12 = _pthread_getspecific(pVar14);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b6f0();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar4 = DAT_027e3bd8;
  if (DAT_027e3bd8 != 0) {
    FUN_00d50b00();
  }
  lVar5 = DAT_027e3be0;
  if (DAT_027e3be0 != 0) {
    FUN_00d50b00();
  }
  FUN_017c0610();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_017c0610();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  pvVar12 = _pthread_getspecific(pVar14);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b6f0();
  pvVar12 = _pthread_getspecific(pVar14);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736da0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific(pVar14);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01740240();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01ae9e76;
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
LAB_01ae9e76:
    bVar3 = true;
    bVar2 = false;
    goto LAB_01ae9e82;
  }
  pvVar12 = _pthread_getspecific(pVar14);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736e30();
  bVar2 = true;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  bVar3 = false;
LAB_01ae9e82:
  local_48 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar16 = (longlong *)&DAT_02572358;
  *local_48 = &DAT_02572358;
  (*DAT_02572370)();
  if (*(longlong *)(unaff_RSI + 0x2b8) == 0) {
    FUN_01ad46e0();
  }
  pvVar12 = _pthread_getspecific((pthread_key_t)plVar16);
  if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
    plVar16 = local_40;
  }
  cVar7 = FUN_01736d10();
  if ((cVar7 != '\0') && (*(int *)(*(longlong *)(unaff_RSI + 0x2b8) + 0xc) != 0)) {
    pvVar12 = _pthread_getspecific((pthread_key_t)plVar16);
    if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      plVar16 = local_40;
    }
    iVar10 = FUN_01737820();
    pvVar12 = _pthread_getspecific((pthread_key_t)plVar16);
    if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
      plVar16 = local_40;
    }
    iVar11 = FUN_01736dd0();
    uVar18 = iVar10 - iVar11;
    if ((-1 < (int)uVar18) && ((int)uVar18 < *(int *)(*(longlong *)(unaff_RSI + 0x2b8) + 0xc))) {
      plVar16 = (longlong *)(ulonglong)uVar18;
      puVar1 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(unaff_RSI + 0x2b8) + 0x10) + (longlong)plVar16 * 8);
      if (local_48 != puVar1) {
        if (puVar1 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        local_48 = puVar1;
      }
    }
  }
  FUN_016ab300();
  pvVar12 = _pthread_getspecific((pthread_key_t)plVar16);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b6f0();
  pvVar12 = _pthread_getspecific((pthread_key_t)plVar16);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736d70();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_016ac280();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific((pthread_key_t)plVar16);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b6f0();
  pvVar12 = _pthread_getspecific((pthread_key_t)plVar16);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736da0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  uVar18 = *(uint *)((longlong)local_48 + 0xc);
  if ((int)uVar18 < 1) {
    bVar8 = false;
    bVar9 = false;
  }
  else {
    uVar17 = CONCAT71((int7)((ulonglong)plVar16 >> 8),local_40 == (longlong *)0x0);
    lVar13 = (ulonglong)uVar18 + 1;
    bVar9 = false;
    bVar8 = false;
    do {
      pvVar12 = _pthread_getspecific((pthread_key_t)uVar17);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017aabf0();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if (local_40 == (longlong *)0x0) {
LAB_01aea700:
        if (local_40 != (longlong *)0x0) {
          cVar7 = (**(code **)(*local_40 + 0x50))();
          if (cVar7 != '\0') {
            bVar8 = true;
            FUN_00d23620();
          }
          cVar7 = (**(code **)(*local_40 + 0x50))();
          if (cVar7 != '\0') {
            bVar9 = true;
            FUN_00d23620();
          }
LAB_01aea235:
          FUN_00d50b20();
        }
      }
      else {
        FUN_016ab300();
        pvVar12 = _pthread_getspecific((pthread_key_t)uVar17);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017aa5e0();
        pvVar12 = _pthread_getspecific((pthread_key_t)uVar17);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b6f0();
        pvVar12 = _pthread_getspecific((pthread_key_t)uVar17);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01736d70();
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        FUN_016ac280();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        cVar7 = (**(code **)(*local_40 + 0x50))();
        if (cVar7 == '\0') {
          cVar7 = '\0';
        }
        else {
          pvVar12 = _pthread_getspecific((pthread_key_t)uVar17);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017aa5e0();
          pvVar12 = _pthread_getspecific((pthread_key_t)uVar17);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          pvVar12 = _pthread_getspecific((pthread_key_t)uVar17);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01736da0();
          if (local_138 == '\0') {
            if (local_140 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_138 = '\0';
          }
          cVar7 = (**(code **)(*local_40 + 0x50))();
          if (local_140 != 0) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          if ((local_188 != '\0') && (local_190 != 0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != 0)) {
            FUN_00d50b20();
          }
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_80 != 0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_198 != '\0') && (local_1a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (cVar7 == '\0') goto LAB_01aea700;
        if (param_1 != (undefined1 *)0x0) {
          *param_1 = 1;
        }
        if (bVar2) {
          FUN_00d23620();
        }
        if (local_40 != (longlong *)0x0) goto LAB_01aea235;
      }
      lVar13 = lVar13 + -1;
    } while (1 < lVar13);
    uVar18 = *(uint *)((longlong)local_48 + 0xc);
  }
  if ((int)uVar18 < 1) {
    bVar2 = false;
    plVar16 = (longlong *)0x0;
  }
  else {
    lVar13 = 0;
    plVar16 = (longlong *)0x0;
    bVar2 = false;
    do {
      pVar14 = (pthread_key_t)local_48;
      pvVar12 = _pthread_getspecific(pVar14);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017aa5e0();
      pvVar12 = _pthread_getspecific(pVar14);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar12 = _pthread_getspecific(pVar14);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736da0();
      if (plVar16 == local_40) {
        if ((bVar2) || (plVar16 == (longlong *)0x0)) goto joined_r0x01aea960;
        plVar19 = plVar16;
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_01aea980;
        }
LAB_01aea913:
        local_38 = '\0';
        bVar2 = true;
        plVar16 = plVar19;
      }
      else {
        if (local_38 != '\0') {
          plVar19 = local_40;
          if ((bVar2) && (plVar16 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01aea913;
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar19 = local_40;
        if ((bVar2) && (plVar16 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01aea980:
        bVar2 = true;
        plVar16 = plVar19;
joined_r0x01aea960:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((plVar6 != (longlong *)0x0) && (cVar7 = (**(code **)(*plVar6 + 0x50))(), cVar7 != '\0')) {
        local_40 = *(longlong **)(local_48[2] + lVar13 * 8);
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d23620();
        local_38 = '\0';
        FUN_00d23370();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)((longlong)local_48 + 0xc));
  }
  if ((bVar8) && (plVar6 != (longlong *)0x0)) {
    FUN_00d23370();
  }
  if ((bVar9) && (plVar6 != (longlong *)0x0)) {
    FUN_00d23370();
  }
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar16 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return unaff_RDI;
}


