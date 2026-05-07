// Function: FUN_01a20ee0
// Address: 01a20ee0
// Size: 1869 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_01a20ee0(void* param_1,float param_2)

{
  uint8_t auVar1 [16];
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar13 [16];
  int64_t *local_d8;
  char local_d0;
  float local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  int64_t *local_40;
  char local_38;
  
  iVar3 = FUN_01d3a5a0();
  if (iVar3 != 1) {
LAB_01a21104:
    FUN_01e459c0();
    return;
  }
  iVar3 = FUN_01d3b630();
  if (iVar3 != 1) {
    iVar3 = FUN_01d3b630();
    if (iVar3 == 2) {
      FUN_01a1d6e0();
      (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                  *local_d8 + 0x38))();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if (local_d0 != '\0') {
        FUN_00d50b20();
      }
      if (local_40 == (int64_t *)0x0) {
        return;
      }
      FUN_01d3abf0();
      uVar11 = FUN_01e466c0();
      uVar12 = (**(code **)(*this_ptr + 0x4d8))();
      FUN_01a1d6e0();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01d62b10();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b00();
      local_58 = (float)uVar12;
      uStack_54 = (uint32_t)((uint64_t)uVar12 >> 0x20);
      uStack_50 = (uint32_t)extraout_XMM0_Qb_00;
      uStack_4c = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
      auVar1._8_8_ = extraout_XMM0_Qb;
      auVar1._0_8_ = uVar11;
      auVar13._4_4_ = uStack_54;
      auVar13._0_4_ = local_58 + param_2 + g_02390d00 + g_023b8b2c;
      auVar13._8_4_ = uStack_50;
      auVar13._12_4_ = uStack_4c;
      auVar13 = blendps(auVar1,auVar13,1);
      FUN_01d5ef60(auVar13._0_8_,g_02420ca0);
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_01d62b80();
      (**(code **)(*this_ptr + 0x620))();
      FUN_00d50b20();
      return;
    }
    goto LAB_01a21104;
  }
  FUN_01d3abf0();
  FUN_01e466c0();
  (**(code **)(*this_ptr + 0x928))();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  (**(code **)(*this_ptr + 0x920))();
  pvVar7 = _pthread_getspecific(param_1);
  plVar9 = local_40;
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    plVar9 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  iVar3 = (**(code **)(*plVar9 + 0x3a8))();
  lVar8 = FUN_00e7b4e0();
  this_ptr[0x28] = lVar8;
  (**(code **)(*this_ptr + 0x620))();
  iVar4 = FUN_01d3b620();
  plVar9 = (int64_t *)(uint64_t)(1 - iVar3);
  while( true ) {
    (**(code **)(*this_ptr + 0x658))();
    plVar10 = (int64_t *)*arg1;
    if (plVar10 != local_40) break;
    if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01a212dc;
      }
LAB_01a21292:
      *(void*)(arg1 + 1) = 1;
      local_38 = '\0';
    }
    if (*arg1 == 0) goto LAB_01a213ea;
LAB_01a212ee:
    iVar5 = FUN_01d3a5a0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar5 == 6) goto LAB_01a213fe;
    iVar5 = FUN_01d3a5a0();
    if (iVar5 == 5) {
      FUN_01d3abf0();
      FUN_01e466c0();
      FUN_01e3f820();
      cVar2 = FUN_00d05410();
      if (cVar2 == '\0') {
        lVar8 = FUN_00e7b4e0();
      }
      else {
        (**(code **)(*this_ptr + 0x920))();
        pvVar7 = _pthread_getspecific((void*)plVar9);
        plVar10 = local_40;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar9 = local_40;
          plVar10 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        iVar5 = (**(code **)(*plVar10 + 0x3a8))();
        if (iVar5 < iVar3) {
          lVar8 = FUN_00e7b4e0();
        }
        else {
          lVar8 = FUN_00e7b4e0();
        }
      }
      this_ptr[0x28] = lVar8;
      (**(code **)(*this_ptr + 0x620))();
    }
  }
  lVar8 = arg1[1];
  if (local_38 != '\0') {
    *arg1 = (int64_t)local_40;
    if (((char)lVar8 != '\0') && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_01a21292;
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  *arg1 = (int64_t)local_40;
  if (((char)lVar8 != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a212dc:
  *(void*)(arg1 + 1) = 1;
  if (*arg1 != 0) goto LAB_01a212ee;
LAB_01a213ea:
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a213fe:
  if ((*(int *)((int64_t)this_ptr + 0x144) == 0) || (*arg1 == 0)) goto LAB_01a2161b;
  uVar6 = FUN_01d3b590();
  if (*(int *)((int64_t)this_ptr + 0x144) == 1) {
    if (iVar4 < 2) {
      FUN_01a1d6e0();
      (**(code **)(*local_40 + 0xdf8))(1,(uVar6 & 4) >> 2,1);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01a1d6e0();
      (**(code **)(*local_40 + 0xdf8))(1,1,1);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      FUN_01a1d6e0();
      (**(code **)(*local_40 + 0xe00))(1,(uVar6 & 4) >> 2,1);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01a1d6e0();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((uVar6 & 4) == 0) {
      (**(code **)(*local_40 + 0xda0))();
    }
    iVar3 = *(int *)((int64_t)this_ptr + 0x144);
    if (iVar3 == 0) {
      if (local_40 == (int64_t *)0x0) goto LAB_01a215fc;
    }
    else {
      do {
        (**(code **)(*local_40 + 0xdf8))(1,1,1);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00d50b20();
  }
LAB_01a215fc:
  lVar8 = FUN_00e7b4e0();
  this_ptr[0x28] = lVar8;
  (**(code **)(*this_ptr + 0x620))();
LAB_01a2161b:
  FUN_00d50b20();
  return;
}

