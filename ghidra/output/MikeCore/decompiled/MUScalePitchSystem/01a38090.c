// Function: FUN_01a38090
// Address: 01a38090
// Size: 886 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01a38118) */
/* WARNING: Removing unreachable block (ram,0x01a38124) */
/* WARNING: Removing unreachable block (ram,0x01a382ca) */
/* WARNING: Removing unreachable block (ram,0x01a382d6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a38090(uint param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  int iVar3;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar8;
  undefined1 auVar7 [16];
  undefined1 local_c8 [16];
  longlong *local_b0;
  char local_a8;
  longlong local_90;
  char local_88;
  ulonglong local_40;
  float fStack_38;
  undefined4 uStack_34;
  
  local_40 = (ulonglong)param_1;
  uStack_34 = (undefined4)unaff_RDI[0x23];
  fStack_38 = param_2;
  FUN_01d48370();
  uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x390))(local_40,fStack_38);
  (**(code **)(*unaff_RDI + 0x9f8))(uVar4,&local_40);
  local_c8._4_4_ = 0;
  local_c8._8_4_ = 0;
  local_c8._12_4_ = 0;
  local_c8._0_4_ = fStack_38 + DAT_02390d30;
  local_40 = CONCAT44(local_40._4_4_,(float)local_40 + DAT_023b1d84);
  fStack_38 = (float)local_c8._0_4_;
  if (((longlong *)unaff_RDI[0x28] != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*(longlong *)unaff_RDI[0x28] + 0xa8))(), cVar2 != '\0')) {
    local_c8._8_4_ = 0;
    local_c8._12_4_ = 0;
    local_c8._0_4_ = fStack_38;
    local_c8._4_4_ = uStack_34;
    FUN_01a368e0(local_40);
  }
  lVar1 = unaff_RDI[0x2c];
  if (lVar1 == 0) {
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_b0 + 0x3a0))();
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    FUN_01d488d0();
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_01d488d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x9e0))();
  if ((local_88 == '\0') && (local_90 != 0)) {
    FUN_00d50b00();
  }
  uVar4 = FUN_01e3f820();
  if (local_90 != 0) {
    if (0 < *(int *)(local_90 + 0xc)) {
      auVar7._8_4_ = (int)extraout_XMM0_Qb;
      auVar7._0_8_ = uVar4;
      auVar7._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
      blendps(local_c8,_DAT_0241be90,0xe);
      iVar3 = 0;
      do {
        FUN_01a37880(local_40,fStack_38);
        fVar8 = auVar7._4_4_;
        auVar5._4_4_ = fVar8;
        auVar5._0_4_ = fVar8;
        auVar5._8_4_ = auVar7._12_4_;
        auVar5._12_4_ = auVar7._12_4_;
        auVar6._4_12_ = auVar5._4_12_;
        auVar6._0_4_ = fVar8 + DAT_023b169c;
        auVar7 = insertps(auVar7,auVar6,0x10);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_90 + 0xc));
    }
    FUN_0010bf70();
  }
  FUN_01d48390();
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  return;
}


