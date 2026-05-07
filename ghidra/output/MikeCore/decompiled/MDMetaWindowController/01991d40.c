// Function: FUN_01991d40
// Address: 01991d40
// Size: 1946 bytes
// Class: MDMetaWindowController
// String references:
//   "%I"


/* WARNING: Removing unreachable block (ram,0x019923ce) */
/* WARNING: Removing unreachable block (ram,0x019923da) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01991d40(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 *local_50;
  char local_48 [8];
  char local_40 [8];
  undefined8 *local_38;
  
  (**(code **)(*unaff_RDI + 0x988))();
  FUN_00d23310();
  puVar14 = local_50;
  puVar11 = (undefined8 *)CONCAT71((int7)((ulonglong)param_1 >> 8),local_48[0]);
  pcVar12 = local_40;
  if (local_48[0] != '\0') {
    pcVar12 = local_48;
  }
  local_40[0] = local_48[0];
  *pcVar12 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] == '\0') && (puVar14 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
  puVar15 = puVar14;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    puVar15 = (undefined8 *)puVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  lVar7 = puVar15[0x27];
  pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
  if (pvVar6 != (void *)0x0) {
    lVar7 = puVar15[0x27];
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  iVar1 = *(int *)(lVar7 + 0x3c);
  pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
  puVar15 = puVar14;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    puVar15 = (undefined8 *)puVar14[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  lVar7 = puVar15[0x27];
  pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
  if (pvVar6 != (void *)0x0) {
    lVar7 = puVar15[0x27];
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  uVar2 = *(uint *)(*(longlong *)(lVar7 + 0x48) + 0xc);
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_60 + 0x370))();
  puVar15 = local_50;
  if (local_48[0] == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48[0] = '\0';
  }
  FUN_01d48a10();
  if (puVar15 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  local_38 = puVar14;
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (0 < (int)uVar2) {
    uVar13 = 0;
    do {
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      puVar14 = local_38;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), puVar14 = local_38, lVar7 != 0)) {
        puVar11 = local_38;
        puVar14 = (undefined8 *)local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      lVar7 = puVar14[0x27];
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        lVar7 = puVar14[0x27];
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x48) + 0x10) + uVar13 * 8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      puVar14 = local_38;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), puVar14 = local_38, lVar8 != 0)) {
        puVar11 = local_38;
        puVar14 = (undefined8 *)local_38[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      lVar8 = puVar14[0x27];
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        lVar8 = puVar14[0x27];
        lVar9 = FUN_00e8b990();
        if (lVar9 != 0) {
          lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
      }
      iVar3 = *(int *)(lVar8 + 0x40);
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      puVar14 = local_38;
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), puVar14 = local_38, lVar8 != 0)) {
        puVar11 = local_38;
        puVar14 = (undefined8 *)local_38[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      lVar8 = puVar14[0x27];
      pVar10 = (pthread_key_t)puVar11;
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        lVar8 = puVar14[0x27];
        lVar9 = FUN_00e8b990();
        if (lVar9 != 0) {
          lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
      }
      iVar4 = *(int *)(lVar8 + 0x3c);
      uVar16 = (**(code **)(*unaff_RDI + 0x938))();
      uVar17 = (**(code **)(*unaff_RDI + 0x938))
                         ((double)((int)uVar13 - iVar3 * iVar4) + (double)iVar1);
      auVar20._8_8_ = extraout_XMM0_Qb_00;
      auVar20._0_8_ = uVar17;
      auVar18._8_8_ = extraout_XMM0_Qb;
      auVar18._0_8_ = uVar16;
      auVar19._4_12_ = auVar20._4_12_;
      auVar19._0_4_ = (float)uVar17 - (float)uVar16;
      auVar20 = blendps(auVar19,_DAT_023b27c0,0xe);
      auVar18 = blendps(auVar18,_DAT_023b4a30,0xe);
      FUN_01d39800(auVar18._0_8_,auVar20._0_8_,0);
      puVar14 = local_50;
      if ((((local_48[0] == '\0') && (local_50 != (undefined8 *)0x0)) &&
          (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d48b40();
      pvVar6 = _pthread_getspecific(pVar10);
      lVar8 = lVar7;
      if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        lVar8 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
      }
      if (*(int *)(*(longlong *)(lVar8 + 0x38) + 0xc) == 0) {
        FUN_01cfcdc0();
        puVar11 = local_50;
        if (local_48[0] == '\0') {
          if (local_50 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48[0] = '\0';
        }
        FUN_01d488d0();
        if (puVar11 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01cfcdc0();
        puVar11 = local_50;
        if (local_48[0] == '\0') {
          if (local_50 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48[0] = '\0';
        }
        FUN_01d488d0();
        if (puVar11 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
      plVar5 = (longlong *)*unaff_RSI;
      pvVar6 = _pthread_getspecific(pVar10);
      lVar8 = lVar7;
      if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        lVar8 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
      }
      local_58 = 1;
      puVar11 = &DAT_024cc6f0;
      local_60 = &DAT_024cc6f0;
      local_54 = *(undefined4 *)(lVar8 + 0x40);
      FUN_00d8cb40(&DAT_024cc6f0,&local_60);
      puVar15 = local_50;
      if (local_48[0] == '\0') {
        if (local_50 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48[0] = '\0';
      }
      (**(code **)(*plVar5 + 0x3f0))();
      if (puVar15 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar14 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      uVar13 = uVar13 + 1;
    } while (uVar2 != uVar13);
  }
  puVar14 = local_38;
  FUN_01d48b40();
  if (puVar14 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


