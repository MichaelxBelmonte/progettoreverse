// Function: FUN_01e71840
// Address: 01e71840
// Size: 920 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e71840(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *unaff_RDI;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  
  FUN_01e3b710();
  unaff_RDI[0x29] = 0;
  (**(code **)(*unaff_RDI + 0x4d0))(0,_DAT_0241b400);
  (**(code **)(*unaff_RDI + 0x570))();
  (**(code **)(*unaff_RDI + 0x558))();
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(plVar3 + 0x27) = 0;
  plVar3[0x2e] = 0;
  *(undefined4 *)(plVar3 + 0x2f) = 0;
  plVar3[0x30] = 0;
  *(undefined1 *)(plVar3 + 0x31) = 0;
  plVar3[0x28] = 0;
  plVar3[0x29] = 0;
  *(undefined4 *)(plVar3 + 0x2a) = 0;
  plVar3[0x2b] = 0;
  plVar3[0x2c] = 0;
  *(undefined8 *)((longlong)plVar3 + 0x165) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x18c) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x194) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x199) = 0;
  plVar3[0x35] = 0;
  plVar3[0x36] = 0;
  plVar3[0x37] = 0;
  plVar3[0x38] = 0;
  *plVar3 = (longlong)&DAT_02677e10;
  plVar3[2] = (longlong)&DAT_026788e8;
  plVar3[0x39] = (longlong)&DAT_02678928;
  *(undefined4 *)((longlong)plVar3 + 500) = 0;
  *(undefined1 *)(plVar3 + 0x3f) = 0;
  plVar3[0x43] = 0;
  plVar3[0x3c] = 0;
  plVar3[0x3d] = 0;
  plVar3[0x3a] = 0;
  plVar3[0x3b] = 0;
  *(undefined1 *)(plVar3 + 0x3e) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x1fc) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x204) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x20c) = 0;
  (*DAT_02677e28)();
  (**(code **)(*plVar3 + 0x4d0))(_DAT_02421f10,_DAT_02421f20);
  FUN_01cef4c0();
  lVar1 = DAT_027f4250;
  if (DAT_027f4250 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_02800110;
  if (DAT_02800110 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  local_88 = 0;
  local_80 = '\0';
  FUN_00d31230(&local_88,&local_98);
  lVar2 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  (**(code **)(*plVar3 + 0x958))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  (**(code **)(*plVar3 + 0xa20))();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027f4288;
  if (DAT_027f4288 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  (**(code **)(*plVar3 + 0xa10))();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar3 + 0x558))();
  local_60 = '\0';
  local_68 = plVar3;
  (**(code **)(*unaff_RDI + 0x450))();
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


