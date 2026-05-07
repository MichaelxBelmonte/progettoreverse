// Function: FUN_01d09150
// Address: 01d09150
// Size: 692 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01d093c9) */
/* WARNING: Removing unreachable block (ram,0x01d093d5) */
/* WARNING: Removing unreachable block (ram,0x01d09299) */
/* WARNING: Removing unreachable block (ram,0x01d092a2) */

void FUN_01d09150(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_38;
  char local_30;
  
  FUN_01d3abf0();
  FUN_01e466c0();
  (**(code **)(*unaff_RDI + 0x640))();
  FUN_01e3f820();
  uVar4 = (**(code **)(*local_38 + 0x548))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar1 = (**(code **)(*unaff_RDI + 0x9a0))();
  if ((((cVar1 != '\0') && (cVar1 = FUN_01e05890(), cVar1 != '\0')) &&
      (iVar2 = FUN_01d3a5a0(), iVar2 == 1)) && (iVar2 = FUN_01d3b630(), iVar2 == 1)) {
    local_b8 = (float)uVar4;
    fStack_b4 = (float)((ulonglong)uVar4 >> 0x20);
    fStack_b0 = (float)extraout_XMM0_Qb;
    fStack_ac = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
    cVar1 = FUN_00d05410();
    if (cVar1 == '\0') {
      cVar1 = FUN_01e42250();
      if (cVar1 == '\0') {
        return;
      }
      (**(code **)(*unaff_RDI + 0xb50))();
      if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      uVar4 = FUN_01e3f820();
      FUN_01e3f820();
      fVar7 = local_b8;
      FUN_00d50b00();
      FUN_01e3f820();
      local_88 = 0;
      local_80 = '\0';
      uVar3 = (**(code **)(*unaff_RDI + 0x9d0))();
      FUN_00d50b00();
      auVar6._8_8_ = extraout_XMM0_Qb_00;
      auVar6._0_8_ = uVar4;
      auVar5._0_4_ = local_b8 + (float)uVar4;
      auVar5._4_4_ = fStack_b4 + (float)((ulonglong)uVar4 >> 0x20);
      auVar5._8_4_ = fStack_b0 + (float)extraout_XMM0_Qb_00;
      auVar5._12_4_ = fStack_ac + (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      auVar6 = blendps(auVar5,auVar6,0xd);
      local_78 = 0;
      local_70 = '\0';
      FUN_01d5efd0(auVar6._0_8_,fVar7,&local_88,uVar3);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_38 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  local_68 = *unaff_RSI;
  local_60 = '\0';
  FUN_01e0b690();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  return;
}


