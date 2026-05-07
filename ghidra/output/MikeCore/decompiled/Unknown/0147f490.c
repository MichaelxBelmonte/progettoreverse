// Function: FUN_0147f490
// Address: 0147f490
// Size: 3837 bytes
// Class: Unknown
// String references:
//   "undoStartedElementAnalyzer"


/* WARNING: Removing unreachable block (ram,0x0147fe32) */
/* WARNING: Removing unreachable block (ram,0x0147fe3e) */
/* WARNING: Removing unreachable block (ram,0x0147f8f1) */
/* WARNING: Removing unreachable block (ram,0x0147f8fd) */
/* WARNING: Removing unreachable block (ram,0x0147f5a5) */
/* WARNING: Removing unreachable block (ram,0x0147f5b1) */
/* WARNING: Removing unreachable block (ram,0x0147f950) */
/* WARNING: Removing unreachable block (ram,0x0147f95c) */
/* WARNING: Removing unreachable block (ram,0x0147fe4c) */
/* WARNING: Removing unreachable block (ram,0x0147fe58) */
/* WARNING: Removing unreachable block (ram,0x0147f991) */
/* WARNING: Removing unreachable block (ram,0x0147f99d) */
/* WARNING: Removing unreachable block (ram,0x014800a5) */
/* WARNING: Removing unreachable block (ram,0x014800b1) */
/* WARNING: Removing unreachable block (ram,0x0147fa53) */
/* WARNING: Removing unreachable block (ram,0x0147fa5f) */

undefined8 *
FUN_0147f490(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void *pvVar8;
  longlong *plVar9;
  undefined8 uVar10;
  uint *puVar11;
  pthread_key_t pVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  uint *puVar16;
  byte local_res8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined8 *local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  uint local_78 [2];
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  undefined8 *local_48;
  longlong *local_40;
  char local_38;
  
  if (DAT_028acf00 != (code *)0x0) {
    (*DAT_028acf00)();
    plVar9 = local_80;
    plVar14 = (longlong *)*param_2;
    if (plVar14 == local_80) {
      if ((*(char *)(param_2 + 1) != '\0') || (local_80 == (longlong *)0x0)) goto LAB_0147f57c;
      if ((char)local_78[0] == '\0') {
        FUN_00d50b00();
        goto LAB_0147f579;
      }
    }
    else {
      cVar4 = *(char *)(param_2 + 1);
      if ((char)local_78[0] == '\0') {
        if (local_80 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *param_2 = plVar9;
        if ((cVar4 != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_0147f579:
        *(undefined1 *)(param_2 + 1) = 1;
LAB_0147f57c:
        if (((char)local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0147f5b6;
      }
      *param_2 = local_80;
      if ((cVar4 != '\0') && (plVar14 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(param_2 + 1) = 1;
    local_78[0] = local_78[0] & 0xffffff00;
  }
LAB_0147f5b6:
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_0258a670;
  (*DAT_0258a688)();
  FUN_00e38130(0,0,0);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02578b00;
  (*DAT_02578b18)();
  pVar12 = 1;
  FUN_00d7a0f0();
  pcVar2 = DAT_02572370;
  local_48 = puVar5;
  if ((longlong *)*unaff_RSI != (longlong *)0x0) {
    local_78[0] = local_78[0] & 0xffffff00;
    local_80 = (longlong *)0x0;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_70 = (longlong *)*unaff_RSI;
LAB_0147f6a8:
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar15 = -local_68._4_4_;
        }
        else {
          local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar15 = 0;
        }
        local_68 = CONCAT44(iVar15,(int)local_68);
      }
      lVar7 = (longlong)(int)local_68;
      iVar15 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar15);
      if (*(int *)((longlong)local_70 + 0xc) <= iVar15) break;
      local_80 = *(longlong **)(local_70[2] + 8 + lVar7 * 8);
      pvVar8 = _pthread_getspecific((pthread_key_t)local_70[2]);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01265b80();
      lVar7 = local_c0;
      if (local_b8 == '\0') goto LAB_0147f760;
      if (local_c0 != 0) goto LAB_0147f78e;
    }
    plVar14 = local_70;
    FUN_001159b0();
    pVar12 = (pthread_key_t)plVar14;
  }
  uVar10 = FUN_01480f60();
  plVar14 = local_80;
  if ((char)local_78[0] == '\0') {
    if (local_80 == (longlong *)0x0) goto LAB_01480133;
    FUN_00d50b00();
    if (((char)local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_80 == (longlong *)0x0) {
LAB_01480133:
    local_98 = (undefined8 *)
               CONCAT44(local_98._4_4_,(int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1));
    lVar7 = *unaff_RSI;
    goto joined_r0x01480148;
  }
  local_78[0] = local_78[0] & 0xffffff00;
  local_80 = (longlong *)0x0;
  local_70 = plVar14;
  local_68 = 0xffffffff;
  local_60 = 0;
  while( true ) {
    lVar7 = (longlong)(int)local_68;
    iVar15 = (int)local_68 + 1;
    local_68 = CONCAT44(local_68._4_4_,iVar15);
    if (*(int *)((longlong)local_70 + 0xc) <= iVar15) break;
    local_80 = *(longlong **)(local_70[2] + 8 + lVar7 * 8);
    if (DAT_02802ec0 != (code *)0x0) {
      (*DAT_02802ec0)();
    }
    (**(code **)(*local_80 + 0x398))();
    if (local_68._4_4_ != 0) {
      if ((longlong)local_68 < 0) {
        iVar15 = -local_68._4_4_;
      }
      else {
        local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
        FUN_00d23690();
        local_60 = local_60 + local_68._4_4_;
        iVar15 = 0;
      }
      local_68 = CONCAT44(iVar15,(int)local_68);
    }
  }
  plVar9 = local_70;
  FUN_0079b950();
  pVar12 = (pthread_key_t)plVar9;
  local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
  lVar7 = *unaff_RSI;
joined_r0x01480148:
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0xc) != 0)) {
    FUN_00d23310();
    plVar9 = local_80;
    local_c0 = CONCAT71(local_c0._1_7_,(char)local_78[0]);
    puVar11 = (uint *)&local_c0;
    if ((char)local_78[0] != '\0') {
      puVar11 = local_78;
    }
    *(undefined1 *)puVar11 = 0;
    if (((char)local_78[0] != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar7 = FUN_00e8b990();
    if (((char)local_c0 != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((lVar7 != 0 & local_res8) != 0) {
      FUN_00d23310();
      plVar9 = local_80;
      puVar11 = (uint *)&local_58;
      puVar16 = local_78;
      if ((char)local_78[0] == '\0') {
        puVar16 = puVar11;
      }
      local_58 = (char)local_78[0];
      *(undefined1 *)puVar16 = 0;
      if (((char)local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_014334a0();
      plVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      plVar1 = (longlong *)*unaff_RSI;
      local_78[0] = 1;
      local_80 = &DAT_024c5048;
      local_68 = local_68 & 0xffffffffffffff00;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_68 = CONCAT71(local_68._1_7_,1);
      local_70 = plVar1;
      FUN_00db2810(&DAT_027c1b20,"undoStartedElementAnalyzer",&local_80);
      local_80 = &DAT_024c5048;
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  *unaff_RDI = plVar14;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
LAB_0147f760:
  if (local_c0 != 0) {
    FUN_00d50b00();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
LAB_0147f78e:
    local_b8 = '\0';
    local_c0 = 0;
    local_b0 = lVar7;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    local_a8._4_4_ = 0;
    while( true ) {
      if (local_a8._4_4_ != 0) {
        if (local_a8._4_4_ < 1) {
          iVar15 = -local_a8._4_4_;
        }
        else {
          iVar15 = (int)local_a8 - local_a8._4_4_;
          local_a8 = CONCAT44(local_a8._4_4_,iVar15);
          FUN_00d23690();
          local_a0 = local_a0 + local_a8._4_4_;
          iVar15 = 0;
        }
        local_a8 = CONCAT44(iVar15,(int)local_a8);
      }
      lVar7 = (longlong)(int)local_a8;
      iVar15 = (int)local_a8 + 1;
      local_a8 = CONCAT44(local_a8._4_4_,iVar15);
      if (*(int *)(local_b0 + 0xc) <= iVar15) break;
      lVar13 = *(longlong *)(local_b0 + 0x10);
      local_c0 = *(longlong *)(lVar13 + 8 + lVar7 * 8);
      pvVar8 = _pthread_getspecific((pthread_key_t)lVar13);
      pVar12 = (pthread_key_t)lVar13;
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef640();
      plVar14 = local_40;
      if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01480e00();
      plVar9 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)FUN_00e8fc40();
        FUN_000fdf90();
        (**(code **)(*plVar9 + 0x18))();
        FUN_013fb180();
        FUN_013fb350();
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*pcVar2)();
        local_98 = puVar5;
        FUN_00e33de0();
        lVar7 = DAT_027295d0;
        if (DAT_027295d0 != 0) {
          FUN_00d50b00();
        }
        local_40 = (longlong *)lVar7;
        local_38 = '\0';
        FUN_00ca0840();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        FUN_00e33de0();
        FUN_00d46300();
        lVar13 = local_90;
        lVar7 = DAT_027295c0;
        if (local_88 == '\0') {
          if (local_90 != 0) {
            FUN_00d50b00();
            lVar7 = DAT_027295c0;
          }
        }
        else {
          local_88 = '\0';
        }
        DAT_027295c0 = lVar7;
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = (longlong *)lVar7;
        FUN_00ca0840();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        FUN_00e33de0();
        FUN_00d46300();
        lVar13 = local_90;
        lVar7 = DAT_027295c8;
        if (local_88 == '\0') {
          if (local_90 != 0) {
            FUN_00d50b00();
            lVar7 = DAT_027295c8;
          }
        }
        else {
          local_88 = '\0';
        }
        DAT_027295c8 = lVar7;
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = (longlong *)lVar7;
        FUN_00ca0840();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        FUN_00e33de0();
        pvVar8 = _pthread_getspecific(pVar12);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        lVar13 = local_90;
        lVar7 = DAT_02729618;
        if (local_88 == '\0') {
          if (local_90 != 0) {
            FUN_00d50b00();
            lVar7 = DAT_02729618;
          }
        }
        else {
          local_88 = '\0';
        }
        DAT_02729618 = lVar7;
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = (longlong *)lVar7;
        FUN_00ca0840();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        FUN_01480eb0();
        FUN_00d50b20();
      }
      local_40 = local_80;
      local_38 = '\0';
      cVar4 = FUN_00d7a850();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        FUN_00e33de0();
        lVar7 = DAT_027295d0;
        if (DAT_027295d0 != 0) {
          FUN_00d50b00();
        }
        FUN_000175c0();
        plVar3 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        local_40 = local_80;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_40 = local_80;
        local_38 = '\0';
        FUN_00d7a410();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      *(undefined1 *)((longlong)plVar9 + 0xd5) = param_4;
      FUN_00d50b20();
      if (plVar14 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_0015edf0();
    FUN_00d50b20();
  }
  goto LAB_0147f6a8;
}


