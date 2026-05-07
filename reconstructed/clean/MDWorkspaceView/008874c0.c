// Function: FUN_008874c0
// Address: 008874c0
// Size: 626 bytes
// Class: MDWorkspaceView
// String references:
//   "MDWorkspaceView"
// === MDWorkspaceView properties ===
//   bool            _isVertical
//   bool            _allowsChainedResize
//   GNCoord         _size
//   GNCoord         _paddingLineSize
//   GNBorderStyle   _borderStyle


uint64_t FUN_008874c0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  uint64_t unaff_RBX;
  undefined7 uVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar7;
  float extraout_XMM0_Db;
  float fVar8;
  float fVar9;
  int64_t local_70;
  char local_68;
  
  fVar8 = (float)((uint64_t)param_2 >> 0x20);
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x4d8))();
  uVar6 = (undefined7)((uint64_t)unaff_RBX >> 8);
  cVar3 = '\x01';
  fVar9 = 0.0;
  if (fVar8 < g_023b8c38) goto LAB_00887658;
  plVar5 = (int64_t *)*arg1;
  if ((g_026fddd0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026d9988 = FUN_0006d940();
    g_026d9970 = "MDWorkspaceView";
    g_026d9978 = 0x188;
    g_026d9980 = FUN_000a3150;
    g_026d9990 = 0;
    ram_00000000026d9998 = 0;
    g_026d99a0 = 0;
    g_026d9a18 = 0;
    ram_00000000026d9a20 = 0;
    g_026d9a28 = 0;
    g_026d9a2a = 1;
    g_026d99a8 = 0;
    ram_00000000026d99b0 = 0;
    g_026d99b8 = 0;
    ram_00000000026d99c0 = 0;
    g_026d99c8 = 0;
    ram_00000000026d99d0 = 0;
    g_026d99d8 = 0;
    ram_00000000026d99e0 = 0;
    g_026d99e8 = 0;
    ram_00000000026d99f0 = 0;
    g_026d99f8 = 0;
    ram_00000000026d9a00 = 0;
    g_026d9a08 = 0;
    ram_00000000026d9a10 = 0;
    g_026d9a33 = 0;
    g_026d9a2b = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (int64_t *)0x0) {
LAB_00887533:
    plVar5 = &g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = arg1;
    if (cVar3 == '\0') goto LAB_00887533;
  }
  lVar1 = *plVar5;
  lVar2 = plVar5[1];
  if (((char)lVar2 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x938))();
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x938))();
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x4a0))();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      goto LAB_008875ba;
    }
  }
  else if (local_70 != 0) {
LAB_008875ba:
    for (lVar7 = 0; (int)lVar7 < *(int *)(local_70 + 0xc); lVar7 = lVar7 + 1) {
      (**(code **)(**(int64_t **)(*(int64_t *)(local_70 + 0x10) + lVar7 * 8) + 0x528))();
    }
    FUN_000a9680();
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x528))();
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x4d8))();
  cVar3 = -(extraout_XMM0_Db <= fVar9);
  uVar6 = 0;
  if (((char)lVar2 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
LAB_00887658:
  return CONCAT71(uVar6,cVar3) & 0xffffff01;
}

