// Function: FUN_01cf9ae0
// Address: 01cf9ae0
// Size: 664 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cf9ae0(undefined8 param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *unaff_RDI;
  float fVar7;
  undefined8 in_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 local_48 [8];
  undefined8 uStack_40;
  longlong *local_38;
  char local_30;
  
  uStack_40 = in_XMM0_Qb;
  local_48 = (undefined1  [8])param_1;
  plVar1 = (longlong *)unaff_RDI[6];
  if ((DAT_026f0e00 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_026f8e78 = FUN_0006d940();
    _DAT_026f8e60 = "GNScrollView";
    _DAT_026f8e68 = 0x1c0;
    _DAT_026f8e70 = FUN_00074e80;
    _DAT_026f8e80 = 0;
    uRam00000000026f8e88 = 0;
    _DAT_026f8e90 = 0;
    uRam00000000026f8e98 = 0;
    _DAT_026f8ea0 = 0;
    uRam00000000026f8ea8 = 0;
    _DAT_026f8eb0 = 0;
    uRam00000000026f8eb8 = 0;
    _DAT_026f8ec0 = 0;
    uRam00000000026f8ec8 = 0;
    _DAT_026f8ed0 = 0;
    uRam00000000026f8ed8 = 0;
    _DAT_026f8ee0 = 0;
    uRam00000000026f8ee8 = 0;
    _DAT_026f8ef0 = 0;
    uRam00000000026f8ef8 = 0;
    _DAT_026f8f00 = 0;
    uRam00000000026f8f08 = 0;
    _DAT_026f8f10 = 0;
    uRam00000000026f8f18 = 0;
    _DAT_026f8f20 = 0;
    ___cxa_guard_release();
  }
  lVar4 = DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    lVar4 = DAT_02802688;
    if (cVar5 != '\0') {
      lVar4 = unaff_RDI[6];
    }
  }
  if (lVar4 == 0) {
    cVar5 = '\0';
    bVar3 = false;
  }
  else {
    FUN_00d50b00();
    cVar5 = FUN_01d951e0();
    if (cVar5 == '\0') {
      bVar3 = false;
    }
    else {
      (**(code **)(*unaff_RDI + 0x640))();
      fVar7 = (float)(**(code **)(*local_38 + 0x580))();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      auVar9._4_12_ = local_48._4_12_;
      auVar9._0_4_ = (float)param_1 - fVar7;
      _local_48 = blendps(auVar9,_DAT_0241fd60,0xe);
      bVar3 = true;
    }
    cVar5 = FUN_01d95200();
    if (cVar5 != '\0') {
      blendps(_local_48,ZEXT416(DAT_02391078),1);
    }
    FUN_00d50b20();
  }
  if ((longlong *)unaff_RDI[0x27] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x5c0))();
    local_48 = (undefined1  [8])(**(code **)(*(longlong *)unaff_RDI[0x27] + 0x5c8))();
    uStack_40 = extraout_XMM0_Qb;
    if (bVar3) {
      if (cVar5 == '\0') {
        (**(code **)(*unaff_RDI + 0x640))();
        uVar8 = (**(code **)(*local_38 + 0x580))();
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        auVar2._8_8_ = extraout_XMM0_Qb_00;
        auVar2._0_8_ = uVar8;
        auVar12._4_12_ = auVar2._4_12_;
        auVar12._0_4_ = (float)uVar8 + 0.0;
        insertps(_local_48,auVar12,0x10);
      }
    }
    else if (cVar5 != '\0') {
      (**(code **)(*unaff_RDI + 0x640))();
      fVar7 = (float)(**(code **)(*local_38 + 0x578))();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
      uStack_40._4_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar10._4_4_ = local_48._4_4_;
      auVar10._0_4_ = local_48._4_4_;
      auVar10._8_4_ = uStack_40._4_4_;
      auVar10._12_4_ = uStack_40._4_4_;
      auVar11._4_12_ = auVar10._4_12_;
      auVar11._0_4_ = (float)local_48._4_4_ + fVar7;
      insertps(auVar11,auVar11,0x1d);
    }
  }
  return;
}


