// Function: FUN_008874c0
// Address: 008874c0
// Size: 626 bytes
// Class: MDWorkspaceView
// String references:
//   "MDWorkspaceView"


/* WARNING: Removing unreachable block (ram,0x008875ac) */
/* WARNING: Removing unreachable block (ram,0x008875b5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_008874c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 unaff_RBX;
  undefined7 uVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  float extraout_XMM0_Db;
  float fVar8;
  float fVar9;
  longlong local_70;
  char local_68;
  
  fVar8 = (float)((ulonglong)param_2 >> 0x20);
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x4d8))();
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  cVar3 = '\x01';
  fVar9 = 0.0;
  if (fVar8 < DAT_023b8c38) goto LAB_00887658;
  plVar5 = (longlong *)*unaff_RSI;
  if ((DAT_026fddd0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026d9988 = FUN_0006d940();
    _DAT_026d9970 = "MDWorkspaceView";
    _DAT_026d9978 = 0x188;
    _DAT_026d9980 = FUN_000a3150;
    _DAT_026d9990 = 0;
    uRam00000000026d9998 = 0;
    _DAT_026d99a0 = 0;
    _DAT_026d9a18 = 0;
    uRam00000000026d9a20 = 0;
    _DAT_026d9a28 = 0;
    DAT_026d9a2a = 1;
    _DAT_026d99a8 = 0;
    uRam00000000026d99b0 = 0;
    _DAT_026d99b8 = 0;
    uRam00000000026d99c0 = 0;
    _DAT_026d99c8 = 0;
    uRam00000000026d99d0 = 0;
    _DAT_026d99d8 = 0;
    uRam00000000026d99e0 = 0;
    _DAT_026d99e8 = 0;
    uRam00000000026d99f0 = 0;
    _DAT_026d99f8 = 0;
    uRam00000000026d9a00 = 0;
    _DAT_026d9a08 = 0;
    uRam00000000026d9a10 = 0;
    DAT_026d9a33 = 0;
    _DAT_026d9a2b = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_00887533:
    plVar5 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = unaff_RSI;
    if (cVar3 == '\0') goto LAB_00887533;
  }
  lVar1 = *plVar5;
  lVar2 = plVar5[1];
  if (((char)lVar2 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x938))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x938))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x4a0))();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      goto LAB_008875ba;
    }
  }
  else if (local_70 != 0) {
LAB_008875ba:
    for (lVar7 = 0; (int)lVar7 < *(int *)(local_70 + 0xc); lVar7 = lVar7 + 1) {
      (**(code **)(**(longlong **)(*(longlong *)(local_70 + 0x10) + lVar7 * 8) + 0x528))();
    }
    FUN_000a9680();
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x528))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x4d8))();
  cVar3 = -(extraout_XMM0_Db <= fVar9);
  uVar6 = 0;
  if (((char)lVar2 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
LAB_00887658:
  return CONCAT71(uVar6,cVar3) & 0xffffff01;
}


