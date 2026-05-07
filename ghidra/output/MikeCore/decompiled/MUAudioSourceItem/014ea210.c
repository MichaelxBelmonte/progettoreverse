// Function: FUN_014ea210
// Address: 014ea210
// Size: 1110 bytes
// Class: MUAudioSourceItem
// String references:
//   "MUAudioSourcePrincipalItem::redetectMonophonicPitchAtSuggestedPitchAndUpdatePotentialItem(): _prope...


/* WARNING: Removing unreachable block (ram,0x014ea53e) */
/* WARNING: Removing unreachable block (ram,0x014ea54b) */

ulonglong FUN_014ea210(undefined4 param_1,undefined1 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  pthread_key_t in_ECX;
  pthread_key_t pVar11;
  undefined *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong unaff_RDI;
  longlong lVar16;
  undefined8 *puVar17;
  
  lVar13 = *param_3;
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    lVar13 = *param_3;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  lVar13 = *(longlong *)(lVar13 + 0x108);
  if ((lVar13 == 0) ||
     (FUN_00d50b00(), *(int *)(*(longlong *)(unaff_RDI + 0x108) + 0xc) != *(int *)(lVar13 + 0xc))) {
    FUN_00e828a0();
  }
  uVar1 = *(undefined4 *)(unaff_RDI + 0x80);
  lVar8 = FUN_00e83010();
  uVar6 = *(uint *)(*(longlong *)(unaff_RDI + 0x108) + 0xc);
  if (0 < (int)uVar6) {
    lVar16 = *(longlong *)(*(longlong *)(unaff_RDI + 0x108) + 0x10);
    if ((ulonglong)uVar6 - 1 < 3) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        *(undefined4 *)(lVar8 + uVar14 * 4) =
             *(undefined4 *)(*(longlong *)(lVar16 + uVar14 * 8) + 0x14);
        *(undefined4 *)(lVar8 + 4 + uVar14 * 4) =
             *(undefined4 *)(*(longlong *)(lVar16 + 8 + uVar14 * 8) + 0x14);
        *(undefined4 *)(lVar8 + 8 + uVar14 * 4) =
             *(undefined4 *)(*(longlong *)(lVar16 + 0x10 + uVar14 * 8) + 0x14);
        *(undefined4 *)(lVar8 + 0xc + uVar14 * 4) =
             *(undefined4 *)(*(longlong *)(lVar16 + 0x18 + uVar14 * 8) + 0x14);
        uVar14 = uVar14 + 4;
      } while ((uVar6 & 0xfffffffc) != uVar14);
    }
    if ((ulonglong)(uVar6 & 3) != 0) {
      uVar15 = 0;
      do {
        *(undefined4 *)(uVar14 * 4 + lVar8 + uVar15 * 4) =
             *(undefined4 *)(*(longlong *)(lVar16 + uVar14 * 8 + uVar15 * 8) + 0x14);
        uVar15 = uVar15 + 1;
      } while ((uVar6 & 3) != uVar15);
    }
  }
  uVar6 = FUN_014ea7b0(param_1,param_2);
  uVar14 = (ulonglong)uVar6;
  if ((char)uVar6 != '\0') {
    puVar9 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar12 = &DAT_02572358;
    *puVar9 = &DAT_02572358;
    (*DAT_02572370)();
    pcVar4 = DAT_025e74b8;
    pVar11 = (pthread_key_t)puVar12;
    if (*(int *)(lVar13 + 0xc) < 1) {
      bVar3 = false;
      puVar10 = (undefined8 *)0x0;
    }
    else {
      lVar16 = 0;
      bVar3 = false;
      puVar17 = (undefined8 *)0x0;
      do {
        puVar10 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar10 = &DAT_025e74a0;
        *(undefined8 *)((longlong)puVar10 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar10 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar10 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar10 + 0x24) = 0;
        *(undefined1 *)((longlong)puVar10 + 0x2c) = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[8] = 0;
        puVar10[9] = 0;
        puVar10[10] = 0;
        puVar10[0xb] = 0;
        *(undefined4 *)(puVar10 + 0xc) = 0;
        (*pcVar4)();
        if (puVar10 == puVar17) {
          puVar10 = puVar17;
          if (bVar3) {
            FUN_00d50b20();
            bVar5 = bVar3;
          }
          else {
            bVar5 = true;
          }
        }
        else {
          bVar5 = true;
          if ((bVar3) && (puVar17 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = bVar5;
        lVar2 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + lVar16 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_014ee580();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        *(undefined4 *)((longlong)puVar10 + 0x14) = *(undefined4 *)(lVar8 + lVar16 * 4);
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(lVar8 + lVar16 * 4);
        FUN_00d21140();
        pVar11 = (pthread_key_t)puVar12;
        lVar16 = lVar16 + 1;
        puVar17 = puVar10;
      } while (lVar16 < *(int *)(lVar13 + 0xc));
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014c2990();
    lVar8 = *param_3;
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      lVar8 = *param_3;
      lVar16 = FUN_00e8b990();
      if (lVar16 != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
      }
    }
    FUN_00d64850();
    *(undefined4 *)(lVar8 + 0x80) = uVar1;
    FUN_00d64910();
    if (puVar9 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    uVar14 = CONCAT71((int7)((ulonglong)(lVar8 + 0x80) >> 8),(char)uVar6);
    if ((bVar3) && (puVar10 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00e83070();
  if (lVar13 != 0) {
    FUN_00d50b20();
  }
  return uVar14 & 0xffffffff;
}


