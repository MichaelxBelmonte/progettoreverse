// Function: FUN_01dae920
// Address: 01dae920
// Size: 634 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01daea21) */
/* WARNING: Removing unreachable block (ram,0x01daea2a) */
/* WARNING: Removing unreachable block (ram,0x01daeb72) */
/* WARNING: Removing unreachable block (ram,0x01daeb7b) */
/* WARNING: Removing unreachable block (ram,0x01dae997) */
/* WARNING: Removing unreachable block (ram,0x01dae9a0) */

void FUN_01dae920(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *unaff_RDI;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM1_Dc;
  float fVar7;
  longlong *local_78;
  char local_70;
  float local_34;
  
  local_34 = (float)(**(code **)(*unaff_RDI + 0xb10))();
  cVar2 = (**(code **)(*unaff_RDI + 0xaf0))();
  if (cVar2 != '\0') {
    local_34 = DAT_02390124 - local_34;
  }
  (**(code **)(*unaff_RDI + 0x640))();
  if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  uVar4 = FUN_01e3f820();
  uVar6 = extraout_XMM0_Dc;
  uVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*unaff_RDI + 0xa70))();
  (**(code **)(*local_78 + 0x3f0))(uVar4,param_2,0,uVar3,uVar4,uVar6,param_2,in_XMM1_Dc);
  fVar5 = local_34;
  if ((*(int *)((longlong)unaff_RDI + 0x18c) == 0x10) &&
     (lVar1 = unaff_RDI[0x32], fVar5 = DAT_02390d00, lVar1 != 0)) {
    uVar6 = (undefined4)unaff_RDI[0x2e];
    FUN_00d50b00();
    uVar4 = FUN_00c71d60();
    *(undefined4 *)(unaff_RDI + 0x2e) = uVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    fVar5 = (float)(**(code **)(*unaff_RDI + 0xb10))();
    cVar2 = (**(code **)(*unaff_RDI + 0xaf0))();
    if (cVar2 != '\0') {
      fVar5 = DAT_02390124 - fVar5;
    }
    *(undefined4 *)(unaff_RDI + 0x2e) = uVar6;
  }
  fVar7 = fVar5;
  uVar6 = FUN_01e3f820();
  (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*unaff_RDI + 0xa70))();
  FUN_01cc0c20(uVar6,fVar5,local_34,fVar7);
  FUN_00d50b20();
  return;
}


