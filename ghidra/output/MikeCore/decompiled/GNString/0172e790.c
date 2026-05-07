// Function: FUN_0172e790
// Address: 0172e790
// Size: 1830 bytes
// Class: GNString


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0172e790(double param_1,undefined *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *pvVar9;
  undefined8 *puVar10;
  pthread_key_t in_ECX;
  uint uVar11;
  pthread_key_t pVar12;
  undefined1 *puVar13;
  longlong *in_RDX;
  ulonglong uVar14;
  longlong lVar15;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  bool bVar20;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar21;
  undefined1 local_98 [8];
  undefined1 local_90 [4];
  int local_8c;
  undefined4 local_74;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  double local_40;
  char local_31;
  
  lVar17 = *unaff_RSI;
  local_31 = (char)unaff_RSI[1];
  local_58 = param_2;
  local_40 = param_1;
  if ((local_31 != '\0') && (lVar17 != 0)) {
    FUN_00d50b00();
  }
  local_68 = lVar17;
  pvVar9 = _pthread_getspecific(in_ECX);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar6 = FUN_016c2ea0();
  if (iVar6 < 1) {
    local_70 = FUN_00e7bdb0();
    local_60 = FUN_00e7bdb0();
    local_40 = (double)*in_RDX;
    if (local_40 == 0.0) {
      puVar10 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &DAT_025683c0;
      (*DAT_025683d8)();
      uVar21 = FUN_00c92170();
      puVar1 = *(undefined8 **)(unaff_RDI + 0x10);
      if (puVar1 == puVar10) {
        uVar21 = FUN_00d50b20();
      }
      else {
        *(undefined8 **)(unaff_RDI + 0x10) = puVar10;
        if (puVar1 != (undefined8 *)0x0) {
          uVar21 = FUN_00d50b20();
        }
      }
      lVar18 = *(longlong *)(unaff_RDI + 0x10);
      iVar6 = *(int *)(lVar18 + 0x18);
      FUN_00c8e340(uVar21,1);
      uVar21 = _UNK_023d92e8;
      puVar1 = (undefined8 *)(*(longlong *)(lVar18 + 0x10) + (longlong)iVar6);
      *puVar1 = _DAT_023d92e0;
      puVar1[1] = uVar21;
      goto joined_r0x0172ebee;
    }
  }
  else {
    pvVar9 = _pthread_getspecific(in_ECX);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar12 = 0;
    local_70 = FUN_016cb690(local_40,0);
    pvVar9 = _pthread_getspecific(pVar12);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = FUN_016cb690(local_40 + (double)local_58,0);
    local_40 = (double)*in_RDX;
    if (local_40 == 0.0) {
      puVar10 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar12 = 0x25683c0;
      local_58 = &DAT_025683c0;
      *puVar10 = &DAT_025683c0;
      pcVar3 = DAT_025683d8;
      (*DAT_025683d8)();
      FUN_00c92170();
      puVar1 = *(undefined8 **)(unaff_RDI + 0x10);
      if (puVar1 == puVar10) {
        FUN_00d50b20();
      }
      else {
        *(undefined8 **)(unaff_RDI + 0x10) = puVar10;
        if (puVar1 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00c8e7d0();
      local_74 = 0xffffffff;
      pvVar9 = _pthread_getspecific(pVar12);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar13 = local_98;
      FUN_016ca840(puVar13,local_70,local_90,&local_74);
      lVar18 = local_50;
      if ((((local_48 == '\0') && (local_50 != 0)) && (FUN_00d50b00(), local_48 != '\0')) &&
         (local_50 != 0)) {
        FUN_00d50b20();
      }
      do {
        while( true ) {
          pVar12 = (pthread_key_t)puVar13;
          uVar7 = FUN_0123fef0();
          uVar8 = FUN_0123ff00();
          local_40 = (double)FUN_00e7c860();
          puVar10 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar10 = local_58;
          (*pcVar3)();
          uVar21 = FUN_00c92170();
          puVar1 = *(undefined8 **)(unaff_RDI + 0x10);
          if (puVar1 == puVar10) {
            uVar21 = FUN_00d50b20();
          }
          else {
            *(undefined8 **)(unaff_RDI + 0x10) = puVar10;
            if (puVar1 != (undefined8 *)0x0) {
              uVar21 = FUN_00d50b20();
            }
          }
          lVar17 = *(longlong *)(unaff_RDI + 0x10);
          lVar15 = (longlong)*(int *)(lVar17 + 0x18);
          FUN_00c8e340(uVar21,1);
          lVar17 = *(longlong *)(lVar17 + 0x10);
          *(undefined4 *)(lVar17 + lVar15) = uVar7;
          *(undefined4 *)(lVar17 + 4 + lVar15) = uVar8;
          *(double *)(lVar17 + 8 + lVar15) = local_40;
          if ((local_8c == 0) || ((local_60._4_4_ != 0 && (cVar5 = FUN_00e7c020(), cVar5 == '\0'))))
          {
            lVar17 = local_68;
            if (lVar18 != 0) {
              FUN_00d50b20();
              lVar17 = local_68;
            }
            goto joined_r0x0172ebee;
          }
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          puVar13 = local_90;
          FUN_016ca9d0(puVar13,local_98,&local_74);
          lVar15 = local_50;
          if (local_50 != lVar18) break;
joined_r0x0172ee65:
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          lVar17 = local_68;
          if (lVar18 == 0) goto joined_r0x0172ebee;
        }
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
          bVar20 = lVar18 != 0;
          lVar18 = lVar15;
          if (bVar20) {
            FUN_00d50b20();
          }
          goto joined_r0x0172ee65;
        }
        if (lVar18 != 0) {
          FUN_00d50b20();
        }
        lVar18 = lVar15;
        lVar17 = local_68;
      } while (lVar15 != 0);
      goto joined_r0x0172ebee;
    }
  }
  dVar4 = local_40;
  lVar18 = in_RDX[1];
  if ((char)lVar18 != '\0') {
    FUN_00d50b00();
  }
  iVar6 = *(int *)((longlong)dVar4 + 0x18);
  iVar19 = iVar6 + 0xf;
  if (-1 < iVar6) {
    iVar19 = iVar6;
  }
  uVar16 = (iVar19 >> 4) - 1;
  lVar17 = 0;
  local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar16);
  uVar14 = 0;
  if (0 < (int)uVar16) {
    uVar14 = (ulonglong)uVar16;
  }
  lVar15 = 0x18;
  do {
    if (-lVar17 == uVar14) {
      uVar16 = (uint)uVar14;
      goto joined_r0x0172ea34;
    }
    if ((((NAN(*(double *)(*(longlong *)((longlong)local_40 + 0x10) + -0x10 + lVar15))) ||
         (local_70._4_4_ == 0)) || (cVar5 = FUN_00e7c720(), cVar5 == '\0')) ||
       ((NAN(*(double *)(*(longlong *)((longlong)local_40 + 0x10) + lVar15)) ||
        (local_70._4_4_ == 0)))) {
      uVar16 = -(int)lVar17;
      goto joined_r0x0172ea34;
    }
    cVar5 = FUN_00e7c790();
    lVar17 = lVar17 + -1;
    lVar15 = lVar15 + 0x10;
  } while (cVar5 != '\0');
  uVar16 = ~(uint)lVar17;
joined_r0x0172ea34:
  if (local_60._4_4_ != 0) {
    lVar17 = (longlong)(int)(uint)local_58;
    uVar11 = (uint)local_58;
    if ((int)uVar16 < (int)(uint)local_58) {
      uVar11 = uVar16;
    }
    local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
    local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar11);
    uVar14 = lVar17 << 4 | 8;
    do {
      if (((lVar17 <= (int)uVar16) || (local_60._4_4_ == 0)) ||
         ((NAN(*(double *)(*(longlong *)((longlong)local_40 + 0x10) + uVar14)) ||
          (((cVar5 = FUN_00e7c790(), cVar5 != '\0' || (local_60._4_4_ == 0)) ||
           (NAN(*(double *)(*(longlong *)((longlong)local_40 + 0x10) + -0x10 + uVar14)))))))) break;
      cVar5 = FUN_00e7c720();
      uVar14 = uVar14 - 0x10;
      lVar17 = lVar17 + -1;
    } while (cVar5 == '\0');
  }
  uVar14 = FUN_00e7b4e0();
  FUN_00c92250(extraout_XMM0_Qa,(uVar14 & 0xfffffff0fffffff) << 4);
  lVar15 = local_50;
  lVar17 = local_68;
  if (((local_48 == '\0') && (local_50 != 0)) &&
     ((FUN_00d50b00(), local_48 != '\0' && (local_50 != 0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  lVar2 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar2 == lVar15) {
    if (lVar15 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x10) = lVar15;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((char)lVar18 != '\0') {
    FUN_00d50b20();
  }
joined_r0x0172ebee:
  if ((local_31 != '\0') && (lVar17 != 0)) {
    FUN_00d50b20();
  }
  return;
}


