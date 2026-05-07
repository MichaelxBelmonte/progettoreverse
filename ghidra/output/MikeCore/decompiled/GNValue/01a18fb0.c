// Function: FUN_01a18fb0
// Address: 01a18fb0
// Size: 708 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x01a19121) */
/* WARNING: Removing unreachable block (ram,0x01a1912a) */
/* WARNING: Removing unreachable block (ram,0x01a1923f) */
/* WARNING: Removing unreachable block (ram,0x01a19248) */
/* WARNING: Removing unreachable block (ram,0x01a190a3) */
/* WARNING: Removing unreachable block (ram,0x01a190ac) */

void FUN_01a18fb0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *local_48;
  char local_40;
  
  uVar6 = param_2;
  uVar4 = FUN_01e3f820();
  FUN_01a18ed0();
  (**(code **)(*unaff_RDI + 0xa70))();
  (**(code **)(*unaff_RDI + 0x9a0))();
  cVar1 = (**(code **)(*unaff_RDI + 0xb58))();
  uVar5 = (**(code **)(*unaff_RDI + 0xb20))();
  FUN_01d48370();
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))(param_1,param_2);
  (**(code **)(*unaff_RDI + 0x640))();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = FUN_01d91db0();
  if (cVar2 != '\0') {
    (**(code **)(*local_48 + 0x3f0))(uVar4,uVar6,0,cVar1);
  }
  lVar3 = unaff_RDI[0x43];
  if (lVar3 == 0) {
    FUN_01a18460();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 != (longlong *)0x0) {
      FUN_01a18660();
    }
    lVar3 = unaff_RDI[0x43];
    if (lVar3 == 0) goto LAB_01a191da;
  }
  FUN_00d50b00();
  FUN_01d48ff0(uVar4,uVar6,uVar4,uVar6);
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
LAB_01a191da:
  if (cVar1 != '\0') {
    (**(code **)(*local_48 + 0x3f8))(uVar4,uVar6,(int)unaff_RDI[0x2e],uVar5);
  }
  FUN_01d48390();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


