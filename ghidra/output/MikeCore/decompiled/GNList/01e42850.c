// Function: FUN_01e42850
// Address: 01e42850
// Size: 675 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01e42a2d) */
/* WARNING: Removing unreachable block (ram,0x01e42a32) */
/* WARNING: Removing unreachable block (ram,0x01e429ec) */
/* WARNING: Removing unreachable block (ram,0x01e429f5) */
/* WARNING: Removing unreachable block (ram,0x01e42927) */
/* WARNING: Removing unreachable block (ram,0x01e42930) */
/* WARNING: Removing unreachable block (ram,0x01e42959) */
/* WARNING: Removing unreachable block (ram,0x01e4295e) */
/* WARNING: Removing unreachable block (ram,0x01e42aa0) */
/* WARNING: Removing unreachable block (ram,0x01e42aa9) */
/* WARNING: Removing unreachable block (ram,0x01e42898) */
/* WARNING: Removing unreachable block (ram,0x01e428a1) */
/* WARNING: Removing unreachable block (ram,0x01e428e5) */
/* WARNING: Removing unreachable block (ram,0x01e428ee) */

void FUN_01e42850(void)

{
  char cVar1;
  longlong *unaff_RDI;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  longlong *local_50;
  char local_48;
  longlong *in_stack_ffffffffffffffc0;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x7b8))();
  if (local_38 == '\0') {
    if (in_stack_ffffffffffffffc0 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (in_stack_ffffffffffffffc0 == (longlong *)0x0) {
    return;
  }
  FUN_01d97850();
  if (local_38 == '\0') {
    if (in_stack_ffffffffffffffc0 == (longlong *)0x0) goto LAB_01e42ad8;
    FUN_00d50b00();
  }
  else if (in_stack_ffffffffffffffc0 == (longlong *)0x0) goto LAB_01e42ad8;
  FUN_01d99a50();
  FUN_00d50b00();
  cVar1 = FUN_00d24090();
  if (cVar1 == '\0') {
    FUN_01d982e0();
  }
  FUN_00d50b20();
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*in_stack_ffffffffffffffc0 + 0x7b0))();
  fVar2 = (float)(**(code **)(*unaff_RDI + 0x4d8))();
  (**(code **)(*unaff_RDI + 0x7b0))();
  fVar3 = (float)(**(code **)(*local_50 + 0x4d8))();
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  auVar6 = blendps(ZEXT416(0),ZEXT416((uint)((fVar2 - fVar3) + 0.0)),1);
  FUN_01d98320();
  (**(code **)(*in_stack_ffffffffffffffc0 + 0x7b0))();
  uVar4 = (**(code **)(*unaff_RDI + 0x4d8))();
  (**(code **)(*unaff_RDI + 0x7b0))();
  uVar5 = (**(code **)(*local_50 + 0x4d8))();
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_78 = (float)uVar4;
  fStack_74 = (float)((ulonglong)uVar4 >> 0x20);
  fStack_70 = (float)extraout_XMM0_Qb;
  fStack_6c = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  local_88 = (float)uVar5;
  fStack_84 = (float)((ulonglong)uVar5 >> 0x20);
  fStack_80 = (float)extraout_XMM0_Qb_00;
  fStack_7c = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  auVar7._0_4_ = (local_78 - local_88) + auVar6._0_4_;
  auVar7._4_4_ = (fStack_74 - fStack_84) + auVar6._4_4_;
  auVar7._8_4_ = (fStack_70 - fStack_80) + auVar6._8_4_;
  auVar7._12_4_ = (fStack_6c - fStack_7c) + auVar6._12_4_;
  blendps(auVar6,auVar7,2);
  FUN_00d50b20();
LAB_01e42ad8:
  FUN_00d50b20();
  return;
}


