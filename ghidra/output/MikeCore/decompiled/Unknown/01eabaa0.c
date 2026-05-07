// Function: FUN_01eabaa0
// Address: 01eabaa0
// Size: 572 bytes
// Class: Unknown


undefined8 FUN_01eabaa0(void)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong lVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  double local_b0;
  double dStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_60;
  double local_58;
  longlong local_50;
  double local_48;
  
  FUN_00e7b4e0();
  (**(code **)(*unaff_RDI + 0x3b0))();
  iVar2 = (**(code **)(*unaff_RDI + 0x3e0))();
  lVar3 = *(longlong *)(*(longlong *)(unaff_RDI[9] + 0x10) + (longlong)iVar2 * 8);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_50 = lVar3;
  local_78 = _CTLineGetGlyphRuns();
  local_48 = (double)*(float *)(lVar3 + 0xc) + *(double *)(*(longlong *)(lVar3 + 0x30) + 0x10);
  local_88 = (double)*(float *)(lVar3 + 0x10);
  local_80 = (double)*(float *)(lVar3 + 0x18);
  local_60 = 0;
  do {
    lVar3 = _CFArrayGetCount();
    if (lVar3 <= local_60) {
      local_b0 = local_48;
      dStack_a8 = local_88;
      local_a0 = local_58;
      dVar6 = local_a0;
      uStack_98 = local_80;
      dVar1 = uStack_98;
      local_a0._0_4_ = SUB84(local_58,0);
      local_a0._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
      uStack_98._0_4_ = SUB84(local_80,0);
      uStack_98._4_4_ = (undefined4)((ulonglong)local_80 >> 0x20);
      uVar7 = (undefined4)local_a0;
      uVar8 = local_a0._4_4_;
      uVar9 = (undefined4)uStack_98;
      uVar10 = uStack_98._4_4_;
      local_a0 = dVar6;
      uStack_98 = dVar1;
      local_48 = (double)FUN_01f26e90();
      local_78 = CONCAT44(uVar8,uVar7);
      if (local_50 != 0) {
        uStack_70 = uVar9;
        uStack_6c = uVar10;
        FUN_00d50b20();
      }
      return local_48;
    }
    _CFArrayGetValueAtIndex();
    lVar4 = _CTRunGetGlyphCount();
    lVar3 = _CTRunGetStringIndicesPtr();
    if (lVar3 == 0) {
      lVar5 = FUN_00e83010();
      _CTRunGetStringIndices(lVar5,0);
      lVar3 = lVar5;
    }
    else {
      lVar5 = 0;
    }
    local_90 = lVar5;
    dVar6 = local_58;
    if (0 < lVar4) {
      lVar5 = 0;
      do {
        dVar6 = (double)_CTRunGetTypographicBounds(local_c8,1,local_c0,local_b8);
        if ((longlong)unaff_ESI <= *(longlong *)(lVar3 + lVar5 * 8)) break;
        local_48 = local_48 + dVar6;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    local_58 = dVar6;
    if (local_90 != 0) {
      FUN_00e83070();
    }
    local_60 = local_60 + 1;
  } while( true );
}


