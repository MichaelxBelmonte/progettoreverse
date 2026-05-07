// Function: FUN_01d883a0
// Address: 01d883a0
// Size: 634 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d883a0(uint32_t param_1)

{
  void*puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t arg1;
  int64_t *this_ptr;
  uint uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint32_t uVar10;
  float fVar11;
  float fVar12;
  float local_a8;
  float fStack_a4;
  uint32_t local_98;
  uint64_t local_78;
  uint64_t local_68;
  int64_t local_48;
  char local_40;
  
  lVar4 = *(int64_t *)(arg1 + 0x1b0);
  uVar6 = *(uint *)(lVar4 + 0x18);
  if ((uVar6 & 0xfffffff0) == 0x800) {
    FUN_00c8e340(param_1,0);
  }
  else if (0xf < (int)uVar6) {
    uVar6 = uVar6 >> 4;
    lVar8 = 0;
    lVar7 = (int64_t)(int)(uVar6 - 1);
    if (lVar7 < 1) goto LAB_01d88530;
    do {
      lVar4 = *(int64_t *)(lVar4 + 0x10);
      lVar5 = lVar8 * 0x10;
      local_78 = *(void*)(lVar4 + lVar5);
      local_68 = *(void*)(lVar4 + 8 + lVar5);
      lVar9 = lVar7 << 4;
      while( true ) {
        lVar7 = lVar7 + -1;
        uVar2 = *(void*)(lVar4 + lVar9);
        uVar3 = *(void*)(lVar4 + 8 + lVar9);
        fVar11 = (float)local_68;
        fVar12 = local_68._4_4_;
        FUN_00d05360((uint32_t)local_78);
        local_a8 = (float)uVar3;
        fStack_a4 = (float)((uint64_t)uVar3 >> 0x20);
        if ((local_68._4_4_ * (float)local_68 * g_0239011c < fVar12 * fVar11) ||
           (fStack_a4 * local_a8 * g_0239011c < fVar12 * fVar11)) {
          local_98 = (uint32_t)uVar2;
          local_78 = FUN_00d052e0(local_98,local_a8,(uint32_t)local_78,(float)local_68);
          local_68 = CONCAT44(fStack_a4,local_a8);
          puVar1 = (void*)(*(int64_t *)(*(int64_t *)(arg1 + 0x1b0) + 0x10) + lVar5);
          *puVar1 = local_78;
          *(float *)(puVar1 + 1) = local_a8;
          *(float *)((int64_t)puVar1 + 0xc) = fStack_a4;
          FUN_00e7b4e0();
          FUN_00c921e0();
          uVar6 = uVar6 - 1;
        }
        if (lVar7 <= lVar8) break;
        lVar4 = *(int64_t *)(*(int64_t *)(arg1 + 0x1b0) + 0x10);
        lVar9 = lVar9 + -0x10;
      }
LAB_01d88530:
      do {
        lVar8 = lVar8 + 1;
        if ((int)uVar6 <= lVar8) goto LAB_01d8855a;
        lVar4 = *(int64_t *)(arg1 + 0x1b0);
        lVar7 = (int64_t)(int)(uVar6 - 1);
      } while (lVar7 <= lVar8);
    } while( true );
  }
LAB_01d8855a:
  lVar4 = *(int64_t *)(arg1 + 0x1b0);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  uVar10 = FUN_00c92160();
  if (lVar4 != 0) {
    uVar10 = FUN_00d50b20();
  }
  FUN_00c8e340(uVar10,0);
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  return;
}

