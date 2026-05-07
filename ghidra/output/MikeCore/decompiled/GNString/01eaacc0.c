// Function: FUN_01eaacc0
// Address: 01eaacc0
// Size: 1349 bytes
// Class: GNString


void FUN_01eaacc0(void)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong unaff_RDI;
  float fVar9;
  float extraout_XMM0_Db;
  undefined1 local_120 [8];
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  double *pdStack_100;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  code *local_b0;
  longlong local_a8;
  double local_a0;
  undefined8 local_98;
  double local_90;
  longlong local_88;
  longlong local_80;
  undefined8 *local_78;
  char local_70;
  longlong local_68;
  longlong local_60;
  undefined8 *local_58;
  char local_50;
  double *local_48;
  undefined8 *local_40;
  
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  FUN_01ea9950();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_01ebf700();
  local_40 = local_58;
  if ((local_50 == '\0') && (local_58 != (undefined8 *)0x0)) {
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_98 = _CTFramesetterCreateWithAttributedString();
  lVar3 = _CFAttributedStringGetLength();
  do {
    fVar9 = (float)FUN_01f15df0();
    *(double *)(*(longlong *)(unaff_RDI + 0x38) + 0x18) = (double)fVar9;
    FUN_01f15df0();
    *(double *)(*(longlong *)(unaff_RDI + 0x38) + 0x20) = (double)extraout_XMM0_Db;
    cVar1 = FUN_01f15ea0();
    if (cVar1 == '\0') {
      *(double **)(*(longlong *)(unaff_RDI + 0x38) + 0x18) = DAT_027fe2f8;
    }
    cVar1 = FUN_01f15ec0();
    if (cVar1 == '\0') {
      lVar6 = *(longlong *)(unaff_RDI + 0x38);
      local_48 = DAT_027fe2f8;
      *(double **)(lVar6 + 0x20) = DAT_027fe2f8;
    }
    else {
      lVar6 = *(longlong *)(unaff_RDI + 0x38);
      local_48 = *(double **)(lVar6 + 0x20);
    }
    local_60 = *(longlong *)(lVar6 + 0x18);
    uVar4 = _CGPathCreateMutable();
    local_118 = 0;
    uStack_110 = 0;
    local_108 = local_60;
    pdStack_100 = local_48;
    _CGPathAddRect();
    lVar6 = lVar3;
    lVar5 = _CTFramesetterCreateFrame(uVar4,lVar3,0);
    _CFRelease();
    _CTFrameGetVisibleStringRange();
    if (lVar6 < lVar3) {
      _CFRelease();
      DAT_027fe2f8 = (double *)((double)DAT_027fe2f8 + (double)DAT_027fe2f8);
      lVar5 = 0;
    }
  } while (lVar5 == 0);
  local_68 = lVar5;
  FUN_00d216c0();
  FUN_01f15e70();
  uVar4 = _CTFrameGetLines();
  lVar3 = _CFArrayGetCount();
  if (lVar3 != 0) {
    lVar6 = FUN_00e83010();
    _CTFrameGetLineOrigins(lVar6,0);
    local_c0 = uVar4;
    local_88 = lVar3;
    local_80 = lVar6;
    if (0 < lVar3) {
      local_b0 = DAT_026b7098;
      local_a8 = lVar3 + -1;
      local_48 = (double *)(lVar6 + 8);
      lVar3 = 0;
      local_b8 = &DAT_026b7080;
      do {
        local_60 = lVar3;
        uVar4 = _CFArrayGetValueAtIndex();
        local_90 = (double)_CTLineGetTypographicBounds(local_120,&local_e0);
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = local_b8;
        *(undefined8 *)((longlong)puVar7 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar7 + 0x24) = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        (*local_b0)();
        _CTLineGetStringRange();
        *(float *)((longlong)puVar7 + 0xc) = (float)local_48[-1];
        lVar3 = *(longlong *)(unaff_RDI + 0x38);
        *(float *)((longlong)puVar7 + 0x14) = (float)*(double *)(lVar3 + 0x18);
        local_d8 = *(double *)(lVar3 + 0x20);
        local_d0 = *local_48;
        local_c8 = local_a0;
        fVar9 = (float)(**(code **)(**(longlong **)(unaff_RDI + 0x40) + 0x390))();
        *(float *)(puVar7 + 2) = fVar9 * (float)local_60 + (float)(local_d8 - (local_d0 + local_c8))
        ;
        *(float *)(puVar7 + 3) = (float)(local_a0 + local_e0);
        if (local_a8 != local_60) {
          local_90 = *(double *)(*(longlong *)(unaff_RDI + 0x38) + 0x18);
        }
        *(float *)((longlong)puVar7 + 0x14) = (float)local_90;
        *(float *)((longlong)puVar7 + 0x1c) = (float)local_a0;
        *(float *)(puVar7 + 4) = (float)local_e0;
        uVar8 = FUN_00e7b4e0();
        *(undefined8 *)((longlong)puVar7 + 0x24) = uVar8;
        *(undefined8 *)(puVar7[6] + 0x20) = uVar4;
        _CFRetain();
        lVar3 = puVar7[6];
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(double *)(lVar3 + 0x18) = *local_48;
        local_50 = '\0';
        local_58 = puVar7;
        FUN_00d21140();
        lVar3 = local_60;
        if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_70 = '\0';
        local_78 = puVar7;
        FUN_01f15e00();
        if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        lVar3 = lVar3 + 1;
        local_48 = local_48 + 2;
      } while (local_88 != lVar3);
    }
    FUN_00e83070();
  }
  _CFRelease();
  _CFRelease();
  *(undefined4 *)(unaff_RDI + 0x18) = 0;
  uVar2 = FUN_00d8c7a0();
  *(undefined4 *)(unaff_RDI + 0x1c) = uVar2;
  if (local_40 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


