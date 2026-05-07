// Function: FUN_014dcf30
// Address: 014dcf30
// Size: 2700 bytes
// Class: GNString


void FUN_014dcf30(pthread_key_t param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  dword dVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  double dVar11;
  longlong lVar12;
  longlong lVar13;
  undefined7 uVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  uint uVar18;
  int iVar19;
  char *pcVar20;
  longlong *plVar21;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  float fVar25;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float local_9c;
  ulonglong uVar26;
  longlong local_90;
  char local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  longlong local_68;
  double local_60;
  char local_58 [8];
  longlong *local_50;
  double local_48;
  longlong local_38;
  
  cVar4 = (**(code **)(*unaff_RDI + 1000))();
  local_70 = (double)CONCAT44(local_70._4_4_,0xffffffff);
  if ((cVar4 != '\0') && (lVar12 = **(longlong **)(unaff_RDI[0x21] + 0x10), lVar12 != 0)) {
    FUN_00d50b00();
    local_70 = (double)CONCAT44(local_70._4_4_,*(undefined4 *)(lVar12 + 0xc));
    FUN_00d50b20();
  }
  uVar5 = FUN_014c2f80();
  local_50 = (longlong *)CONCAT44(local_50._4_4_,uVar5);
  (**(code **)(*unaff_RDI + 0x378))();
  if ((local_88[0] != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (local_90 != 0) {
    (**(code **)(*unaff_RDI + 0x378))();
    lVar12 = *unaff_RSI;
    if (lVar12 == local_90) {
      if (((char)unaff_RSI[1] != '\0') || (local_90 == 0)) goto LAB_014dd082;
      if (local_88[0] == '\0') {
        FUN_00d50b00();
        goto LAB_014dd078;
      }
    }
    else {
      lVar13 = unaff_RSI[1];
      if (local_88[0] == '\0') {
        if (local_90 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = local_90;
        if (((char)lVar13 != '\0') && (lVar12 != 0)) {
          FUN_00d50b20();
        }
LAB_014dd078:
        *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_014dd082:
        if ((local_88[0] != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_014dd099;
      }
      *unaff_RSI = local_90;
      if (((char)lVar13 != '\0') && (lVar12 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
LAB_014dd099:
  if (*(int *)(unaff_RDI[0x21] + 0xc) == 0) {
    return;
  }
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if ((((local_88[0] == '\0') && (local_90 != 0)) && (FUN_00d50b00(), local_88[0] != '\0')) &&
     (local_90 != 0)) {
    FUN_00d50b20();
  }
  uVar1 = *(uint *)(local_90 + 0x30);
  uVar8 = (ulonglong)(int)uVar1;
  local_48 = DAT_0241c3a0 / *(double *)(local_90 + 0x38);
  local_80 = 0;
  local_68 = 0;
  local_60 = 0.0;
  uVar9 = (**(code **)(*unaff_RDI + 0x3a0))();
  local_80 = 0;
  local_68 = 0;
  local_60 = 0.0;
  uVar26 = 0;
  cVar4 = (**(code **)(*unaff_RDI + 1000))();
  iVar19 = -1;
  if ((cVar4 != '\0') && (lVar12 = **(longlong **)(unaff_RDI[0x21] + 0x10), lVar12 != 0)) {
    local_80 = 0;
    local_68 = 0;
    local_60 = 0.0;
    uVar26 = 0;
    FUN_00d50b00();
    iVar19 = *(int *)(lVar12 + 0xc);
    FUN_00d50b20();
  }
  if ((uVar9 | uVar8) >> 0x20 == 0) {
    iVar6 = (int)((uVar9 & 0xffffffff) / (ulonglong)uVar1);
  }
  else {
    iVar6 = (int)((longlong)uVar9 / (longlong)uVar8);
  }
  uVar18 = ((int)(local_48 + DAT_023942d0) - iVar19) + iVar6 + 1;
  if ((int)uVar18 < 0) {
    uVar18 = 0;
  }
  lVar12 = unaff_RDI[0x21];
  uVar15 = *(int *)(lVar12 + 0xc) - 1;
  uVar9 = (ulonglong)uVar15;
  dVar17 = 0.0;
  if ((int)uVar18 < (int)uVar15) {
    uVar22 = (ulonglong)uVar18;
    local_9c = 0.0;
    lVar13 = 0;
    uVar24 = 0;
    do {
      lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + uVar22 * 8);
      uVar5 = FUN_014ec110(*(undefined4 *)(lVar12 + 0xc),(ulonglong)local_70 & 0xffffffff,param_3,
                           param_4,uVar26);
      local_48 = (double)CONCAT44(local_48._4_4_,uVar5);
      uVar9 = (ulonglong)local_50 & 0xffffffff;
      fVar25 = (float)FUN_014ec110(uVar9,*(int *)(lVar12 + 0xc) + 1);
      if ((local_48._0_4_ <= fVar25) || (fVar25 = (float)FUN_014eeb80(), fVar25 <= local_9c)) {
LAB_014dd360:
        dVar11 = (double)(ulonglong)uVar24;
        lVar12 = lVar13;
        local_48 = dVar11;
      }
      else {
        uVar10 = FUN_014eeb80();
        local_9c = extraout_XMM0_Da;
        if (lVar13 == lVar12) {
          if (((char)uVar24 != '\0') || (lVar13 == 0)) goto LAB_014dd360;
          local_48 = (double)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
          dVar11 = (double)FUN_00d50b00();
          lVar12 = lVar13;
        }
        else {
          uVar10 = FUN_00d50b00();
          dVar11 = (double)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
          local_48 = dVar11;
          if (((char)uVar24 != '\0') && (lVar13 != 0)) {
            dVar11 = (double)FUN_00d50b20();
          }
        }
      }
      lVar13 = lVar12;
      if ((ulonglong)uVar15 - 1 == uVar22) goto LAB_014dd38d;
      lVar12 = unaff_RDI[0x21];
      uVar22 = uVar22 + 1;
      uVar24 = SUB84(local_48,0);
    } while( true );
  }
LAB_014dd3f8:
  cVar4 = (**(code **)(*unaff_RDI + 1000))();
  local_60 = (double)CONCAT71((int7)(uVar9 >> 8),1);
  if (cVar4 == '\0') {
    local_38 = 0;
    dVar11 = 0.0;
    local_80 = 0;
    local_68 = 0;
    local_78 = 0;
    local_50 = (longlong *)0x0;
    lVar13 = 0;
    local_48 = dVar17;
    goto LAB_014dd52f;
  }
  FUN_00d23340();
  pcVar20 = local_58;
  if (local_88[0] != '\0') {
    pcVar20 = local_88;
  }
  local_58[0] = local_88[0];
  *pcVar20 = '\0';
  if ((local_88[0] != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] == '\0') && (local_90 != 0)) {
    FUN_00d50b00();
  }
  local_48 = 4.94065645841247e-324;
  lVar13 = local_90;
  if (local_90 == 0) {
    local_48 = (double)(ulonglong)(SUB84(dVar17,0) & 0xff);
  }
LAB_014dd512:
  local_38 = 0;
  dVar11 = 0.0;
  local_80 = 0;
  local_68 = 0;
  local_78 = 0;
  local_50 = (longlong *)0x0;
LAB_014dd52f:
  iVar19 = *(int *)(lVar13 + 0xc);
  lVar13 = (**(code **)(*unaff_RDI + 0x380))();
  lVar12 = (**(code **)(*unaff_RDI + 0x388))();
  lVar13 = ((longlong)iVar19 + 1) * uVar8 - lVar13;
  iVar19 = (int)(uVar1 * 3) / 2;
  if (lVar12 - iVar19 < lVar13) {
    lVar13 = (**(code **)(*unaff_RDI + 0x388))((longlong)iVar19,iVar19,param_3,param_4,uVar26);
  }
  FUN_00d64850();
  unaff_RDI[0x1b] = lVar13;
  FUN_00d64910();
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  dVar17 = local_48;
  if ((SUB81(dVar11,0) != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (SUB81(dVar17,0) != '\0') {
    FUN_00d50b20();
  }
  if (SUB81(local_60,0) == '\0' && local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
LAB_014dd38d:
  dVar17 = local_48;
  if (lVar13 == 0) goto LAB_014dd3f8;
  local_50 = (longlong *)unaff_RDI[0x23];
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b00();
    pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
    plVar21 = local_50;
    if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), plVar21 = local_50, lVar12 != 0)) {
      plVar21 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar21 + 1000))();
    lVar12 = **(longlong **)(plVar21[0x21] + 0x10);
    uVar10 = FUN_00d50b00();
    uVar10 = FUN_014c34a0(uVar10,*(undefined4 *)(lVar12 + 0xc));
    if (local_90 == 0) {
      local_68 = 0;
      local_80 = 0;
    }
    else {
      local_80 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      if (local_88[0] == '\0') {
        FUN_00d50b00();
        local_68 = local_90;
      }
      else {
        local_68 = local_90;
      }
    }
    uVar10 = FUN_00d50b20();
    local_78 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    if (local_90 == 0) {
      local_38 = 0;
      dVar11 = 0.0;
      local_68 = 0;
      local_60 = 0.0;
      goto LAB_014dd52f;
    }
    iVar19 = *(int *)(local_68 + 0xc);
    cVar4 = (**(code **)(*unaff_RDI + 1000))();
    if (cVar4 == '\0') {
      dVar2 = MACH_HEADER.filetype;
      dVar17 = local_60;
      local_60 = local_48;
    }
    else {
      lVar12 = **(longlong **)(unaff_RDI[0x21] + 0x10);
      if (lVar12 != 0) {
        FUN_00d50b00();
      }
      dVar2 = *(dword *)(lVar12 + 0xc);
      FUN_00d50b20();
      dVar17 = local_60;
      local_60 = local_48;
    }
    bVar3 = local_48._0_1_ != '\0';
    local_48 = local_60;
    if (bVar3) {
      uVar26 = 1;
      FUN_00d50b00();
      dVar17 = local_60;
    }
    local_60 = dVar17;
    lVar12 = unaff_RDI[0x21];
    dVar17 = (double)((ulonglong)local_48 & 0xffffffff);
    local_38 = lVar13;
    local_70 = dVar17;
    if (0 < *(int *)(lVar12 + 0xc)) {
      local_60 = (double)CONCAT44(local_60._4_4_,(int)(dVar2 + iVar19) / 2);
      uVar24 = *(int *)(local_68 + 0xc) - *(int *)(lVar13 + 0xc);
      dVar17 = (double)(ulonglong)uVar24;
      uVar15 = -uVar24;
      if (0 < (int)uVar24) {
        uVar15 = uVar24;
      }
      lVar23 = 0;
      local_70 = local_48;
      do {
        lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + lVar23 * 8);
        fVar25 = (float)FUN_014eeb80(dVar17,local_70,param_3,param_4,uVar26);
        if ((((DAT_0239424c < fVar25) && (iVar19 = *(int *)(lVar12 + 0xc), (int)uVar18 <= iVar19))
            && (local_60._0_4_ < iVar19)) && (iVar19 < *(int *)(lVar13 + 0xc))) {
          uVar16 = *(int *)(local_68 + 0xc) - iVar19;
          uVar24 = -uVar16;
          if (0 < (int)uVar16) {
            uVar24 = uVar16;
          }
          uVar26 = (ulonglong)uVar24;
          if ((int)uVar24 < (int)uVar15) {
            if (local_38 == lVar12) {
              uVar15 = uVar24;
              if ((SUB81(local_70,0) == '\0') && (local_38 != 0)) {
                local_70 = (double)CONCAT71((int7)((ulonglong)local_70 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              FUN_00d50b00();
              uVar15 = (uint)uVar26;
              if ((SUB81(local_70,0) == '\0') || (local_38 == 0)) {
                local_70 = (double)CONCAT71((int7)((ulonglong)local_70 >> 8),1);
                local_38 = lVar12;
              }
              else {
                uVar10 = FUN_00d50b20();
                local_70 = (double)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
                local_38 = lVar12;
              }
            }
          }
        }
        lVar23 = lVar23 + 1;
        lVar12 = unaff_RDI[0x21];
        dVar17 = (double)(longlong)*(int *)(lVar12 + 0xc);
      } while (lVar23 < (longlong)dVar17);
      if (local_38 == 0) {
        local_38 = 0;
        local_60 = 0.0;
        dVar11 = local_70;
        goto LAB_014dd52f;
      }
    }
    uVar26 = CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
    local_60 = local_48;
    uVar10 = FUN_014eeb80(dVar17,local_48,param_3,param_4,uVar26);
    plVar21 = local_50;
    dVar11 = local_70;
    if (extraout_XMM0_Da_00 * DAT_02390d2c <= local_9c) {
      local_78 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    }
    else {
      uVar14 = (undefined7)((ulonglong)local_38 >> 8);
      if (lVar13 != local_38) {
        local_78 = CONCAT71(uVar14,1);
        if (SUB81(local_70,0) != '\0') {
          uVar26 = CONCAT71(uVar14,1);
          local_60 = local_48;
          FUN_00d50b00();
        }
        plVar21 = local_50;
        dVar11 = local_70;
        lVar13 = local_38;
        if (SUB81(local_48,0) == '\0') {
          local_60 = 0.0;
          local_50 = plVar21;
          local_48 = (double)((ulonglong)local_70 & 0xffffffff);
        }
        else {
          uVar26 = 1;
          local_60 = local_48;
          FUN_00d50b20();
          local_60 = 0.0;
          local_78 = 1;
          local_50 = plVar21;
          local_48 = (double)((ulonglong)dVar11 & 0xffffffff);
        }
        goto LAB_014dd52f;
      }
      if (SUB81(local_70,0) == '\0') {
        local_60 = 0.0;
        local_78 = 1;
        local_50 = plVar21;
        local_38 = lVar13;
        goto LAB_014dd52f;
      }
      if (local_48._0_1_ == '\0') {
        uVar26 = CONCAT71(uVar14,1);
        local_60 = 0.0;
        uVar10 = FUN_00d50b00();
        uVar14 = (undefined7)((ulonglong)uVar10 >> 8);
        local_78 = CONCAT71(uVar14,1);
        local_50 = plVar21;
        local_48 = (double)CONCAT71(uVar14,1);
        local_38 = lVar13;
        goto LAB_014dd52f;
      }
      local_78 = 1;
      local_38 = lVar13;
    }
    local_60 = 0.0;
    local_50 = plVar21;
    goto LAB_014dd52f;
  }
  local_60 = (double)CONCAT71((int7)((ulonglong)dVar11 >> 8),1);
  goto LAB_014dd512;
}


