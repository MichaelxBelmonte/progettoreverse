// Function: FUN_01eabaa0
// Address: 01eabaa0
// Size: 572 bytes
// Class: Unknown

uint64_t FUN_01eabaa0(void)

{
  double dVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t lVar5;
  double dVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint8_t local_c8 [8];
  uint8_t local_c0 [8];
  uint8_t local_b8 [8];
  double local_b0;
  double dStack_a8;
  uint64_t local_a0;
  uint64_t uStack_98;
  int64_t local_90;
  double local_88;
  double local_80;
  uint64_t local_78;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  int64_t local_60;
  double local_58;
  int64_t local_50;
  double local_48;
  
  FUN_00e7b4e0();
  (**(code **)(*this_ptr + 0x3b0))();
  iVar2 = (**(code **)(*this_ptr + 0x3e0))();
  lVar3 = *(int64_t *)(*(int64_t *)(this_ptr[9] + 0x10) + (int64_t)iVar2 * 8);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_50 = lVar3;
  local_78 = _CTLineGetGlyphRuns();
  local_48 = (double)*(float *)(lVar3 + 0xc) + *(double *)(*(int64_t *)(lVar3 + 0x30) + 0x10);
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
      local_a0._4_4_ = (uint32_t)((uint64_t)local_58 >> 0x20);
      uStack_98._0_4_ = SUB84(local_80,0);
      uStack_98._4_4_ = (uint32_t)((uint64_t)local_80 >> 0x20);
      uVar7 = (uint32_t)local_a0;
      uVar8 = local_a0._4_4_;
      uVar9 = (uint32_t)uStack_98;
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
        if ((int64_t)unaff_ESI <= *(int64_t *)(lVar3 + lVar5 * 8)) break;
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

