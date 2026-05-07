// Function: FUN_00c338a0
// Address: 00c338a0
// Size: 589 bytes
// Class: GNOverloudTapedesk


/* WARNING: Removing unreachable block (ram,0x00c33a08) */
/* WARNING: Removing unreachable block (ram,0x00c33a11) */

void FUN_00c338a0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *unaff_RDI;
  longlong **pplVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM1_Dc;
  longlong *plVar8;
  undefined4 local_4c;
  longlong *local_40;
  char local_38;
  
  pplVar4 = &local_40;
  (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_40;
  FUN_00209700();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_00c33900;
  }
  pplVar4 = (longlong **)&DAT_02802688;
LAB_00c33900:
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    local_4c = (undefined4)plVar1[0x3d];
    *(undefined4 *)(plVar1 + 0x3d) = 0x3f8eb852;
  }
  (**(code **)(*unaff_RDI + 0x640))();
  plVar8 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_01e3f820();
  uVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*unaff_RDI + 0xa70))();
  (**(code **)(*plVar8 + 0x3f0))(uVar5,0xf,0,uVar3);
  unaff_RDI[0x3a] = 0x3f8000003f19999a;
  uVar3 = 0;
  plVar8 = plVar1;
  uVar6 = FUN_01e3f820();
  uVar5 = extraout_XMM0_Dc;
  uVar7 = (**(code **)(*unaff_RDI + 0x930))();
  (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*unaff_RDI + 0xa70))();
  FUN_00c32cc0(uVar6,param_2,uVar7,DAT_02390128,plVar8,uVar3,uVar6,uVar5,param_2,in_XMM1_Dc);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 0x3d) = local_4c;
  }
  FUN_00d50b20();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


