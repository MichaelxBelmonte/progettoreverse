// Function: FUN_01baae50
// Address: 01baae50
// Size: 509 bytes
// Class: MUElementPitchInspector


void FUN_01baae50(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *unaff_RDI;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  undefined1 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  (**(code **)(*unaff_RDI + 0x630))();
  local_48 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_60 = 1;
  uVar6 = (**(code **)(*unaff_RDI + 0x688))();
  local_31 = (**(code **)(*unaff_RDI + 0x698))();
  local_b8 = unaff_RDI[0x1b];
  if (local_b8 != 0) {
    FUN_00d50b00();
  }
  local_b0 = 1;
  lVar1 = unaff_RDI[0x1c];
  local_40 = local_b8;
  local_32 = uVar6;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_a0 = 1;
  lVar2 = unaff_RDI[0x1d];
  local_a8 = lVar1;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_90 = 1;
  lVar3 = unaff_RDI[0x20];
  local_98 = lVar2;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_80 = 1;
  lVar4 = unaff_RDI[0x1f];
  local_88 = lVar3;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_70 = 1;
  local_78 = lVar4;
  FUN_01bab160(local_31,local_32,&local_b8,&local_a8);
  lVar5 = local_48;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}


